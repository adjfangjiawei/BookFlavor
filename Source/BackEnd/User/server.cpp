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

namespace {
    async_simple::coro::Lazy<void> connectToOtherClient(userpb::UserServer* userServer) {
        // 读取邮件服务的host和端口
        std::string emailHost = userServer->commonConfig->lookup("emailServer.host");
        std::string emailPort = userServer->commonConfig->lookup("emailServer.port");
        co_await userServer->emailClient.connect(emailHost, /*port =*/emailPort);  // connect to the server
    }
}  // namespace

namespace UserService {
    auto InitPkg(std::shared_ptr<libconfig::Config> commonConfig, sqlpp::mysql::connection&& db) -> void {
        // 用户服务
        int userPort = commonConfig->lookup("userServer.port");
        int thread = commonConfig->lookup("userServer.thread");

        coro_rpc::coro_rpc_server server(/*thread_num =*/thread, /*port =*/userPort);

        // 创建一个Redis对象，连接到配置文件中的Redis服务器
        std::string rdbPhoneNumberHost = commonConfig->lookup("redis")[0].lookup("kvrocksPhonenumber.host");
        int rdbPhoneNumberPort = commonConfig->lookup("redis")[0].lookup("kvrocksPhonenumber.port");
        sw::redis::Redis rdbPhoneNumber{"tcp://" + rdbPhoneNumberHost + ":" + std::to_string(rdbPhoneNumberPort)};

        userpb::UserServer userServerBody{commonConfig, std::forward<sqlpp::mysql::connection>(db), rdbPhoneNumber};
        async_simple::coro::syncAwait(connectToOtherClient(&userServerBody));

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

userpb::UserServer::UserServer(std::shared_ptr<libconfig::Config> commonConfig, sqlpp::mysql::connection&& db, sw::redis::Redis& rdbPhoneNumber)
    : db(std::forward<sqlpp::mysql::connection>(db)), commonConfig(commonConfig), rdbPhoneNumber(rdbPhoneNumber) {}