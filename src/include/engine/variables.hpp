#pragma once

#include "base.hpp"
#include "util/converter.hpp"

namespace jvm {

	class Variables {
	public:
		/**
		 * Constructor
		 */
		Variables(uint32_t);


		/**
		 * Destructor
		 */
		~Variables();

		op4 get4(u2);

		op8 get8(u2);

		void set(u2, op4);

		void set(u2, u4);

		void set(u2, op8);

		void set(u2, u8);

	private:
		//> Array of op4
		op4* vec;
	};

}
