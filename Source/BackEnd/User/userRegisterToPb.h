#include <User/userServicePb.h>
#include <sqlpp11/mysql/mysql.h>
#include <sqlpp11/sqlpp11.h>

#include "ResourecIDName/user.h"
#include "db/userSQLdb.h"
#include "db/userSQLdbExtra.h"
namespace dbtopb {
    inline auto userRegisterToPb(auto& userRegister, userpb::UserServer::User& user) -> void {
        user.displayName = userRegister.name;
        user.password = userRegister.password;
        user.name = Util::UserIDResourceName::UserGetNameFromID(userRegister.id);
        user.phoneNumber = userRegister.phonenumberCode;
        user.email = userRegister.email;
    }
}  // namespace dbtopb