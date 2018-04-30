#include <iostream>
#include "lib/bit.hpp"
#include "lib/reader.hpp"

int main () {
	int size = sizeof(void *);
	std::cout << "Size: " << size << endl;
	std::cout << (size == 4 ? "32-bit" : "64-bit") << endl;
	return 0;
}
