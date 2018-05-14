#include <iostream>
#include <string>
#include "_class.hpp"

int main (int argc, char *argv[ ]) {
	if (argc < 2) {
        std::cout << "Número de argumentos insuficientes" << std::endl;
        return 0;
    }

	if (argc > 3) {
		std::cout << "O senhor ta pedindo demais" << std::endl;
		return 0;
	}

    try {
		if (argc == 3) {
			std::string s = argv[2];
			freopen (argv[2], "w", stdout);
		}

		auto cl = jvm::_Class();
		cl.read(std::string(argv[1]));
		cl.show();
	} catch (std::string& error) {
	    std::cout << error << std::endl;
	}

}
