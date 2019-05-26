#include "util/commander.hpp"

namespace jvm {
    CommandState Commander::parse(const std::vector<std::string>& commands) {
        CommandState state = {0};
        for (const auto &command : commands) {
            if (command == "--help"||  command == "-h") {
                // if it is help, than show it and finish the program
                Commander::show_help();
                exit(0);
            } else if (command == "--describe" || command == "-d") {
                state.shouldDescribe = true;
            } else if (state.filename.empty()) {
                state.filename = command;
            } else {
                throw JvmException("Tem algum problema com os argumentos");
            }
        }


        if (!state.shouldDescribe) {
            Commander::whatShouldDo(state);
        }
        
        // Deal with missing commands
        if (state.filename.empty()) {
            state.filename = Commander::get_name();
        }

        return state;
    }

    void Commander::show_help() {
        std::cout << "  -d, --describe => descrevem o .class\n";
        std::cout << "  -h, --help     => descrevem os comandos válidos\n";
    }

    std::string Commander::get_name() {
        std::string filename;
        do {
            std::cout << "Digite o nome do arquivo: ";
            std::cin >> filename;
        } while(filename.empty());
        return filename;
    }

    void Commander::whatShouldDo(CommandState& state) {
        int op;

        do {
            std::cout << "Escolha uma das opcoes abaixo:" << std::endl;
            std::cout << "1) Se deseja que o(s) .class seja(m) lido(s)" << std::endl;
            std::cout << "0) Se deseja sair" << std::endl;
            std::cout << "Eu escolho: ";

            int op;
            std::cin >> op;

            switch (op) {
                case 0:
                    exit(0);
                case 1:
                    state.shouldDescribe = true;
                    break;
                default:
                    std::cout << "Cara... Você tinha um trabalho, escolher entre 2 números..." << std::endl;
            }
        } while (op < 0 || op > 1);
    }
}
