#include <Email/server.h>
#include <FilterParser/userfunction.h>
#include <RuntimeError.h>
#include <User/server.h>
#include <sqlpp11/connection.h>
#include <sqlpp11/mysql/connection.h>

#include <CLI/CLI.hpp>
// #include <boost/process/environment.hpp>
#include <forward_list>
#include <functional>
#include <libconfig.h++>
#include <memory>
#include <stdexcept>

#include "Init/systemsignal.h"

using namespace std::string_literals;

// 读取配置文件
auto ReadCommonConfig() {
    // 读取环境变量COMMON_CONFIG_FILE
    // auto commonConfigFile = boost::this_process::environment()["COMMON_CONFIG_FILE"].to_string();
    auto commonConfigFile = ""s;
    // 使用libconfig读取配置文件
    auto commonConfig = std::make_shared<libconfig::Config>();
    struct {
        std::shared_ptr<libconfig::Config> commonConfigVar;
        Util::RuntimeError err;
    } ret{
        .commonConfigVar = commonConfig,
        .err = Util::RuntimeError(""),
    };

    try {
        commonConfig->readFile(commonConfigFile.c_str());
    } catch (const libconfig::FileIOException& e) {
        ret.err = Util::RuntimeError(e.what());
    } catch (const libconfig::ParseException& e) {
        ret.err = Util::RuntimeError(e.what());
    }

    return ret;
}

// 连接mysql数据库
auto ConnectToMysql(std::shared_ptr<libconfig::Config> commonConfig) {
    // 创建一个数据库连接
    auto config = std::make_shared<sqlpp::mysql::connection_config>();
    config->host = commonConfig->lookup("mysql.host").c_str();
    config->user = commonConfig->lookup("mysql.user").c_str();
    config->password = commonConfig->lookup("mysql.password").c_str();
    config->database = commonConfig->lookup("mysql.database").c_str();
    config->port = commonConfig->lookup("mysql.port");
    config->debug = true;
    auto db = sqlpp::mysql::connection(config);
    return db;
}

auto main(int argc, char** argv) -> int {
    // // 处理系统信号
    // auto&& err = processSystemSignal();
    // if (err.what() != ""s) {
    //     std::cout << "Error: " << err.what() << std::endl;
    //     return 1;
    // }

    CLI::App app{"App description"};

    // 读取配置文件
    std::shared_ptr<libconfig::Config> commonConfig;
    {
        auto&& [commonConfigTemp, err] = ReadCommonConfig();
        if (err.what() != ""s) {
            std::cout << "Error: " << err.what() << std::endl;
            return 1;
        }
        commonConfig = commonConfigTemp;
    }

    // 连接mysql数据库
    auto&& db = ConnectToMysql(commonConfig);

    // 初始化服务
    auto InitService = [&commonConfig, &db](std::function<void(std::shared_ptr<libconfig::Config>, sqlpp::mysql::connection &&)> InitPkg) -> void {
        // 调用服务的初始化函数
        InitPkg(commonConfig, std::forward<sqlpp::mysql::connection>(db));
    };

    // 为每个服务添加一个子命令,这是用户服务
    CLI::App* userServiceCommand = app.add_subcommand("UserService", "Start the UserService");
    userServiceCommand->callback(std::bind(InitService, UserService::InitPkg));

    // 这是邮件服务
    CLI::App* emailServiceCommand = app.add_subcommand("EmailService", "Start the EmailService");
    emailServiceCommand->callback(std::bind(InitService, EmailService::InitPkg));

    CLI11_PARSE(app, argc, argv);

    return 0;
}