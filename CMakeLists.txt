cmake_minimum_required(VERSION 3.5)
project(jvm)

option(BUILD_32 "Force 32-bit compilation" OFF)

set(CMAKE_CXX_STANDARD 11)

if(BUILD_32)
    # Targeting 32-bit systems
    set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} -m32)
    set(CMAKE_C_FLAGS ${CMAKE_C_FLAGS} -m32)
endif(BUILD_32)

include_directories("src/include")
set(SOURCES src/main.cpp src/lib/util/reader.cpp src/lib/_class/constant_pool.cpp src/lib/_class/_class.cpp src/lib/_class/attribute.cpp src/lib/_class/field.cpp src/lib/_class/method.cpp src/lib/_class/interface.cpp src/lib/vm/vm.cpp src/include/vm/frame.hpp src/lib/vm/frame.cpp)
#file(GLOB SOURCES "src/*.cpp")

add_executable(jvm ${SOURCES})
