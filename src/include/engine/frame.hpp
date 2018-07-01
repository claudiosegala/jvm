#pragma once

#include <class_loader/method.hpp>
#include "operands.hpp"
#include "variables.hpp"

namespace jvm {

	class ClassLoader;

	class Frame {
	public:
		/**
		* Constructor Default
		*/
		Frame(ClassLoader& cl);

		~Frame();

		//> Operands Stack
		Operands operands;

		//> Local Variables Vector
		lvv variables;

		//> The returned value
		u4 Return_value;

		//> Class loader reference
		ClassLoader& cl;
	};

}
