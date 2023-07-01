cmake_minimum_required(VERSION 3.15)

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
