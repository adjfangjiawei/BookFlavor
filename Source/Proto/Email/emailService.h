// 邮件服务
#ifndef EMAIL_SERVICE_H
#define EMAIL_SERVICE_H
#include <string>
// 切换发送邮件的模式，包含两种模式：SMTP 和 Transactional
enum class EmailServiceMode { SMTP, Transactional };
// 设置邮件服务的模式
extern void setEmailServiceMode(EmailServiceMode mode);

// 发送邮件
extern void sendMail(const std::string& to, const std::string& subject, const std::string& body);

#endif  // EMAIL_SERVICE_H
