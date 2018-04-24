#include <iostream>

using namespace std;

int main () {
	int size = sizeof(void *);
	cout << "Size: " << size << endl;
	cout << (size == 4 ? "32-bit" : "64-bit") << endl;
	return 0;
}
