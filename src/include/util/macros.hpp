#pragma once

#include <map>
#include <stack>
#include <tuple>
#include <array>
#include <locale>
#include <vector>
#include <memory>
#include <string>
#include <codecvt>
#include <sstream>
#include <fstream>
#include <utility>
#include <cstdint>
#include <iomanip>
#include <iostream>
#include <algorithm>
#include <unordered_map>


#define W(x)         std::cerr << "\033[35m" << #x << "=" << (x) << "\033[0m" << "\n";
#define MAGIC_NUMBER 0xCAFEBABE
#define BYTESIZE     8
#define HALFSIZE     16
#define WORDSIZE     32


typedef uint8_t  u1;
typedef uint16_t u2;
typedef uint32_t u4;
typedef uint64_t u8;
typedef int8_t   i1;
typedef int16_t  i2;
typedef int32_t  i4;
typedef int64_t  i8;


union op4 {
	uint8_t ui1;
	uint16_t ui2;
	uint32_t ui4;
	int8_t i1;
	int16_t i2;
	int32_t i4;
	float f;
};

union op8 {
	double lf;
	uint64_t ull;
	int64_t ll;
};