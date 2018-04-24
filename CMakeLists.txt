cmake_minimum_required(VERSION 3.5)
project(jvm)

set(CMAKE_CXX_STANDARD 11)
# Targeting 32-bit systems
set(CMAKE_CXX_FLAGS -m32)
set(CMAKE_C_FLAGS -m32)

include_directories(test)

add_executable(jvm
        src/main.cpp
        test/catch.hpp)
