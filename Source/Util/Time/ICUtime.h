#include <unicode/calendar.h>
#include <unicode/udat.h>
#include <unicode/unistr.h>

#include <memory>
#include <utility>
#include <ylt/struct_pack.hpp>

#include "../RuntimeError.h"
#include "ylt/struct_pack/reflection.hpp"
namespace Util {

    // ICU时间类包装
    class ICUTime : public std::enable_shared_from_this<ICUTime> {
      private:
        UDate date;

      public:
        // 基于秒时间戳创建ICUTime对象
        static std::shared_ptr<ICUTime> unixSeconds(int64_t seconds);

        // 基于毫秒时间戳创建ICUTime对象
        static std::shared_ptr<ICUTime> unixMilliseconds(int64_t milliseconds);

        // 转化为Calender对象
        std::pair<std::shared_ptr<icu::Calendar>, Util::RuntimeError> toCalendar();

        // 转化为Date对象
        UDate toDate();

        // 格式化
        std::pair<icu::UnicodeString, Util::RuntimeError> format(const icu::UnicodeString& pattern);

        STRUCT_PACK_FRIEND_DECL(ICUTime);
    };
    STRUCT_PACK_REFL(ICUTime, date)

}  // namespace Util