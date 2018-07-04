#pragma once

#include "base.hpp"
#include "util/converter.hpp"

namespace jvm {

	class Operands : public std::stack<op4> {
	public:

		/**
		 * Default constructor
		 */
		Operands() = default;

		/**
		 * Sets the maximum size of the operands stack
		 * @param size 
		 */
		void setSize(u4 size);

		/**
		 * Pops 4 bytes from the operand stack and returns it
		 * @return 4 bytes of data from the stack
		 */
		op4 pop4();

		/**
		 * Pops 8 bytes from the operand stack and returns it
		 * @return 8 bytes of data from the stack
		 */
		op8 pop8();

		/**
		 * Pushes 4 bytes into the operand stack
		 * @param u4 unsigned int of 4 bytes to be pushed
		 */
		void push4(u4);

		/**
		 * Pushes 4 bytes into the operand stack
		 * @param op4 value of 4 bytes to be pushed
		 */
		void push4(op4);

		/**
		 * Pushes 4 bytes into the operand stack
		 * @param u8 unsigned int of 8 bytes to be pushed
		 */
		void push8(u8);

		/**
		 * Pushes 8 bytes into the operand stack
		 * @param op4 value of 8 bytes to be pushed
		 */
		void push8(op8);

		u4 maxSize;	///< Maximum size of the operands stack
	};

}
