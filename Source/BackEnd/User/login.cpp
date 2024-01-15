#include <User/userServicePb.h>
// 登录
std::pair<userpb::UserServer::LoginResponse, Util::RuntimeError> userpb::UserServer::login(const std::string& name, const std::string& password) {
    return std::make_pair(userpb::UserServer::LoginResponse(), Util::RuntimeError());
}

// 登出
Util::RuntimeError userpb::UserServer::logout(const std::string& token) { return Util::RuntimeError(); }

// 修改密码
Util::RuntimeError userpb::UserServer::changePassword(const std::string& name, const std::string& displayName, const std::string& oldPassword, const std::string& newPassword) {
    return Util::RuntimeError();
}

// 通过用户Token获取用户信息
std::pair<userpb::UserServer::User, Util::RuntimeError> userpb::UserServer::getUserByToken(const std::string& token) { return std::make_pair(userpb::UserServer::User(), Util::RuntimeError()); }