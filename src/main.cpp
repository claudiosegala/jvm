#include <iostream>
#include "lib/bit.hpp"
#include "lib/reader.hpp"

int main (int argc, char *argv[ ]) {
	int size = sizeof(void *);
	std::cout << "Size: " << size << endl;
	std::cout << (size == 4 ? "32-bit" : "64-bit") << endl;

	if (argc < 2)
    {
        std::cout << "Numero de argumentos insuficientes" << endl;
    }



	return 0;
}
