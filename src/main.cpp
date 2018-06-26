#include "class_loader/class_loader.hpp"
#include "engine/engine.hpp"

void show_commands() {
	std::cout << "--describe or -d => descrevem o .class" << std::endl;
	std::cout << "--execute or -r      => executa o código descrito no .class" << std::endl;
	std::cout << "--help or -h     => descrevem os comandos válidos" << std::endl;
}

int main (int argc, char *argv[ ]) {
	std::string show;

	std::vector<std::string> commands(argv + 1, argv + argc);

	try {
		bool isToDescribe = false;
		bool isToRun = false;
		bool isHelp = false;
		bool hasName = false;
		std::string filename;

		for (const auto &command : commands) {
			if (command == "--describe" or command == "-d") {
				isToDescribe = true;
			} else if (command == "--execute" or command == "-r") {
				isToRun = true;
			} else if (command == "--help" or command == "-h") {
				isHelp = true;
			} else if (not hasName) {
				filename = command;
				hasName = true;
			} else {
				throw "Tem algum problema com os argumentos";
			}
		}

		jvm::ClassLoader cl;

		if (isHelp) {
			show_commands();
			return 0;
		}

		if (not hasName) {
			std::cout << "Digite o nome do arquivo: ";
			std::cin >> filename;
		}

		cl.read(filename);

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

		if (isToDescribe) {
			cl.show();
		}

		if (isToRun) {
			jvm::Engine engine(cl);
			engine.execute();
		}

	} catch (std::string& error) {
	    std::cout << error << std::endl;
	} catch (const char* error) {
		std::cout << error << std::endl;
	}

	return 0;
}
