cmake_minimum_required(VERSION 3.22)
project(calculator)

set(CMAKE_CXX_STANDARD 17)

include(${CMAKE_BINARY_DIR}/conan_paths.cmake)
find_package(fmt REQUIRED EXACT 9.1.0)

add_executable(calculator main.cpp
        config.cpp config.h
        engine.cpp engine.h
        service.cpp service.h)
target_link_libraries(calculator PRIVATE fmt::fmt)
