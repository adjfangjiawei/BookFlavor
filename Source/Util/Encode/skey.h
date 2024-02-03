#include <unicode/urename.h>

#include <string>

#include "opensslalgorithm.h"
// GenerateSkey return salt
#include <string>
namespace Util {
    auto GenerateSkey() -> std::string {
        auto myTime = std::to_string(ucal_getNow());
        auto str = MDAlgorithm(myTime, EVP_sha256);
        return str.substr(0, 16);
    }
}  // namespace Util