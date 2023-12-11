
#include <stdexcept>
#include <string>
#include <system_error>
#include <vector>
#include <ylt/struct_pack.hpp>

class myruntimeerror : public std::runtime_error {
    std::string message;

  public:
    myruntimeerror(const std::string& what_arg) : std::runtime_error(what_arg) { message = ; }
    STRUCT_PACK_FRIEND_DECL(myruntimeerror);
};
STRUCT_PACK_REFL(myruntimeerror, message);

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
    extern myruntimeerror createUser(const User& user);

    // 删除用户
    extern std::error_code deleteUser(const std::string& name);

    // 修改用户
    extern std::error_code updateUser(const User& user, const std::vector<std::string>& updateMask);
}  // namespace userpb