#pragma once

#include <vector>
#include <stack>
#include "util/macros.hpp"

namespace jvm {

	class Operands : public std::stack<u4> {
	public:
		/**
		* Constructor Default
		*/
		Operands() = default;

		// TODO: make sure it wont break the vector
		template<typename T>
		T pop ();

		template<typename T>
		void push (T);

	private:
		//> Operands Stack
		std::vector<u4> operands;
	};

}
