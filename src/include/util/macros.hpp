#pragma once

#define W(x) std::cerr << "\033[35m" << #x << "=" << (x) << "\033[0m" << "\n";

#define BYTESIZE 8
#define HALFSIZE 16
#define WORDSIZE 32

#include <cstdint>

typedef uint8_t u1;
typedef uint16_t u2;
typedef uint32_t u4;
typedef uint64_t u8;

typedef int8_t i1;
typedef int16_t i2;
typedef int32_t i4;
typedef int64_t i8;

#define MAGIC_NUMBER 0xCAFEBABE