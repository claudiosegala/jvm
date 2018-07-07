#pragma once

#include "base.hpp"
#include "util/converter.hpp"

namespace jvm {

	class Operands : public std::stack<Data> {
	private:
		u2 size = 0; ///< Current size of the operands stack
		u2 maxSize = 0;	///< Maximum size of the operands stack
	public:

		/**
		 * Default constructor
		 */
		Operands() = default;

		/**
		 * Sets the maximum size of the operands stack
		 * @param size 
		 */
		void setSize(u2 size);

		/**
		 * Pops 4 bytes from the operand stack and returns it
		 * @return Data structure of data from the stack
		 */
		Data pop4();

		/**
		 * Pops 8 bytes from the operand stack and returns it
		 * @return BigData structure of data from the stack
		 */
		BigData pop8();

		/**
		 * Pushes 4 bytes into the operand stack
		 * @param u4 unsigned int of 4 bytes to be pushed
		 */
		void push4(u1, u4);

		/**
		 * Pushes 4 bytes into the operand stack
		 * @param op4 value of 4 bytes to be pushed
		 */
		void push4(u1, op4);

		/**
		 * Pushes 4 bytes into the operand stack
		 * @param u8 unsigned int of 8 bytes to be pushed
		 */
		void push8(u1, u8);

		/**
		 * Pushes 8 bytes into the operand stack
		 * @param op4 value of 8 bytes to be pushed
		 */
		void push8(u1, op8);

	};

}
