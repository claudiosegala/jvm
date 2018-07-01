#pragma once

#include "base.hpp"

namespace jvm {
	class Variables   {
	public:
		/**
		 * Default constructor
		 */
		Variables() = default;

		void  Write_vector4(u1 ,op4);

		void  Write_vector8(u1 ,op8);

		op4 Read_vector4(u1);

		op8 Read_vector8(u1);


		 std::vector<op4> vetor;

	};
}
