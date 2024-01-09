#include <User/userServicePb.h>
#include <sqlpp11/mysql/mysql.h>
#include <sqlpp11/sqlpp11.h>

#include "User/db/userSQLdb.h"
#include "userRegisterToPb.h"

auto userpb::UserServer::listUsers(const std::string& filter, const std::string& orderBy, uint64_t limit, uint64_t offset, std::vector<User>& users) -> Util::RuntimeError {
    UserSQLdb::UserRegister userRegister{};
    auto dbUserRegisters = db(select(userRegister.id, userRegister.name, userRegister.phonenumberCode, userRegister.password).from(userRegister).unconditionally().offset(offset).limit(limit));

    for (const auto& dbUserRegister : dbUserRegisters) {
        User user;
        dbtopb::userRegisterToPb(dbUserRegister, user);
        users.push_back(user);
    }
    return Util::RuntimeError("");
}