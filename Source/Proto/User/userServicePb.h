#pragma once
#include <RuntimeError.h>
#include <async_simple/coro/FutureAwaiter.h>
#include <async_simple/coro/SyncAwait.h>
#include <sqlpp11/mysql/connection.h>
#include <sw/redis++/redis++.h>
#include <sw/redis++/redis.h>

#include <libconfig.h++>
#include <stdexcept>
#include <string>
#include <system_error>
#include <vector>
#include <ylt/coro_rpc/coro_rpc_client.hpp>
#include <ylt/struct_pack.hpp>

namespace userpb {
    class UserServer {
      public:
        sqlpp::mysql::connection&& db;
        std::shared_ptr<libconfig::Config> commonConfig;
        sw::redis::Redis& rdbPhoneNumber;
        coro_rpc::coro_rpc_client emailClient;

        UserServer(std::shared_ptr<libconfig::Config> commonConfig, sqlpp::mysql::connection&& db, sw::redis::Redis& rdbPhoneNumber);

        // 用户的结构体
        struct User {
            // output only
            std::string name;
            std::string displayName;
            std::string email;
            std::string phoneNumber;
            std::string password;
            int country;
        };

        // 用户的服务
        // 创建用户
        Util::RuntimeError createUser(const User& user);

        // 删除用户
        Util::RuntimeError deleteUser(const std::string& name);

        // 修改用户
        Util::RuntimeError updateUser(const User& user, const std::vector<std::string>& updateMask);

        // 列出用户
        std::pair<std::vector<User>, Util::RuntimeError> listUsers(const std::string& filter, const std::string& orderBy, uint64_t limit, uint64_t offset);
    };
}  // namespace userpb