cmake -B Build -S . -G Ninja -DCMAKE_BUILD_TYPE=Debug -DCMAKE_EXPORT_COMPILE_COMMANDS=ON .. -DCMAKE_TOOLCHAIN_FILE="/mnt/f/newvcpkg/vcpkg/scripts/buildsystems/vcpkg.cmake"
cd Build
ninja -j8