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