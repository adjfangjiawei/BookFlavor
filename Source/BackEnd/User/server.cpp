#include "server.h"

#include <User/userServicePb.h>
#include <sqlpp11/mysql/connection.h>
#include <sw/redis++/redis++.h>

#include <functional>
#include <stdexcept>
#include <system_error>
#include <utility>
#include <ylt/coro_rpc/coro_rpc_server.hpp>
#include <ylt/struct_pack.hpp>
namespace UserService {
    auto InitPkg(std::shared_ptr<libconfig::Config> commonConfig, sqlpp::mysql::connection &&db) -> void {
        // 用户服务
        int userPort = commonConfig->lookup("userServer.port");
        int thread = commonConfig->lookup("userServer.thread");

        coro_rpc::coro_rpc_server server(/*thread_num =*/thread, /*port =*/userPort);

        // 创建一个Redis对象，连接到配置文件中的Redis服务器
        int rdbPhoneNumberHost = commonConfig->lookup("redis.kvrocksPhonenumber.host");
        int rdbPhoneNumberPort = commonConfig->lookup("redis.kvrocksPhonenumber.port");
        sw::redis::Redis rdbPhoneNumber{"tcp://" + std::to_string(rdbPhoneNumberHost) + ":" + std::to_string(rdbPhoneNumberPort)};

        userpb::UserServer userServerBody{commonConfig, std::forward<sqlpp::mysql::connection>(db), rdbPhoneNumber};
        // 注册服务
        // 创建用户
        server.register_handler<&userpb::UserServer::createUser>(&userServerBody);

        // 删除用户
        server.register_handler<&userpb::UserServer::deleteUser>(&userServerBody);

        // 修改用户
        server.register_handler<&userpb::UserServer::updateUser>(&userServerBody);

        // 启动服务
        auto err = server.start();  // start the server & block
        if (err != std::errc()) {
            auto code = std::make_error_code(err);
            std::cout << "Error: " << code.message() << std::endl;
        }
    }
}  // namespace UserService