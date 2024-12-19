# 这是后端的cmake子目录
# 设置后端可执行文件的名字为BookFlavor-Backend, 新建一个环境变量以便后面定义生成文件的名称
set(PROJECT_BACKEND_NAME "BookFlavor_Backend")

# 查找出当前目录的source文件夹及其所有子目录下所有的.h和.cpp文件
file(GLOB_RECURSE SOURCE_FILES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp" "${CMAKE_CURRENT_SOURCE_DIR}/*.h")

# 打印出来测试一下
foreach(FILE ${SOURCE_FILES})
    message(${FILE})
endforeach()

# 寻找pkg-config（一般都会安装，所以不需要REQUIRED）
find_package(PkgConfig)

# 使用pkg-config查找vmime
pkg_check_modules(VMIME REQUIRED vmime)

# 将vmime的头文件路径添加到项目中
include_directories(${VMIME_INCLUDE_DIRS})

# 将vmime的链接路径添加到项目中
link_directories(${VMIME_LIBRARY_DIRS})

set(VCPKG_STATIC_LIBRARY ${CMAKE_SOURCE_DIR}/Build/vcpkg_installed/x64-linux/lib)
link_directories(${VCPKG_STATIC_LIBRARY})

# 添加当前路径到头文件搜索路径中
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

# 添加一个可执行文件
add_executable(${PROJECT_BACKEND_NAME} ${SOURCE_FILES})

# libconfig
target_link_libraries(${PROJECT_BACKEND_NAME} config++)

# spdlog
find_package(spdlog CONFIG REQUIRED)
target_link_libraries(${PROJECT_BACKEND_NAME} spdlog::spdlog spdlog::spdlog_header_only)

#libmysql,sqlpp11需要
find_package(unofficial-libmysql REQUIRED)
target_link_libraries(${PROJECT_BACKEND_NAME} unofficial::libmysql::libmysql)

#sqlpp11
find_package(Sqlpp11 CONFIG REQUIRED COMPONENTS MySQL)
target_link_libraries(${PROJECT_BACKEND_NAME} MySQL::MySQL sqlpp11::mysql sqlpp11::sqlpp11)

#braft
find_package(unofficial-braft CONFIG REQUIRED)
target_link_libraries(${PROJECT_BACKEND_NAME} unofficial::braft::braft-static)

#redis++
find_package(redis++ CONFIG REQUIRED)
target_link_libraries(${PROJECT_BACKEND_NAME} redis++::redis++_static)

#avcpp
find_package(avcpp CONFIG REQUIRED)
target_link_libraries(${PROJECT_BACKEND_NAME}  avcpp::FFmpeg avcpp::avcpp-static)

# absl
find_package(absl REQUIRED)
target_link_libraries(${PROJECT_BACKEND_NAME}    absl::algorithm
    absl::base
    absl::debugging
    absl::hash
    absl::memory
    absl::meta
    absl::numeric
    absl::strings
    absl::synchronization
    absl::time
    absl::utility)

target_link_libraries(${PROJECT_BACKEND_NAME} ${VMIME_LIBRARIES})

find_package(Protobuf REQUIRED CONFIG)
target_link_libraries(${PROJECT_BACKEND_NAME} protobuf::libprotobuf)

# 链接上Util中的库
target_link_libraries(${PROJECT_BACKEND_NAME} ${PROJECT_UTIL_NAME})
target_include_directories(${PROJECT_BACKEND_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/Source/Util)


# 链接上ThirdParty中的库, 但是注意ThirdParty中没有CMake文件

set(ProtoDir "${CMAKE_SOURCE_DIR}/Source/Proto")
target_include_directories(${PROJECT_BACKEND_NAME} PRIVATE ${ProtoDir})
# 链接libphonenumber时一定要链上re, 不然会报链接错误
find_package(libphonenumber CONFIG REQUIRED)
target_link_libraries(${PROJECT_BACKEND_NAME} libphonenumber::phonenumber)

find_package(re2 CONFIG REQUIRED)
target_link_libraries(${PROJECT_BACKEND_NAME} re2::re2)

# Boost Asio
# find_package(boost-typeof REQUIRED)
find_package(Boost REQUIRED COMPONENTS system)
target_link_libraries(${PROJECT_BACKEND_NAME} ${Boost_LIBRARIES})
target_include_directories(${PROJECT_BACKEND_NAME} PRIVATE ${Boost_INCLUDE_DIRS})

target_include_directories(${PROJECT_BACKEND_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/Source/ThirdParty/yalantinglibs/include)

# 指定生成的可执行文件和链接文件的目录
set_target_properties(${PROJECT_BACKEND_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/Binary/bin/x64-linux"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/Binary/lib/x64-linux"
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/Binary/lib/x64-linux"
)