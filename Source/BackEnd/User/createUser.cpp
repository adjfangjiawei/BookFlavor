#include <Logfield.h>
#include <PhoneNumberErrorCode.h>
#include <User/userServicePb.h>
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
using namespace std::string_literals;

namespace {
    struct PhoneNumberRelateInfo {
        std::string region_code;
        i18n::phonenumbers::PhoneNumberUtil::PhoneNumberType number_type;
    };
}  // namespace

auto processPhoneNumber(const std::string &phoneNumber) -> std::tuple<PhoneNumberRelateInfo, std::runtime_error> {
    auto logfield = Util::Log("main");
    logfield = logfield.withField("function", "processPhoneNumber");

    PhoneNumberRelateInfo info;

    // 定义一个电话号码,用于存储解析后的电话号码
    i18n::phonenumbers::PhoneNumber phone_number;

    // 解析电话号码
    i18n::phonenumbers::PhoneNumberUtil &phone_util = *i18n::phonenumbers::PhoneNumberUtil::GetInstance();
    auto phoneNumberParseError = phone_util.Parse(phoneNumber, "US", &phone_number);
    if (phoneNumberParseError != i18n::phonenumbers::PhoneNumberUtil::NO_PARSING_ERROR) {
        auto err = Util::make_error_code(phoneNumberParseError);
        logfield.withRuntimeError(std::runtime_error(err.message())).error("Parse phone number error.");
        return std::make_tuple(info, std::runtime_error(err.message()));
    }

    // 检查电话号码是否有效
    if (!phone_util.IsValidNumber(phone_number)) {
        logfield.withField("phone_number", phoneNumber).error("The phone number is invalid.");
        return std::make_tuple(info, std::runtime_error("The phone number is invalid."));
    }

    // 格式化电话号码为国际格式
    std::string international_format;
    phone_util.Format(phone_number, i18n::phonenumbers::PhoneNumberUtil::INTERNATIONAL, &international_format);

    // 获得地区码
    std::string region_code;
    phone_util.GetRegionCodeForNumber(phone_number, &region_code);
    info.region_code = region_code;

    // 获得电话号码类型
    i18n::phonenumbers::PhoneNumberUtil::PhoneNumberType number_type = phone_util.GetNumberType(phone_number);
    // 检查电话号码类型是否合适用于短信验证
    if (number_type != i18n::phonenumbers::PhoneNumberUtil::MOBILE && number_type == i18n::phonenumbers::PhoneNumberUtil::FIXED_LINE_OR_MOBILE) {
        logfield.withField("number_type", number_type).error("The phone number type is not suitable for verification.");
        return std::make_tuple(info, std::runtime_error("The phone number type is not suitable for verification."));
    }
    info.number_type = number_type;

    return std::make_tuple(info, std::runtime_error(""));
}

Util::RuntimeError userpb::UserServer::createUser(const User &user) {
    auto phoneNumber = user.phoneNumber;
    auto password = user.password;
    auto username = user.displayName;
    auto email = user.email;
    auto [phoneNumberRelatedInfo, err] = processPhoneNumber(phoneNumber);
    if (err.what() != ""s) {
        return Util::RuntimeError(err.what());
    }

    // 创建一个UserRegister对象
    UserSQLdb::UserRegister userRegister{};

    // 插入新的记录
    db(sqlpp::insert_into(userRegister).set(userRegister.name = username, userRegister.phoneNumber = phoneNumber, userRegister.password = password));

    return Util::RuntimeError("Not implemented");
}