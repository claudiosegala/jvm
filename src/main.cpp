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
		    std::string sourceName = (cl.constant_pool[cl.attributes.SourceFile[0]->sourcefile_index]->toString(cl.constant_pool));
		    std::string className = state.filename.substr(state.filename.size() - sourceName.size() - 1,  sourceName.size()-5);
		    if(sourceName.compare(0, sourceName.size() -5, className)){
                throw jvm::JvmException("The names of the class and source file don't match!");
		    }
		    if(cl.min_version>51) {
                std::cout << "O .class lido não é compatível com java7, deseja ler mesmo assim? (S/N)\n";
                char op;
                std::cin >> op;
                if(op == 'S' || op == 's')
                    cl.show();
            } else
			    cl.show();
		}

	} catch (const jvm::JvmException& e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}