#pragma once

#include <tuple>

#include "RuntimeError.h"
namespace mediapb {

    class MediaServer {
        std::tuple<std::string, Util::RuntimeError> getMediaUrl(const std::string& mediaId) { return std::make_tuple("http://www.baidu.com", Util::RuntimeError()); }
    };
}  // namespace mediapb