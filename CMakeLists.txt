cmake_minimum_required(VERSION 3.5)
project(jvm)

option(BUILD_32 "Force 32-bit compilation" OFF)

set(CMAKE_CXX_STANDARD 11)
if(BUILD_32)
    # Targeting 32-bit systems
    set(CMAKE_CXX_FLAGS -m32)
    set(CMAKE_C_FLAGS -m32)
endif(BUILD_32)

include_directories(test)

add_executable(jvm
        src/main.cpp
        test/catch.hpp)
