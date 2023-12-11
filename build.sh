# 执行cmake, 生成Ninja构建文件, 为clangd生成compile_commands.json, 默认生成debug版本, 如果传入了参数--release则生成release版本
# 判断是否传入了参数--release
if [ "$1" = "--release" ]; then
    # 生成release版本
    cmake -B Build -S . -G Ninja -DCMAKE_BUILD_TYPE=Release -DCMAKE_CXX_FLAGS_RELEASE="-O3" -DCMAKE_EXPORT_COMPILE_COMMANDS=ON .. -DCMAKE_TOOLCHAIN_FILE="/mnt/f/newvcpkg/vcpkg/scripts/buildsystems/vcpkg.cmake"
else
    # 生成debug版本
    cmake -B Build -S . -G Ninja -DCMAKE_BUILD_TYPE=Debug -DCMAKE_EXPORT_COMPILE_COMMANDS=ON .. -DCMAKE_TOOLCHAIN_FILE="/mnt/f/newvcpkg/vcpkg/scripts/buildsystems/vcpkg.cmake"
fi

cd Build

# 执行ninja, 生成可执行文件, 八线程
ninja -j8
