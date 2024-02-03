#include <libconfig.h++>
#include <memory>
namespace MediaServer {
    auto InitPkg(std::shared_ptr<libconfig::Config> commonConfig) -> void;

}  // namespace MediaServer
