# 测试的cmake

enable_testing()

# 查找当前目录及其子目录下的所有代码文件
file(GLOB_RECURSE TEST_SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

include_directories(/FJW/BookFlavor/Build/vcpkg_installed/x64-linux/include)
link_directories(/FJW/BookFlavor/Build/vcpkg_installed/x64-linux/lib)
link_directories(/FJW/BookFlavor/Build/vcpkg_installed/x64-linux/lib/manual-link)
link_libraries(gtest gtest_main)
include_directories(${CMAKE_SOURCE_DIR}/Source/BackEnd)


# 添加测试
add_executable(tests ${TEST_SRC_FILES})

target_include_directories(tests PRIVATE ${CMAKE_SOURCE_DIR}/Source/ThirdParty/yalantinglibs/include)

#打印一下${GTEST_INCLUDE_DIRS}以测试
# 指定生成的可执行文件和链接文件的目录
set_target_properties(tests PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/Binary/bin/x64-linux"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/Binary/lib/x64-linux"
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/Binary/lib/x64-linux"
)