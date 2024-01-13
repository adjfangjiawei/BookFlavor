#include "opensslalgorithm.h"

#include <openssl/evp.h>  // High-level cryptographic functions

#include <iostream>
#include <string>

namespace Util {
#include <openssl/evp.h>
    // 摘要算法函数
    auto MDAlgorithm(const std::string& message, std::function<const EVP_MD*(void)> algorithm) -> std::string {
        EVP_MD_CTX* mdctx = EVP_MD_CTX_new();
        const EVP_MD* md = algorithm();
        unsigned char md_value[EVP_MAX_MD_SIZE];
        unsigned int md_len;

        EVP_DigestInit_ex(mdctx, md, NULL);
        EVP_DigestUpdate(mdctx, message.c_str(), message.size());
        EVP_DigestFinal_ex(mdctx, md_value, &md_len);
        EVP_MD_CTX_free(mdctx);

        std::string ret;
        for (int i = 0; i < md_len; i++) {
            char buf[3];
            sprintf(buf, "%02x", md_value[i]);
            ret += buf;
        }
        return ret;
    }

    // 加密算法函数
    auto EncodeAlgorithm(const std::string& message, std::function<const EVP_CIPHER*(void)> algorithm, const std::string& key, const std::string& iv) -> std::string {
        EVP_CIPHER_CTX* ctx = EVP_CIPHER_CTX_new();
        const EVP_CIPHER* cipher = algorithm();
        EVP_CIPHER_CTX_init(ctx);
        EVP_CipherInit_ex(ctx, cipher, NULL, NULL, NULL, true);
        EVP_CIPHER_CTX_set_key_length(ctx, key.size());
        EVP_CipherInit_ex(ctx, NULL, NULL, (const unsigned char*)key.c_str(), (const unsigned char*)iv.c_str(), true);

        int len;
        int ciphertext_len;
        unsigned char ciphertext[1024];
        EVP_CipherUpdate(ctx, ciphertext, &len, (const unsigned char*)message.c_str(), message.size());
        ciphertext_len = len;
        EVP_CipherFinal_ex(ctx, ciphertext + len, &len);
        ciphertext_len += len;
        EVP_CIPHER_CTX_free(ctx);

        std::string ret;
        for (int i = 0; i < ciphertext_len; i++) {
            char buf[3];
            sprintf(buf, "%02x", ciphertext[i]);
            ret += buf;
        }
        return ret;
    }

    // 解密算法函数
    auto DecodeAlgorithm(const std::string& message, std::function<const EVP_CIPHER*(void)> algorithm, const std::string& key, const std::string& iv) -> std::string {
        EVP_CIPHER_CTX* ctx = EVP_CIPHER_CTX_new();
        const EVP_CIPHER* cipher = algorithm();
        EVP_CIPHER_CTX_init(ctx);
        EVP_CipherInit_ex(ctx, cipher, NULL, NULL, NULL, false);
        EVP_CIPHER_CTX_set_key_length(ctx, key.size());
        EVP_CipherInit_ex(ctx, NULL, NULL, (const unsigned char*)key.c_str(), (const unsigned char*)iv.c_str(), false);

        int len;
        int plaintext_len;
        unsigned char plaintext[1024];
        EVP_CipherUpdate(ctx, plaintext, &len, (const unsigned char*)message.c_str(), message.size());
        plaintext_len = len;
        EVP_CipherFinal_ex(ctx, plaintext + len, &len);
        plaintext_len += len;
        EVP_CIPHER_CTX_free(ctx);

        std::string ret;
        for (int i = 0; i < plaintext_len; i++) {
            char buf[3];
            sprintf(buf, "%02x", plaintext[i]);
            ret += buf;
        }
        return ret;
    }

}  // namespace Util