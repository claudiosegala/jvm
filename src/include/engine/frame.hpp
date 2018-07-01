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

		~Frame();

		//> Operands Stack
		Operands operands;

		//> Local Variables Vector
		lvv variables;

		//> The returned value
		u4 Return_value;

		//> Class loader reference
		const ClassLoader& cl;

		//> Method info reference
		const MethodInfo& mt;
	};

}
