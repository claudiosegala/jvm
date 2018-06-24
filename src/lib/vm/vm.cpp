#include <iostream>
#include <iomanip>
#include "vm/vm.hpp"
#include "vm/frame.hpp"

namespace jvm {

	VM::VM (std::vector<_Class> &cl) {
		PC = 0;
	}

	void VM::run () {
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