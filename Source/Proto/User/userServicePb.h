#pragma once
#include <RuntimeError.h>
#include <Time/ICUtime.h>
#include <async_simple/coro/FutureAwaiter.h>
#include <async_simple/coro/SyncAwait.h>
#include <sqlpp11/mysql/connection.h>
#include <sw/redis++/redis++.h>
#include <sw/redis++/redis.h>

#include <libconfig.h++>
#include <memory>
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
            // 用户资源名
            std::string name;

            // 用户名
            std::string displayName;

            // 用户的邮箱
            std::string email;

            // 用户的手机号
            std::string phoneNumber;

            // 用户的密码
            std::string password;

            // 用户的国家
            int country;

            // 用户的创建时间,TODO:检查是否可以使用ICUTime，能否使用shared_ptr,暂时没把移动硬盘带过来，没法编译
            Util::ICUTime createTime;

            // 用户的更新时间
            Util::ICUTime updateTime;

            // 用户权限
            enum class UserReight {
                USER_REIGHT_UNKNOWN = 0,
                // 超级管理员
                USER_REIGHT_SUPER_ADMIN = 1,
                // 管理员
                USER_REIGHT_ADMIN = 2,
                // 操作员
                USER_REIGHT_OPERATOR = 3,
                // 普通用户
                USER_REIGHT_NORMAL = 4,
            };

            // 用户的权限
            UserReight right;

            // 备注
            std::string remark;

            // 最后一次登录时间
            Util::ICUTime lastLoginTime;

            // 最后一次登录IP
            std::string lastLoginIP;
        };

        // 用户的服务
        // 创建用户
        Util::RuntimeError createUser(const User& user);

        // 删除用户
        Util::RuntimeError deleteUser(const std::string& name);

        // 批量删除用户
        Util::RuntimeError batchDeleteUser(const std::vector<std::string>& names);

        // 修改用户
        Util::RuntimeError updateUser(const User& user, const std::vector<std::string>& updateMask);

        // 列出用户
        std::pair<std::vector<User>, Util::RuntimeError> listUsers(const std::string& filter, const std::string& orderBy, uint64_t limit, uint64_t offset);

        // 登录的返回结构体
        struct LoginResponse {
            User user;
            std::string token;
            uint32_t expire_in;
        };

        // 登录
        std::pair<LoginResponse, Util::RuntimeError> login(const std::string& name, const std::string& password);

        // 登出
        Util::RuntimeError logout(const std::string& token);

        // 修改密码
        Util::RuntimeError changePassword(const std::string& name, const std::string& displayName, const std::string& oldPassword, const std::string& newPassword);

        // 通过用户Token获取用户信息
        std::pair<User, Util::RuntimeError> getUserByToken(const std::string& token);
    };
}  // namespace userpb