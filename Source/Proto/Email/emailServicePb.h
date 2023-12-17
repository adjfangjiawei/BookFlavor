// 邮件服务
#pragma once

#include <RuntimeError.h>
#include <sqlpp11/mysql/connection.h>

#include <libconfig.h++>
#include <memory>
#include <string>
#include <system_error>
#include <tuple>

class EmailServiceImplementation;
namespace emailpb {
    class EmailServer {
      private:
        std::shared_ptr<EmailServiceImplementation> pImpl;
        std::shared_ptr<libconfig::Config> commonConfig;
        sqlpp::mysql::connection&& db;

      public:
        EmailServer(std::shared_ptr<libconfig::Config> commonConfig, sqlpp::mysql::connection&& db);
        // 切换发送邮件的模式，包含两种模式：SMTP 和 Transactional
        enum class EmailServiceMode { SMTP, Transactional };

        // 设置邮件服务的模式
        Util::RuntimeError setEmailServiceMode(EmailServiceMode mode);

        // 发送邮件
        // 发送邮件的状态码
        enum class EmailSendStatusCode { OK, InvalidEmail, InvalidSubject, InvalidBody, SendFailed };
        std::tuple<Util::RuntimeError, EmailSendStatusCode> sendMail(const std::string& to, const std::string& subject, const std::string& body);

        // 接收邮件
        // 接收邮件的状态码
        enum class EmailReceiveStatusCode { OK, ReceiveFailed };
        std::tuple<Util::RuntimeError, EmailReceiveStatusCode> receiveMail(const std::string& to, const std::string& subject, const std::string& body);
    };

}  // namespace emailpb