#include <cstdio>
#include "bit.hpp"

int main () {
    jvm::Data<uint32_t> w;
    w = 0x1234ABCD;
    w.Print();
    w.toEndianness(jvm::Endianness::BIG);
    w.Print();
    w.toEndianness(jvm::Endianness::LITTLE);
    w.Print();
    getchar();
    return 0;
}
