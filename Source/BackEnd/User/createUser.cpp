#include <Logfield.h>
#include <PhoneNumberErrorCode.h>
#include <User/userServicePb.h>
#include <phonenumbers/phonenumber.pb.h>
#include <phonenumbers/phonenumberutil.h>
#include <sqlpp11/mysql/mysql.h>
#include <sqlpp11/sqlpp11.h>

#include <iostream>
#include <libconfig.h++>
#include <memory>
#include <stdexcept>
#include <system_error>
#include <tuple>

#include "db/userSQLdb.h"
#include "db/userSQLdbExtra.h"
#include "ylt/struct_pack.hpp"
using namespace std::string_literals;
// Redis电话号码信息结构
class RdbPhoneNumberInfo {
  public:
    UserSQLdb::Province province;
    std::string city;
    int zip;
    int areaCode;
    UserSQLdb::Carrier cardType;
};
STRUCT_PACK_REFL(RdbPhoneNumberInfo, province, city, zip, areaCode, cardType);

namespace {
    struct PhoneNumberRelateInfo {
        std::string phone_number;
        std::string region_code;
        i18n::phonenumbers::PhoneNumberUtil::PhoneNumberType number_type;
        UserSQLdb::Province province;
        std::string city;
        int zip;
        int area_code;
        UserSQLdb::Carrier card_type;
    };
}  // namespace

auto processPhoneNumber(userpb::UserServer *server, const std::string &phoneNumber) -> std::tuple<PhoneNumberRelateInfo, std::runtime_error> {
    auto logfield = Util::Log("main");
    logfield = logfield.withField("function", "processPhoneNumber");

    PhoneNumberRelateInfo info;

    // 定义一个电话号码,用于存储解析后的电话号码
    i18n::phonenumbers::PhoneNumber phone_number;

    // 解析电话号码
    i18n::phonenumbers::PhoneNumberUtil &phone_util = *i18n::phonenumbers::PhoneNumberUtil::GetInstance();
    auto phoneNumberParseError = phone_util.Parse(phoneNumber, "CN", &phone_number);
    if (phoneNumberParseError != i18n::phonenumbers::PhoneNumberUtil::NO_PARSING_ERROR) {
        auto err = Util::make_error_code(phoneNumberParseError);
        logfield.withRuntimeError(std::runtime_error(err.message())).error("Parse phone number error.");
        return std::make_tuple(info, std::runtime_error(err.message()));
    }

    // 检查号码有没有国家码
    if (!phone_number.has_country_code()) {
        i18n::phonenumbers::PhoneNumberUtil::ErrorType status = phone_util.ParseAndKeepRawInput(phoneNumber, "CN", &phone_number);
        if (status != i18n::phonenumbers::PhoneNumberUtil::NO_PARSING_ERROR) {
            auto err = Util::make_error_code(status);
            logfield.withRuntimeError(std::runtime_error(err.message())).error("Parse phone number error.");
            return std::make_tuple(info, std::runtime_error(err.message()));
        }
    }
    // 设置转化为有了国家编码的电话号码
    std::string formatted_phone_number;
    phone_util.Format(phone_number, i18n::phonenumbers::PhoneNumberUtil::E164, &formatted_phone_number);
    info.phone_number = formatted_phone_number;

    // 检查电话号码是否有效
    if (!phone_util.IsValidNumber(phone_number)) {
        logfield.withField("phone_number", phoneNumber).error("The phone number is invalid.");
        return std::make_tuple(info, std::runtime_error("The phone number is invalid."));
    }

    // 获得地区码
    std::string region_code;
    phone_util.GetRegionCodeForNumber(phone_number, &region_code);
    info.region_code = region_code;

    // 获得电话号码类型
    i18n::phonenumbers::PhoneNumberUtil::PhoneNumberType number_type = phone_util.GetNumberType(phone_number);
    // 检查电话号码类型是否合适用于短信验证
    if (number_type != i18n::phonenumbers::PhoneNumberUtil::MOBILE && number_type != i18n::phonenumbers::PhoneNumberUtil::FIXED_LINE_OR_MOBILE) {
        logfield.withField("number_type", number_type).error("The phone number type is not suitable for verification.");
        return std::make_tuple(info, std::runtime_error("The phone number type is not suitable for verification."));
    }
    info.number_type = number_type;
    std::string national_number;
    phone_util.GetNationalSignificantNumber(phone_number, &national_number);
    logfield.info("phone number without region code" + national_number);

    // 使用归属地数据库查询出电话号码的归属地信息,暂时只支持中国大陆
    if (info.region_code != "CN") {
        return std::make_tuple(info, std::runtime_error(""));
    }
    auto phoneNumberInfo = server->rdbPhoneNumber.get(national_number.substr(0, 7));
    if (phoneNumberInfo.has_value()) {
        auto phoneNumberInfoValueBytes = phoneNumberInfo.value();
        auto phoneNumberInfoStructPb = struct_pack::deserialize<RdbPhoneNumberInfo>(phoneNumberInfoValueBytes);
        auto phoneNumberInfoStructPbVal = phoneNumberInfoStructPb.value();
        info.area_code = phoneNumberInfoStructPbVal.areaCode;
        info.card_type = phoneNumberInfoStructPbVal.cardType;
        info.city = phoneNumberInfoStructPbVal.city;
        info.province = phoneNumberInfoStructPbVal.province;
        info.zip = phoneNumberInfoStructPbVal.zip;
    }

    return std::make_tuple(info, std::runtime_error(""));
}

Util::RuntimeError userpb::UserServer::createUser(const User &user) {
    auto phoneNumber = user.phoneNumber;
    auto password = user.password;
    auto username = user.displayName;
    auto email = user.email;
    auto [phoneNumberRelatedInfo, err] = processPhoneNumber(this, phoneNumber);
    if (err.what() != ""s) {
        return Util::RuntimeError(err.what());
    }

    // 创建一个UserRegister对象
    UserSQLdb::UserRegister userRegister{};

    // 检查该电话号码的用户是否已经存在
    auto existUser = db(sqlpp::select(sqlpp::count(userRegister.id)).from(UserSQLdb::UserRegister{}).where(userRegister.phonenumberCode == phoneNumber));

    if (existUser.front().count.value() != 0) {
        return Util::RuntimeError("The user already exists.");
    }

    // 插入新的记录
    db(sqlpp::insert_into(UserSQLdb::UserRegister{})
           .set(userRegister.country = user.country,
                userRegister.name = username,
                userRegister.password = password,
                userRegister.phonenumberCode = phoneNumberRelatedInfo.phone_number,
                userRegister.phonenumberProvince = UserSQLdb::ProvinceToString(phoneNumberRelatedInfo.province),
                userRegister.phonenumberRegionCode = phoneNumberRelatedInfo.region_code,
                userRegister.phonenumberType = UserSQLdb::PhoneNumberTypeToString(phoneNumberRelatedInfo.number_type),
                userRegister.phonenumberCity = phoneNumberRelatedInfo.city,
                userRegister.phonenumberZip = phoneNumberRelatedInfo.zip,
                userRegister.phonenumberAreaCode = phoneNumberRelatedInfo.area_code,
                userRegister.phonenumberCarrier = UserSQLdb::CarrierToString(phoneNumberRelatedInfo.card_type)));

    return Util::RuntimeError("Not implemented");
}