cmake_minimum_required(VERSION 3.22)
project(calculator)

set(CMAKE_CXX_STANDARD 17)

add_executable(calculator main.cpp
        config.cpp config.h
        engine.cpp engine.h
        service.cpp service.h)
