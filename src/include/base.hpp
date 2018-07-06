#pragma once

#include <map>
#include <stack>
#include <cmath>
#include <tuple>
#include <array>
#include <cstdio>
#include <locale>
#include <vector>
#include <memory>
#include <string>
#include <cmath>
#include <codecvt>
#include <sstream>
#include <fstream>
#include <utility>
#include <cstdint>
#include <iomanip>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <assert.h>



#define W(x)         std::cerr << "\033[35m" << #x << "=" << (x) << "\033[0m" << "\n";
#define MAGIC_NUMBER 0xCAFEBABE
#define BYTESIZE     8
#define HALFSIZE     16
#define WORDSIZE     32

#define T_ARRAY   1
#define T_OBJ     2 // TODO: verify this
#define T_REF     3 // TODO: verify this
#define T_BOOL    4
#define T_CHAR    5
#define T_FLOAT   6
#define T_DOUBLE  7
#define T_BYTE    8
#define T_SHORT   9
#define T_INT     10
#define T_LONG    11
#define T_RET     12
#define T_METHOD  13
#define T_INTERFACE     13



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

struct Data {
	u1 type;
	op4 value;
};

struct BigData {
	u1 type;
	op8 value;
};

struct Array {
	u4 type;
	u4 size;
	void * array;
};