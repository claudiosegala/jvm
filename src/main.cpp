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
	std::string show;

	std::vector<std::string> commands(argv + 1, argv + argc);

	try {
		bool isToDescribe = false;
		bool isToRun = false;
		bool isHelp = false;
		std::vector<std::string> filenames;

		for (const auto &command : commands) {
			if (command == "--describe" or command == "-d") {
				isToDescribe = true;
			} else if (command == "--run" or command == "-r") {
				isToRun = true;
			} else if (command == "--help" or command == "-h") {
				isHelp = true;
			} else {
				filenames.push_back(command);
			}
		}

		std::vector<jvm::_Class> cls(filenames.size(), jvm::_Class());
		jvm::VM vm;

		if (isHelp) {
			showCommands();
			return 0;
		}

		if (filenames.empty()) {
			auto n = 0;

			std::cout << "Digite quantos .class serão lidos: ";
			std::cin >> n;

			filenames.resize(n);

			for (auto& filename : filenames) {
				std::cout << "Digite o nome do arquivo: ";
				std::cin >> filename;
			}
		}

		for (auto i = 0; i < filenames.size(); i++) {
			cls[i].read(filenames[i]);
		}

		if (not isToDescribe and not isToRun) {
			int op;

			std::cout << "Digite 1 se deseja que o(s) .class seja(m) lido(s)" << std::endl;
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
			for (auto cl : cls) {
				cl.show();
			}
		}

		if (isToRun) {
			vm.run(cls);
		}

	} catch (std::string& error) {
	    std::cout << error << std::endl;
	} catch (const char* error) {
		std::cout << error << std::endl;
	}

}
