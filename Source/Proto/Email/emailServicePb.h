// 邮件服务
#pragma once

#include <RuntimeError.h>

#include <string>
#include <system_error>
#include <tuple>
namespace emailpb {

    // 切换发送邮件的模式，包含两种模式：SMTP 和 Transactional
    enum class EmailServiceMode { SMTP, Transactional };

    // 设置邮件服务的模式
    extern Util::RuntimeError setEmailServiceMode(EmailServiceMode mode);

    // 发送邮件
    // 发送邮件的状态码
    enum class EmailSendStatusCode { OK, InvalidEmail, InvalidSubject, InvalidBody, SendFailed };
    extern std::tuple<Util::RuntimeError, EmailSendStatusCode> sendMail(const std::string& to, const std::string& subject, const std::string& body);

}  // namespace emailpb