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

		void run();

		

	private:
		//> Operands Stack
		std::stack<u4> operands;

		//> Local Variables Stack
		std::vector<u4> variables;
	};

}
