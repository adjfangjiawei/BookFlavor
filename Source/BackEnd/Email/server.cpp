#include <Email/emailServicePb.h>
#include <RuntimeError.h>

#include <ylt/coro_rpc/coro_rpc_server.hpp>
namespace EmailService {

    auto InitPkg() -> int {
        // 邮件服务
        coro_rpc::coro_rpc_server server(/*thread_num =*/4, /*port =*/9000);

        // 注册服务
        // 设置邮件服务模式
        server.register_handler<emailpb::setEmailServiceMode>();

        // 删除用户
        server.register_handler<emailpb::sendMail>();

        // 启动服务
        auto err = server.start();  // start the server & block
        if (err != std::errc()) {
            auto code = std::make_error_code(err);
            std::cout << "Error: " << code.message() << std::endl;
        }
        return 0;
        return 0;
    }

}  // namespace EmailService

// 设置邮件服务模式
auto emailpb::setEmailServiceMode(EmailServiceMode mode) -> Util::RuntimeError { return Util::RuntimeError(""); }
// 发送邮件
auto emailpb::sendMail(const std::string& to, const std::string& subject, const std::string& body) -> std::tuple<Util::RuntimeError, EmailSendStatusCode> {
    return std::make_tuple(Util::RuntimeError(""), EmailSendStatusCode::OK);
}