#include <vmime/vmime.hpp>

#include "Email/emailServicePb.h"

class EmailServiceImplementation {
    emailpb::EmailServer::EmailServiceMode mode;

  public:
    virtual void sendEmail(const std::string& to, const std::string& subject, const std::string& body) = 0;
};

class SmtpEmailService : public EmailServiceImplementation {
  public:
    virtual void sendEmail(const std::string& to, const std::string& subject, const std::string& body) override {
        // Use SMTP to send email
        // Create a message
        vmime::messageBuilder mb;
        mb.setExpeditor(vmime::mailbox("your-email@example.com"));
        mb.getRecipients().appendAddress(vmime::make_shared<vmime::mailbox>("recipient-email@example.com"));
        mb.setSubject(vmime::text("Test Subject"));
        mb.getTextPart()->setText(vmime::make_shared<vmime::stringContentHandler>("Test Body"));

        vmime::shared_ptr<vmime::message> msg = mb.construct();

        // Create a session and a transport
        vmime::shared_ptr<vmime::net::session> sess = vmime::net::session::create();
        vmime::shared_ptr<vmime::net::transport> tr = sess->getTransport(vmime::utility::url("smtp://smtp.example.com"));

        // Connect and authenticate
        tr->connect();
        // 获得认证器
        // auto auth =
        // tr->setAuthenticator();

        // Send the message
        tr->send(msg);

        // Disconnect
        tr->disconnect();

        return;
    }
};

class TransactionalEmailService : public EmailServiceImplementation {
  public:
    virtual void sendEmail(const std::string& to, const std::string& subject, const std::string& body) override {
        // Use transactional email service to send email
    }
};