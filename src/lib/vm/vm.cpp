#include <iostream>
#include <iomanip>
#include "vm/vm.hpp"
#include "vm/frame.hpp"

namespace jvm {

	VM::VM () {
		PC = 0;
	}

	void VM::run (ClassLoader& cl) {
		load();
		link();
		init();
	}

	void VM::load () {

	}

	void VM::link () {

	}

	void VM::init () {

	}

}