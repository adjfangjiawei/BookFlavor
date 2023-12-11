#include <gtest/gtest.h>
#include <unicode/unistr.h>

#include <ylt/coro_rpc/coro_rpc_client.hpp>

#include "async_simple/coro/SyncAwait.h"

TEST(TestAddInt, test_add_int_1) {
    int res = 10 + 24;
    EXPECT_EQ(res, 34);
}

async_simple::coro::Lazy<void> test_client() {
    coro_rpc::coro_rpc_client client;
    co_await client.connect("localhost", /*port =*/"9000");  // connect to the server

    // auto r = co_await client.call<echo>("hello coro_rpc");  // call remote function echo
    // std::string utf8String;
    // r.value().c.toUTF8String(utf8String);
    // std::cout << r.value().a << r.value().b << utf8String << "\n";  // will print "hello coro_rpc"
}

TEST(TestEcho, test_echo_1) { async_simple::coro::syncAwait(test_client()); }