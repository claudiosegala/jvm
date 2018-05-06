#include <cstdio>
#include <iostream>
#include <reader.hpp>
#include <bit.hpp>
#include "bit.hpp"

#define W(x) std::cerr << "\033[35m" << #x << "=" << x << "\033[0m" << "\n";

/**
 * Iniciate reading the .class file
 */
void init (std::string filename) {
	auto file = jvm::Reader();

	file.open(filename);

	std::cout << "> .class" << std::endl;

	auto min_version = file.getNextHalfWord();
	std::cout << "Min Version: " << min_version.value.number << std::endl;

	auto max_version = file.getNextHalfWord();
	std::cout << "Max Version: " << max_version.value.number << std::endl;

	auto cp_count = file.getNextHalfWord();
	std::cout << "CP count: " << cp_count.value.number - 1 << std::endl;

	if (cp_count.value.number != 0) {
		for (int i = 0; i < cp_count.value.number; ++i) {
			auto tag = file.getNextByte();
			std::cout << "\t Tag: " << tag.value.number << std::endl;
			//TODO verifiacr se tag é válida
		}
	}

	file.close();
}

int main (int argc, char *argv[ ]) {
	if (argc < 2) {
        std::cout << "Número de argumentos insuficientes" << std::endl;
        return 0;
    }

    try {
		init(argv[1]);
	} catch (std::string error) {
	    std::cout << error << std::endl;
	}
}
