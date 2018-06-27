#pragma once

#include "operands.hpp"
#include "variables.hpp"

namespace jvm {

	class ClassLoader;

	class Frame {
	public:
		/**
		* Constructor Default
		*/
		Frame() = default;

		//> Operands Stack
		Operands operands;

		//> Local Variables Stack
		Variables variables;

		//> The returned value
		u4 Return_value;

		//> Class loader reference
		ClassLoader* classLoader;
	};

}
