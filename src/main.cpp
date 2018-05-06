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

    for (int i = 31; i >= 0; --i) {
        printf("%d", w[i]);
    }
    getchar();
    return 0;
}
