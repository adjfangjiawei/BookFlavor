#include <User/user.h>
#include <phonenumbers/phonenumberutil.h>

#include <iostream>
#include <stdexcept>
#include <system_error>
auto processPhoneNumber(const std::string &phoneNumber) -> std::error_code {
    std::string number_to_parse = "+14155552671";
    i18n::phonenumbers::PhoneNumber phone_number;

    i18n::phonenumbers::PhoneNumberUtil &phone_util = *i18n::phonenumbers::PhoneNumberUtil::GetInstance();
    phone_util.Parse(number_to_parse, "US", &phone_number);

    // Get the region code
    std::string region_code;
    phone_util.GetRegionCodeForNumber(phone_number, &region_code);
    std::cout << "Region code: " << region_code << std::endl;

    // Get the number type
    i18n::phonenumbers::PhoneNumberUtil::PhoneNumberType number_type = phone_util.GetNumberType(phone_number);
    std::cout << "Number type: " << number_type << std::endl;

    // Check if the number type is not suitable for verification
    if (number_type == i18n::phonenumbers::PhoneNumberUtil::VOIP || number_type == i18n::phonenumbers::PhoneNumberUtil::TOLL_FREE) {
        std::cout << "The phone number type is not suitable for verification." << std::endl;
        return std::error_code();
    }
    return std::error_code();
}

myruntimeerror userpb::createUser(const User &user) {
    auto err = std::runtime_error("Not implemented");
    std::cout << err.what() << std::endl;
    auto phoneNumber = user.phoneNumber;
    auto password = user.password;
    auto username = user.displayName;
    auto email = user.email;
    ;
    return myruntimeerror("Not implemented");
}