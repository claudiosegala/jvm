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
		Variables variables;

		//> The returned value
		u4 Return_value;

		//>Frame PC
		u4 PC;

		//> Class loader reference
		const ClassLoader& cl;

		//> Method info reference
		const MethodInfo& mt;
	};

}
