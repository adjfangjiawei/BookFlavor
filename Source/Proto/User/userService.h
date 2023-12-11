
#include <RuntimeError.h>

#include <stdexcept>
#include <string>
#include <system_error>
#include <vector>
#include <ylt/struct_pack.hpp>

namespace userpb {
    // 用户的结构体
    struct User {
        // output only
        std::string name;
        std::string displayName;
        std::string email;
        std::string phoneNumber;
        std::string password;
    };

    // 用户的服务
    // 创建用户
    extern Util::RuntimeError createUser(const User& user);

    // 删除用户
    extern Util::RuntimeError deleteUser(const std::string& name);

    // 修改用户
    extern Util::RuntimeError updateUser(const User& user, const std::vector<std::string>& updateMask);
}  // namespace userpb