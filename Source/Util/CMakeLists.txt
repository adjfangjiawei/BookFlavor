# 这是工具库, 生成静态链接库
# 定义生成静态库的名称为Util
set(PROJECT_UTIL_NAME "BookFlavor_Util")

# 获得当前目录及其子目录所有.h和.cpp文件
file(GLOB_RECURSE HEADER_FILES *.h)
file(GLOB_RECURSE SOURCE_FILES *.cpp)

# 生成Library
add_library(${PROJECT_UTIL_NAME} STATIC ${HEADER_FILES} ${SOURCE_FILES})
# 添加雅兰亭的头文件
target_include_directories(${PROJECT_UTIL_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/Source/ThirdParty/yalantinglibs/include)

# 指定生成的可执行文件和链接文件的目录
set_target_properties(${PROJECT_UTIL_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/Binary/bin/x64-linux"
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/Binary/lib/x64-linux"
    ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/Binary/lib/x64-linux"
)