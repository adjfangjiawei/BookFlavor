#include <User/userServicePb.h>
#include <sqlpp11/mysql/mysql.h>
#include <sqlpp11/sqlpp11.h>

#include <vector>

#include "User/db/userSQLdb.h"
#include "userRegisterToPb.h"

// , const std::string &orderBy, uint64_t limit, uint64_t offset,
//

auto userpb::UserServer::listUsers(const std::string& filter, const std::string& orderBy, uint64_t limit, uint64_t offset) -> std::pair<std::vector<User>, Util::RuntimeError> {
    std::vector<User> users;
    UserSQLdb::UserRegister userRegister{};
    auto dbUserRegisters =
        db(select(userRegister.emailAddress, userRegister.id, userRegister.name, userRegister.phonenumberCode, userRegister.password).from(userRegister).unconditionally().offset(offset).limit(limit));

    for (const auto& dbUserRegister : dbUserRegisters) {
        User user;
        dbtopb::userRegisterToPb(dbUserRegister, user);
        users.push_back(user);
    }
    return {users, Util::RuntimeError("")};
}