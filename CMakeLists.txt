cmake_minimum_required(VERSION 3.5)
project(jvm)

option(BUILD_32 "Force 32-bit compilation" OFF)

set(CMAKE_CXX_STANDARD 11)

if(BUILD_32)
    # Targeting 32-bit systems
    set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} -m32)
    set(CMAKE_C_FLAGS ${CMAKE_C_FLAGS} -m32)
endif(BUILD_32)

include_directories("src/lib")
set(SOURCES src/main.cpp src/reader.cpp src/constant_pool.cpp src/_class.cpp src/attribute.cpp src/field.cpp)
#file(GLOB SOURCES "src/*.cpp")

add_executable(jvm ${SOURCES})
