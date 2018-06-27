#include "engine/engine.hpp"

namespace jvm {

	Engine::Engine (ClassLoader &cl) : mainClass(cl), PC(0) {}

	void Engine::execute () {
		run_clinit();
		run_init();
	}

	void Engine::run_clinit () {

	}

	void Engine::run_init () {

	}

}