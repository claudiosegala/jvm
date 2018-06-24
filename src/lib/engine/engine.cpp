#include <iostream>
#include <iomanip>
#include "engine/engine.hpp"
#include "engine/frame.hpp"

namespace jvm {

	Engine::Engine (ClassLoader &cl) : cl(cl), PC(0) {}

	void Engine::execute () {
		run_clinit();
		run_init();
	}

	void Engine::run_clinit () {

	}

	void Engine::run_init () {

	}

}