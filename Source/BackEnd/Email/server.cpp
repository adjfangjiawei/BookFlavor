#include <Email/emailServicePb.h>
#include <RuntimeError.h>
#include <sqlpp11/mysql/connection.h>

#include <memory>
#include <utility>
#include <ylt/coro_rpc/coro_rpc_server.hpp>

#include "emailService.h"
namespace EmailService {

    auto InitPkg(std::shared_ptr<libconfig::Config> commonConfig, sqlpp::mysql::connection&& db) -> void {
        // 邮件服务
        coro_rpc::coro_rpc_server server(/*thread_num =*/4, /*port =*/9000);

        // 注册服务
        emailpb::EmailServer emailServer{commonConfig, std::forward<sqlpp::mysql::connection>(db)};

        // 设置邮件服务模式
        server.register_handler<&emailpb::EmailServer::setEmailServiceMode>(&emailServer);

        // 发送邮件
        server.register_handler<&emailpb::EmailServer::sendMail>(&emailServer);

        // 接收邮件
        server.register_handler<&emailpb::EmailServer::receiveMail>(&emailServer);

        // 启动服务
        auto err = server.start();  // start the server & block
        if (err != std::errc()) {
            auto code = std::make_error_code(err);
            std::cout << "Error: " << code.message() << std::endl;
        }
    }
}  // namespace EmailService

emailpb::EmailServer::EmailServer(std::shared_ptr<libconfig::Config> commonConfig, sqlpp::mysql::connection&& db) : commonConfig(commonConfig), db(std::forward<sqlpp::mysql::connection>(db)) {
    pImpl = std::make_shared<SmtpEmailService>();
}

// 设置邮件服务模式
auto emailpb::EmailServer::setEmailServiceMode(emailpb::EmailServer::EmailServiceMode mode) -> Util::RuntimeError { return Util::RuntimeError(""); }

// 发送邮件
auto emailpb::EmailServer::sendMail(const std::string& to, const std::string& subject, const std::string& body) -> std::tuple<Util::RuntimeError, EmailSendStatusCode> {
    return std::make_tuple(Util::RuntimeError(""), EmailSendStatusCode::OK);
}

// 接收邮件
auto emailpb::EmailServer::receiveMail(const std::string& to, const std::string& subject, const std::string& body) -> std::tuple<Util::RuntimeError, EmailReceiveStatusCode> {
    return std::make_tuple(Util::RuntimeError(""), EmailReceiveStatusCode::OK);
}