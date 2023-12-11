#include <User/userService.h>
#include <phonenumbers/phonenumberutil.h>

#include <iostream>
#include <stdexcept>
#include <system_error>
#include <tuple>

namespace {
    struct PhoneNumberRelateInfo {
        std::string region_code;
        i18n::phonenumbers::PhoneNumberUtil::PhoneNumberType number_type;
    };
}  // namespace

auto processPhoneNumber(const std::string &phoneNumber) -> std::tuple<PhoneNumberRelateInfo, std::runtime_error> {
    PhoneNumberRelateInfo info;

    // 定义一个电话号码,用于存储解析后的电话号码
    i18n::phonenumbers::PhoneNumber phone_number;
    // 解析电话号码
    i18n::phonenumbers::PhoneNumberUtil &phone_util = *i18n::phonenumbers::PhoneNumberUtil::GetInstance();

    auto getParseErrorDescription = [](i18n::phonenumbers::PhoneNumberUtil::ErrorType error_type) -> std::string {
        switch (error_type) {
            case i18n::phonenumbers::PhoneNumberUtil::NO_PARSING_ERROR:
                return "NO_PARSING_ERROR";
            case i18n::phonenumbers::PhoneNumberUtil::INVALID_COUNTRY_CODE_ERROR:
                return "INVALID_COUNTRY_CODE_ERROR";
            case i18n::phonenumbers::PhoneNumberUtil::NOT_A_NUMBER:
                return "NOT_A_NUMBER";
            case i18n::phonenumbers::PhoneNumberUtil::TOO_SHORT_AFTER_IDD:
                return "TOO_SHORT_AFTER_IDD";
            case i18n::phonenumbers::PhoneNumberUtil::TOO_SHORT_NSN:
                return "TOO_SHORT_NSN";
            case i18n::phonenumbers::PhoneNumberUtil::TOO_LONG_NSN:
                return "TOO_LONG_NSN";
            default:
                return "UNKNOWN_ERROR";
        }
    };
    auto phoneNumberParseError = phone_util.Parse(phoneNumber, "US", &phone_number);
    if (phoneNumberParseError != i18n::phonenumbers::PhoneNumberUtil::NO_PARSING_ERROR) {
        return std::make_tuple(info, std::runtime_error(getParseErrorDescription(phoneNumberParseError)));
    }

    // 获得地区码
    std::string region_code;
    phone_util.GetRegionCodeForNumber(phone_number, &region_code);
    info.region_code = region_code;

    // Get the number type
    i18n::phonenumbers::PhoneNumberUtil::PhoneNumberType number_type = phone_util.GetNumberType(phone_number);
    std::cout << "Number type: " << number_type << std::endl;

    // Check if the number type is not suitable for verification
    if (number_type == i18n::phonenumbers::PhoneNumberUtil::VOIP || number_type == i18n::phonenumbers::PhoneNumberUtil::TOLL_FREE) {
        std::cout << "The phone number type is not suitable for verification." << std::endl;
        return std::make_tuple(info, std::runtime_error("The phone number type is not suitable for verification."));
    }
    return std::make_tuple(info, std::runtime_error(""));
}

Util::RuntimeError userpb::createUser(const User &user) {
    auto phoneNumber = user.phoneNumber;
    auto password = user.password;
    auto username = user.displayName;
    auto email = user.email;
    processPhoneNumber(phoneNumber);
    return Util::RuntimeError("Not implemented");
}