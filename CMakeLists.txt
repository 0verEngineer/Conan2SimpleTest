cmake_minimum_required(VERSION 3.5)

set(CMAKE_POLICY_DEFAULT_CMP0091 NEW)

list(APPEND VCPKG_FEATURE_FLAGS "versions")
set(CMAKE_TOOLCHAIN_FILE "conan_toolchain.cmake" CACHE STRING "Conan toolchain file")

project(testMultiLibraryProject VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Libssh2 REQUIRED)
find_package(ZLIB REQUIRED)

add_executable(Executable
        src/main.cpp
)

target_link_libraries(Executable PRIVATE
        Libssh2::libssh2
        ZLIB::ZLIB
)

set_target_properties(Executable PROPERTIES
        MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
        MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
        MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
        MACOSX_BUNDLE TRUE
        WIN32_EXECUTABLE TRUE
)

install(TARGETS Executable
        BUNDLE DESTINATION .
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
