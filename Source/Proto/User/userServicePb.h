
#include <RuntimeError.h>
#include <sqlpp11/mysql/connection.h>

#include <libconfig.h++>
#include <stdexcept>
#include <string>
#include <system_error>
#include <vector>
#include <ylt/struct_pack.hpp>

namespace userpb {
    class UserServer {
        sqlpp::mysql::connection&& db;
        std::shared_ptr<libconfig::Config> commonConfig;

      public:
        UserServer(std::shared_ptr<libconfig::Config> commonConfig, sqlpp::mysql::connection&& db) : db(std::forward<sqlpp::mysql::connection>(db)), commonConfig(commonConfig) {}
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
        Util::RuntimeError createUser(const User& user);

        // 删除用户
        Util::RuntimeError deleteUser(const std::string& name);

        // 修改用户
        Util::RuntimeError updateUser(const User& user, const std::vector<std::string>& updateMask);
    };
}  // namespace userpb