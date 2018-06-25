#pragma once

#include <vector>
#include <stack>
#include "operands.hpp"
#include "variables.hpp"

namespace jvm {

	class Frame {
	public:
		/**
		* Constructor Default
		*/
		Frame() = default;


		void create_frame(std::stack<std::shared_ptr<Frame>>);

		u4 destroy_frame(std::stack<std::shared_ptr<Frame>>);

		void initialize_frame(std::stack<std::shared_ptr<Frame>>, Operands, std::shared_ptr<jvm::CP_Entry>);



		
		//> Operands Stack
		Operands operands;

		//> Local Variables Stack
		variables variables;

		ConstantPool constat_pool_ref;

		u4 Return_value;

	};

}
