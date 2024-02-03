#include <User/userServicePb.h>
#include <gtest/gtest.h>
#include <unicode/unistr.h>

#include <ylt/coro_rpc/coro_rpc_client.hpp>

#include "async_simple/coro/FutureAwaiter.h"
#include "async_simple/coro/SyncAwait.h"
using namespace std::string_literals;
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

async_simple::coro::Lazy<void> testCreateUser() {
    using namespace userpb;
    coro_rpc::coro_rpc_client client;
    co_await client.connect("localhost", /*port =*/"9000");  // connect to the server
    userpb::UserServer::User user{.displayName = "test", .email = "3195727347@qq.com", .phoneNumber = "15967153211", .password = "123456"};
    auto r = co_await client.call<&UserServer::createUser>(user);

    // auto r = co_await client.call<echo>("hello coro_rpc");  // call remote function echo
    // std::string utf8String;
    // r.value().c.toUTF8String(utf8String);
    // std::cout << r.value().a << r.value().b << utf8String << "\n";  // will print "hello coro_rpc"
}

TEST(UserService, test_create_user) { async_simple::coro::syncAwait(testCreateUser()); }

#include <spdlog/spdlog.h>
#include <unicode/resbund.h>
#include <unicode/unistr.h>
TEST(ICUResourceBundle, icu_resource_bundle_simple) {
    UErrorCode status = U_ZERO_ERROR;
    icu::Locale locale = icu::Locale::getFrench();
    icu::ResourceBundle bundle("root", locale, status);
    ASSERT_TRUE(U_SUCCESS(status)) << "Failed to load resource bundle";

    icu::ResourceBundle helloBundle = bundle.get("hello", status);
    ASSERT_TRUE(U_SUCCESS(status)) << "Failed to get 'hello' resource bundle";

    icu::UnicodeString hello = helloBundle.getString(status);
    ASSERT_TRUE(U_SUCCESS(status)) << "Failed to get string from 'hello' resource bundle";

    std::string utf8String;
    hello.toUTF8String(utf8String);

    spdlog::info("Hello message: {}", utf8String);
}

#include <unicode/plurfmt.h>
TEST(ICUResourceBundle, icu_resource_bundle_plural_format) {
    using namespace icu;

    UErrorCode status = U_ZERO_ERROR;

    // 加载资源束
    UResourceBundle* bundle = ures_open("root.txt", "en", &status);
    UResourceBundle* items = ures_getByKey(bundle, "items", NULL, &status);

    // 创建PluralFormat对象
    UnicodeString pattern = ures_getUnicodeStringByKey(items, "one", &status);
    pattern += "; ";
    pattern += ures_getUnicodeStringByKey(items, "other", &status);
    PluralFormat* fmt = new PluralFormat(Locale::getEnglish(), pattern, status);

    // 格式化消息
    Formattable args[] = {1};
    UnicodeString result = fmt->format(args[0], result, NULL, status);

    std::string utf8String;
    result.toUTF8String(utf8String);
    std::cout << utf8String << std::endl;

    delete fmt;
    ures_close(items);
    ures_close(bundle);
}