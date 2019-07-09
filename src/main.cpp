#include "class_loader/class_loader.hpp"
#include "engine/engine.hpp"
#include "util/JvmException.hpp"
#include "util/commander.hpp"

int main (int argc, char *argv[ ]) {

	std::vector<std::string> commands(argv + 1, argv + argc);

	try {
		jvm::CommandState state = jvm::Commander::parse(commands);

		jvm::ClassLoader cl;
        cl.shouldDebug = state.shouldDebug;
		cl.read(state.filename);

		if(cl.min_version>52) {
			std::cout << "O .class lido não é compatível com java8, deseja ler mesmo assim? (S/N)\n";
			char op;
			std::cin >> op;
			if (op == 'n' || op == 'N')
				return 0;
		}

		if (state.shouldDescribe) {
		    cl.show();
		}

        if (state.shouldRun) {
            jvm::Engine engine(cl);
            auto index = state.filename.find_last_of("/\\");
            engine.path = state.filename.substr(0, index + 1);
			engine.shouldDebug = state.shouldDebug;
            engine.execute();
        }

	} catch (const jvm::JvmException& e) {
		std::cout << e.what() << std::endl;
        //std::cout << "Execução interrompida" << std::endl;
	}

	return 0;
}