#include <User/userServicePb.h>
#include <sqlpp11/mysql/mysql.h>
#include <sqlpp11/sqlpp11.h>

#include <string>

#include "Logfield.h"
#include "ResourecIDName/user.h"
#include "User/db/userSQLdb.h"
using namespace std::string_literals;
auto userpb::UserServer::deleteUser(const std::string& name) -> Util::RuntimeError {
    auto logfield = Util::Log("main");
    logfield = logfield.withField("function", "deleteUser");
    auto [userId, err] = Util::UserIDResourceName::UserGetIDFromName(name);
    if (err.what() != ""s) {
        logfield = logfield.withField("error", err.what());
        return err;
    }

    UserSQLdb::UserRegister userRegister{};
    try {
        db(remove_from(userRegister).where(userRegister.id == userId));
    } catch (const sqlpp::exception& e) {
        logfield = logfield.withField("error", e.what());
        return Util::RuntimeError(e.what());
    }

    return Util::RuntimeError("");
}