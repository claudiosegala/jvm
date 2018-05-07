#include <iostream>
#include "_class.hpp"

int main (int argc, char *argv[ ]) {
	if (argc < 2) {
        std::cout << "Número de argumentos insuficientes" << std::endl;
        return 0;
    }

    try {
		auto cl = jvm::_Class();
		cl.read(std::string(argv[1]));
		cl.show();
	} catch (std::string& error) {
	    std::cout << error << std::endl;
	}
}
