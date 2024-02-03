#pragma once
#include <boost/regex.hpp>
#include <boost/regex/v5/regex_fwd.hpp>
#include <string>
#include <string_view>

#include "../RuntimeError.h"

namespace Util {
    // 用户资源名,形如:users/*,其中*为数据库中的id，为uint64_t类型
    inline const boost::regex UserIDResourceNameRegex("users/([0-9]+)");
    namespace UserIDResourceName {
        inline auto UserGetIDFromName(const std::string& name) -> std::pair<uint64_t, Util::RuntimeError> {
            boost::smatch match;
            if (boost::regex_match(name, match, UserIDResourceNameRegex)) {
                return {std::stoull(match[1]), Util::RuntimeError("")};
            } else {
                return {0, Util::RuntimeError("invalid user resource name")};
            }
        }

        inline auto UserGetNameFromID(uint64_t id) -> std::string { return "users/" + std::to_string(id); }
    }  // namespace UserIDResourceName

}  // namespace Util
