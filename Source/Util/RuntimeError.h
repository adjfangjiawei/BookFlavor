#include <stdexcept>
#include <string>

namespace Util {
    // 这个是完全照搬std::runtime_error的，因为std::runtime_error的MSG为Private不能被struct_pack序列化
    class RuntimeError {
      public:
    };

}  // namespace Util