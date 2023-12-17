
#include <RuntimeError.h>
#include <sqlpp11/mysql/connection.h>
#include <sw/redis++/redis++.h>
#include <sw/redis++/redis.h>

#include <libconfig.h++>
#include <stdexcept>
#include <string>
#include <system_error>
#include <vector>
#include <ylt/struct_pack.hpp>

namespace userpb {
    class UserServer {
      public:
        sqlpp::mysql::connection&& db;
        std::shared_ptr<libconfig::Config> commonConfig;
        sw::redis::Redis& rdbPhoneNumber;

        UserServer(std::shared_ptr<libconfig::Config> commonConfig, sqlpp::mysql::connection&& db, sw::redis::Redis& rdbPhoneNumber)
            : db(std::forward<sqlpp::mysql::connection>(db)), commonConfig(commonConfig), rdbPhoneNumber(rdbPhoneNumber) {}

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

        Util::RuntimeError echo();
    };
}  // namespace userpb