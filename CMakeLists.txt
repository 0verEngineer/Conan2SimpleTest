cmake_minimum_required(VERSION 3.15)

set(TOOLCHAIN_FILE "conan/install${CMAKE_BUILD_TYPE}/conan_toolchain.cmake")
message(Setting " CMAKE_TOOLCHAIN_FILE to: ${TOOLCHAIN_FILE}")
set(CMAKE_TOOLCHAIN_FILE ${TOOLCHAIN_FILE})

project(testConan VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Libssh2 REQUIRED)
find_package(ZLIB REQUIRED)

add_executable(testConan
        src/main.cpp
)

target_link_libraries(testConan PRIVATE
        Libssh2::libssh2
        ZLIB::ZLIB
)
