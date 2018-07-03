#pragma once

#include "base.hpp"
#include "util/converter.hpp"

namespace jvm {

	class Variables {
	public:
		/**
		 * Constructor
		 */
		//Variables(uint32_t);
		Variables();

		/**
		 * Destructor
		 */
		~Variables();

		void setSize(u4 size);

		op4 get4(u2);

		op8 get8(u2);

		void set(u2, op4);

		void set(u2, u4);

		void set(u2, op8);

		void set(u2, u8);

	private:
		//> Array of op4
		std::vector<op4> vec;

		// TODO: implement this
		//> Array of op4
		// op4* vec;
	};

}
