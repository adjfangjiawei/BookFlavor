#pragma once
#include <openssl/rand.h>

#include <random>
#include <string>

inline std::string generatePassword(int length) {
    static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, sizeof(alphanum) - 2);

    std::string password;

    for (int i = 0; i < length; ++i) {
        password += alphanum[dis(gen)];
    }

    return password;
}

inline std::string generatePasswordByOpenSSL(int length) {  // NOLINT
    std::string password;
    password.resize(length);

    RAND_bytes(reinterpret_cast<unsigned char*>(&password[0]), length);

    return password;
}