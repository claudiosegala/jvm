#include "class_loader/class_loader.hpp"
#include "util/JvmException.hpp"
#include "util/commander.hpp"

int main (int argc, char *argv[ ]) {

	std::vector<std::string> commands(argv + 1, argv + argc);

	try {
		jvm::CommandState state = jvm::Commander::parse(commands);

		jvm::ClassLoader cl;
		cl.read(state.filename);

		if (state.shouldDescribe) {
			cl.show();
		}

	} catch (const jvm::JvmException& e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}