#include <User/user.h>

#include <stdexcept>
#include <system_error>
#include <ylt/coro_rpc/coro_rpc_server.hpp>
#include <ylt/struct_pack.hpp>

auto main() -> int {
    // std::cout << "Hello World!\n";
    // auto data = struct_pack::serialize(Test{1, 2.0f, "Hello World"});
    // auto decodet = struct_pack::deserialize<Test>(data);
    // auto t = decodet.value();
    // std::cout << t.a << " " << t.b << " " << t.c << std::endl;

    coro_rpc::coro_rpc_server server(/*thread_num =*/4, /*port =*/9000);

    // 注册服务
    // 创建用户
    server.register_handler<userpb::createUser>();

    // // 删除用户
    // server.register_handler<userpb::deleteUser>();

    // // 修改用户
    // server.register_handler<userpb::updateUser>();

    // 启动服务
    auto err = server.start();  // start the server & block
    if (err != std::errc()) {
        auto code = std::make_error_code(err);
        std::cout << "Error: " << code.message() << std::endl;
    }
    return 0;
}