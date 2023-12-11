#include <phonenumbers/phonenumberutil.h>

#include <system_error>

namespace Util {
    // 自定义的error_category
    class PhoneNumberErrorCategory : public std::error_category {
      public:
        const char* name() const noexcept override { return "PhoneNumberError"; }

        std::string message(int ev) const override {
            switch (static_cast<i18n::phonenumbers::PhoneNumberUtil::ErrorType>(ev)) {
                case i18n::phonenumbers::PhoneNumberUtil::NO_PARSING_ERROR:
                    return "No parsing error";
                case i18n::phonenumbers::PhoneNumberUtil::INVALID_COUNTRY_CODE_ERROR:
                    return "Invalid country code error";
                case i18n::phonenumbers::PhoneNumberUtil::NOT_A_NUMBER:
                    return "Not a number";
                case i18n::phonenumbers::PhoneNumberUtil::TOO_SHORT_AFTER_IDD:
                    return "Too short after IDD";
                case i18n::phonenumbers::PhoneNumberUtil::TOO_SHORT_NSN:
                    return "Too short NSN";
                case i18n::phonenumbers::PhoneNumberUtil::TOO_LONG_NSN:
                    return "Too long NSN";
                default:
                    return "Unknown error";
            }
        }
    };

    // 创建std::error_code
    inline std::error_code make_error_code(i18n::phonenumbers::PhoneNumberUtil::ErrorType e) {
        static PhoneNumberErrorCategory category;
        return {static_cast<int>(e), category};
    }
}  // namespace Util