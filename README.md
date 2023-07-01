# ConanTest

## Manual build steps

`conan install . --output-folder=build-debug --build=missing -s build_type=Debug`

`cmake -DCMAKE_BUILD_TYPE=Debug "-DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake" -DCMAKE_POLICY_DEFAULT_CMP0091=NEW -S . -B build-debug`

`cmake --build ./build-debug`


## Ide setup

`conan install . --output-folder=conan/installDebug --build=missing -s build_type=Debug`
`conan install . --output-folder=conan/installRelease --build=missing -s build_type=Release`
