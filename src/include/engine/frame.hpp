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
		Frame(ClassLoader&, MethodInfo&);

		Operands operands;	///> Operands Stack

		Variables variables;	///> Local Variables Vector

		u4 Return_value;	///> The returned value

		u4 PC;	///>Frame PC

		ClassLoader& cl;	///> Class loader reference

		MethodInfo& mt;	///> Method info reference
	};

}
