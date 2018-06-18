#pragma once

#include <vector>
#include <stack>

namespace jvm {

	class Frame {
	public:
		/**
		* Constructor Default
		*/
		Frame() = default;

	private:
		//> Operands Stack
		std::stack<u4> operands;

		//> Local Variables Stack
		std::vector<u4> variables;
	};

}
