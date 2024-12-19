# 构建yalantinglibs
RELEASRMODE=0
for arg in "$@"
do
    if ["$arg" = "--buildyalantinglibs"]; then
        cd Source/ThirdParty/yalantinglibs
        mkdir -p install
        cmake -B Build -S . -G Ninja -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=install -DCMAKE_TOOLCHAIN_FILE="$MY_VCPKG_DIR/scripts/buildsystems/vcpkg.cmake" -DBUILD_EXAMPLES=OFF -DBUILD_BENCHMARK=OFF -DBUILD_UNIT_TESTS=OFF -DENABLE_SSL=ON -DENABLE_PMR=ON -DENABLE_IO_URING=ON -DENABLE_FILE_IO_URING=ON -DENABLE_STRUCT_PACK_UNPORTABLE_TYPE=ON -DENABLE_STRUCT_PACK_OPTIMIZE=ON
        cd Build
        ninja -j8
        ninja install
        cd ../../../../
    fi

    if ["$arg" = "--buildvmime"]; then
        cd Source/ThirdParty/vmime
        mkdir -p install
        cmake -B Build -S . -G Ninja -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=install  -DVMIME_TLS_SUPPORT_LIB=openssl
        cd Build
        ninja -j8
        ninja install
        cd ../../../../
    fi

    if  ["$arg" = "--release"]; then
        RELEASRMODE=1
    fi
done



# 执行cmake, 生成Ninja构建文件, 为clangd生成compile_commands.json, 默认生成debug版本, 如果传入了参数--release则生成release版本
# 判断是否传入了参数--release
if [ $RELEASRMODE -eq 1 ]; then
    # 生成release版本
    cmake -B Build -S . -G Ninja -DCMAKE_BUILD_TYPE=Release -DCMAKE_CXX_FLAGS_RELEASE="-O3" -DCMAKE_EXPORT_COMPILE_COMMANDS=ON .. -DCMAKE_TOOLCHAIN_FILE="$MY_VCPKG_DIR/scripts/buildsystems/vcpkg.cmake"
else
    # 生成debug版本
    cmake -B Build -S . -G Ninja -DCMAKE_BUILD_TYPE=Debug -DCMAKE_EXPORT_COMPILE_COMMANDS=ON .. -DCMAKE_TOOLCHAIN_FILE="$MY_VCPKG_DIR/scripts/buildsystems/vcpkg.cmake"
fi

cd Build

# 执行ninja, 生成可执行文件, 八线程
ninja -j8
