#include <User/server.h>

#include <CLI/CLI.hpp>

int main(int argc, char** argv) {
    CLI::App app{"App description"};

    // 为每个服务添加一个子命令
    CLI::App* userServiceCommand = app.add_subcommand("UserService", "Start the UserService");
    userServiceCommand->callback(UserService::InitPkg);

    // ...为其他服务添加子命令...

    CLI11_PARSE(app, argc, argv);

    return 0;
}