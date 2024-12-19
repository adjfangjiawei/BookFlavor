set(VCPKG_HOST_TRIPLET "x64-linux-dynamic")

set(VCPKG_MANIFEST_MODE ON)

set(VCPKG_MANIFEST_DIR "${CMAKE_SOURCE_DIR}")

project(MobileCodeSearchToRedisDatabase)
include_directories(${CMAKE_SOURCE_DIR}/../../ThirdParty/yalantinglibs/include)

add_executable(MobileCodeSearchToRedisDatabase buildredis.cpp)

#redis++
find_package(redis++ CONFIG REQUIRED)
target_link_libraries(MobileCodeSearchToRedisDatabase redis++::redis++_static)

set_target_properties(MobileCodeSearchToRedisDatabase PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/../../../Binary/bin/x64-linux"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/../../../Binary/bin/x64-linux"
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/../../../Binary/bin/x64-linux"
)