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

set(SOURCES
        src/main.cpp
        src/lib/util/reader.cpp
        src/lib/util/converter.cpp
        src/lib/util/commander.cpp
        src/lib/engine/frame.cpp
        src/lib/engine/operands.cpp
        src/lib/engine/variables.cpp
        src/lib/class_loader/class_loader.cpp
        src/lib/class_loader/constant_pool.cpp
        src/lib/class_loader/interface.cpp
        src/lib/class_loader/attribute.cpp
        src/lib/class_loader/method.cpp
        src/lib/class_loader/field.cpp
        src/lib/engine/engine.cpp
        src/lib/engine/frames_stack.cpp
        src/lib/class_loader/code_info.cpp
        src/lib/class_loader/instruction_info.cpp
        )

#file(GLOB SOURCES "src/*.cpp")

add_executable(jvm ${SOURCES})
