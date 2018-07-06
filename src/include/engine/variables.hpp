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

		/**
		 * Sets the maximum size of the variables vector
		 * @param size
		 */
		void setSize(u4 size);

		/**
		 * Gets a value of the variables vector given it's index
		 * @param idx must be a valid index of the variables vector
		 * @return op4 value stored at index idx
		 */
		op4 get4(u4);

		/**
		 * Gets a value of the variables vector given it's index
		 * @param idx must be a valid index of the variables vector
		 * @return op8 value stored at index idx
		 */
		op8 get8(u4);

		/**
		 * Sets value in the variables vector given a valid index
		 * @param idx must be a valid index of the variables vector
		 * @return op4 value to be stored at index idx
		 */
		void set(u4, op4);

		/**
		 * Sets value in the variables vector given a valid index
		 * @param idx must be a valid index of the variables vector
		 * @return u4 value to be stored at index idx
		 */
		void set(u4, u4);

		/**
		 * Sets value in the variables vector given a valid index
		 * @param idx must be a valid index of the variables vector
		 * @return op8 value to be stored at index idx
		 */
		void set(u4, op8);

		/**
		 * Sets value in the variables vector given a valid index
		 * @param idx must be a valid index of the variables vector
		 * @return u8 value to be stored at index idx
		 */
		void set(u4, u8);

	private:

		std::vector<op4> vec;	///> Array of op4

		// TODO: implement this
		//> Array of op4
		// op4* vec;
	};

}
