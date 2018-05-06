#include <cstdio>
#include <iostream>
#include <reader.hpp>
#include "bit.hpp"

/**
 * Iniciate reading the .class file
 */
void init (std::string filename) {
	auto file = jvm::ByteCodeReader();

	file.open(filename);

	file.close();
}

int main (int argc, char *argv[ ]) {
	if (argc < 2) {
        std::cout << "Numero de argumentos insuficientes" << std::endl;
        return 0;
    }

    try {
		init(std::string(argv[1]));
	} catch (std::string error) {
	    std::cout << error << std::endl;
	}
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
