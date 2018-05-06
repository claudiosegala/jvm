#include <cstdio>
#include <iostream>
#include <reader.hpp>
#include "bit.hpp"

int main (int argc, char *argv[ ]) {
	if (argc < 2) {
        std::cout << "Numero de argumentos insuficientes" << std::endl;
        return 0;
    }

    auto filename = std::string(argv[1]);

	auto file = jvm::ByteCodeReader();

	file.open(filename);

	// CONTINUE;

}

//	jvm::Data<uint32_t> w;
//	w = 0x1234ABCD;
//	w.Print();
//	w.toEndianness(jvm::Endianness::BIG);
//	w.Print();
//	w.toEndianness(jvm::Endianness::LITTLE);
//	w.Print();
//
//	for (int i = 31; i >= 0; --i) {
//		printf("%d", w[i]);
//	}
