#pragma once
#include <sqlpp11/mysql/connection.h>

#include <libconfig.h++>

namespace EmailService {

    extern auto InitPkg(std::shared_ptr<libconfig::Config> commonConfig, sqlpp::mysql::connection&& db) -> void;
}  // namespace EmailService