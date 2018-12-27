#include "class_loader/class_loader.hpp"
#include "engine/engine.hpp"
#include "util/JvmException.hpp"
#include "util/commander.hpp"

int main (int argc, char *argv[ ]) {

	std::vector<std::string> commands(argv + 1, argv + argc);

	try {
		jvm::CommandState state = jvm::Commander::parse(commands);

		jvm::ClassLoader cl(state.filename);

		if (state.shouldDescribe) {
			cl.show();
		}

		if (state.shouldRun) {
			jvm::Engine engine(cl);
			auto index = state.filename.find_last_of("/\\");
			engine.path = state.filename.substr(0, index + 1);
			engine.execute();
		}

	} catch (const jvm::JvmException& e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}