cmake_minimum_required(VERSION 3.22)
project(calculator)

set(CMAKE_CXX_STANDARD 17)

include(${CMAKE_BINARY_DIR}/conan_paths.cmake)

find_package(Boost COMPONENTS system REQUIRED EXACT 1.80.0)
find_package(fmt REQUIRED EXACT 9.1.0)
find_package(spdlog REQUIRED EXACT 1.11.0)

add_executable(calculator
        config.cpp
        config.h
        engine.cpp
        engine.h
        io_handler.cpp
        io_handler.h
        main.cpp
        service.cpp
        service.h)
target_link_libraries(calculator
    PRIVATE
        Boost::system
        fmt::fmt
        spdlog::spdlog)
