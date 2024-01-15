#pragma once
#include <openssl/dh.h>
#include <openssl/evp.h>

#include <functional>
#include <string>
namespace Util {
    // 本库是对EVP库的封装，提供了一些常用的加密算法的接口

    // 摘要算法函数
    auto MDAlgorithm(const std::string& message, std::function<const EVP_MD*(void)> algorithm) -> std::string;

    // 加密算法函数
    auto EncodeAlgorithm(const std::string& message, std::function<const EVP_CIPHER*(void)> algorithm, const std::string& key, const std::string& iv) -> std::string;

    // 解密算法函数
    auto DecodeAlgorithm(const std::string& message, std::function<const EVP_CIPHER*(void)> algorithm, const std::string& key, const std::string& iv) -> std::string;

    // TODO:去读一下Diffie-Hellman密钥交换协议，之后再来定义接口
}  // namespace Util