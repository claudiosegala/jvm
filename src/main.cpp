#include <iostream>
#include <string>
#include <vector>
#include "_class/_class.hpp"
#include "vm/vm.hpp"

void showCommands () {
	std::cout << "--describe or -d => descrevem o .class" << std::endl;
	std::cout << "--run or -r      => executa o código descrito no .class" << std::endl;
	std::cout << "--help or -h     => descrevem os comandos válidos" << std::endl;
}

int main (int argc, char *argv[ ]) {
	auto cl = jvm::_Class();
	std::string show;

	std::vector<std::string> commands(argv + 1, argv + argc);

	try {
		bool isToDescribe = false;
		bool isToRun = false;
		bool hasName = false;
		bool isHelp = false;
		std::string filename;

		for (const auto &command : commands) {
			if (command == "--describe" || command == "-d") {
				isToDescribe = true;
			} else if (command == "--run" || command == "-r") {
				isToRun = true;
			} else if (command == "--help" || command == "-h") {
				isHelp = true;
			} else if (!hasName) {
				hasName = true;
				filename = command;
			} else {
				throw "Os comandos ficaram confusos de entender, use o comando \'--help\' para entender melhor";
			}
		}

		jvm::_Class cl;
		jvm::VM vm;

		if (isHelp) {
			showCommands();
			return 0;
		}

		if (!hasName) {
			std::cout << "Digite o nome do arquivo: ";
			std::cin >> filename;
		}

		cl.read(std::string(filename));

		if (!isToDescribe && !isToRun) {
			int op;

			std::cout << "Digite 1 se deseja que o .class seja lido" << std::endl;
			std::cout << "Digite 2 se deseja que seja rodado o código" << std::endl;
			std::cout << "Digite 3 se ambos" << std::endl;
			std::cout << ": ";

			std::cin >> op;

			switch (op) {
				case 1:
					isToDescribe = true;
					break;
				case 2:
					isToRun = true;
					break;
				case 3:
					isToDescribe = true;
					isToRun = true;
					break;
				default:
					throw "Cara... Você tinha um trabalho, escolher entre 3 números...";
			}
		}

		// clearScreen();

		if (isToDescribe) {
			cl.show();
		}

		if (isToRun) {
			vm.classLoader(cl);
			vm.run();
		}

	} catch (std::string& error) {
	    std::cout << error << std::endl;
	} catch (const char* error) {
		std::cout << error << std::endl;
	}

}
