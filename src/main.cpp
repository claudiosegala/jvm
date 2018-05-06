#include <cstdio>
#include <iostream>
#include <reader.hpp>
#include "bit.hpp"

#define W(x) std::cerr << "\033[35m" << #x << "=" << x << "\033[0m" << "\n";

/**
 * Iniciate reading the .class file
 */
void init (std::string filename) {
	auto file = jvm::Reader();

	file.open(filename);

	file.close();
}

int main (int argc, char *argv[ ]) {
	if (argc < 2) {
        std::cout << "Numero de argumentos insuficientes" << std::endl;
        return 0;
    }

    try {
		init(argv[1]);
	} catch (std::string error) {
	    std::cout << error << std::endl;
	}
}
