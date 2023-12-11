if(POLICY CMP0012)
  cmake_policy(SET CMP0012 NEW)
endif()

set(VCPKG_HOST_TRIPLET "x64-linux-dynamic")

set(VCPKG_MANIFEST_MODE ON)

set(VCPKG_MANIFEST_DIR "${CMAKE_SOURCE_DIR}")


list(APPEND VCPKG_MANIFEST_FEATURES "samples")


# 设置项目名称
project(bookflavor)

# 设置最小cmake版本要求
cmake_minimum_required(VERSION 3.4.1)

# 包含vcpkg的cmake脚本
# include()

# 设置C++编译标准为c++20
set(CMAKE_CXX_STANDARD 20)

# 设置CMake子目录Source/BackEnd
add_subdirectory(Source/BackEnd)

# 设置CMake子目录Source/FrontEnd
add_subdirectory(Source/FrontEnd)

# 设置CMake子目录Source/Util
add_subdirectory(Source/Util)

# 设置测试子目录
add_subdirectory(Source/Test)