#pragma once

#include <stdexcept>
#include <string>
#include <ylt/struct_pack.hpp>

namespace Util {
    // 这个是完全照搬std::runtime_error的，因为std::runtime_error的MSG为Private不能被struct_pack序列化
    class RuntimeError : public std::exception {
      private:
        std::string _M_msg;

      public:
        explicit RuntimeError() : _M_msg("") {}
        explicit RuntimeError(const std::string& __arg) : _M_msg(__arg) {}
        explicit RuntimeError(const char* __arg) : _M_msg(__arg) {}
        virtual ~RuntimeError() throw() {}
        virtual const char* what() const throw() { return _M_msg.c_str(); }
#if __cplusplus >= 201103L
        RuntimeError(RuntimeError&&) = default;
        RuntimeError& operator=(RuntimeError&&) = default;
        RuntimeError(const RuntimeError&) = default;
        RuntimeError& operator=(const RuntimeError&) = default;
#endif
        STRUCT_PACK_FRIEND_DECL(RuntimeError);
    };
    STRUCT_PACK_REFL(RuntimeError, _M_msg);

}  // namespace Util