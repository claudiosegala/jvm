#include "engine/engine.hpp"

namespace jvm {

	Engine::Engine (ClassLoader &cl) : PC(0) {
		auto name = cl.constant_pool[cl.this_class]->toString(cl.constant_pool);
		JavaClasses.insert({name, cl});
	}

	void Engine::execute () {
		//run_clinit();
		run_init();
	}

	void Engine::run_clinit () {

	}

	void Engine::run_init () {

	}

	MethodInfo &Engine::findMethod(CP_Methodref& ref) {
		auto &cl = fs.top().cl;
		auto &cp = cl.constant_pool;
		auto NameAndType = cp[ref.name_and_type_index] -> as<CP_NameAndType>();
		std::string name = cp[NameAndType.name_index] -> toString(cp);
		std::string descriptor = cp[NameAndType.descriptor_index] -> toString(cp);
		auto pair = cl.methods.find(name + descriptor);
		if(pair != cl.methods.end())
			return cl.methods[name+descriptor];
		throw "Method not found";
	}

	ClassLoader &Engine::findClass(CP_Class &classInfo) {
		auto &cl = fs.top().cl;
		auto &cp = cl.constant_pool;
		std::string ClassName = cp[classInfo.name_index]-> toString(cp);
		auto pair = JavaClasses.find(ClassName);
		if(pair != JavaClasses.end())
			return JavaClasses[ClassName];
		throw "Class not found";
	}




}