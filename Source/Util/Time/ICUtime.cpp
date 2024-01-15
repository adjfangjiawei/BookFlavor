#include "ICUtime.h"

#include <unicode/datefmt.h>
#include <unicode/smpdtfmt.h>
#include <unicode/unistr.h>
#include <unicode/utypes.h>

#include <memory>
#include <utility>
namespace Util {
    std::shared_ptr<ICUTime> ICUTime::unixSeconds(int64_t seconds) {
        auto result = std::make_shared<ICUTime>();
        result->date = seconds * 1000;
        return result;
    }

    std::shared_ptr<ICUTime> ICUTime::unixMilliseconds(int64_t milliseconds) {
        auto result = std::make_shared<ICUTime>();
        result->date = milliseconds;
        return result;
    }

    std::pair<std::shared_ptr<icu::Calendar>, Util::RuntimeError> ICUTime::toCalendar() {
        UErrorCode status = U_ZERO_ERROR;
        auto calendar = icu::Calendar::createInstance(status);
        if (U_FAILURE(status)) {
            return std::make_pair(nullptr, Util::RuntimeError(u_errorName(status)));
        }
        std::shared_ptr<icu::Calendar> result(calendar, [](icu::Calendar* ptr) {
            if (ptr != nullptr) {
                delete ptr;
            }
        });
        result->setTime(date, status);
        if (U_FAILURE(status)) {
            return std::make_pair(nullptr, Util::RuntimeError(u_errorName(status)));
        }
        return std::make_pair(result, Util::RuntimeError());
    }

    UDate ICUTime::toDate() { return date; }

    std::pair<icu::UnicodeString, Util::RuntimeError> ICUTime::format(const icu::UnicodeString& pattern) {
        UErrorCode status = U_ZERO_ERROR;
        icu::SimpleDateFormat formatter(pattern, status);
        if (U_FAILURE(status)) {
            return std::make_pair(icu::UnicodeString(), Util::RuntimeError(u_errorName(status)));
        }
        icu::UnicodeString result;
        formatter.format(date, result, status);
        if (U_FAILURE(status)) {
            return std::make_pair(icu::UnicodeString(), Util::RuntimeError(u_errorName(status)));
        }
        return std::make_pair(result, Util::RuntimeError());
    }
}  // namespace Util