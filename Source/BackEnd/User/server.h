#pragma once
#include <sqlpp11/mysql/connection.h>

#include <libconfig.h++>

namespace UserService {
    extern auto InitPkg(std::shared_ptr<libconfig::Config> commonConfig, sqlpp::mysql::connection &&db) -> void;
}  // namespace UserService