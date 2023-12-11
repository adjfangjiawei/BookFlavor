#include <User/userService.h>

#include <stdexcept>
#include <system_error>
#include <ylt/coro_rpc/coro_rpc_server.hpp>
#include <ylt/struct_pack.hpp>
namespace UserService {
    auto InitPkg() -> int {
        coro_rpc::coro_rpc_server server(/*thread_num =*/4, /*port =*/9000);

        // 注册服务
        // 创建用户
        server.register_handler<userpb::createUser>();

        // 删除用户
        server.register_handler<userpb::deleteUser>();

        // 修改用户
        server.register_handler<userpb::updateUser>();

        // 启动服务
        auto err = server.start();  // start the server & block
        if (err != std::errc()) {
            auto code = std::make_error_code(err);
            std::cout << "Error: " << code.message() << std::endl;
        }
        return 0;
    }
}  // namespace UserService