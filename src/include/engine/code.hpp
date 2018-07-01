#pragma once

#include "instruction.hpp"

namespace jvm {

	typedef std::shared_ptr<Instruction> (*InstructionInstantiator)();

	class Code : public std::vector<std::shared_ptr<Instruction>> {
	private:
		//> The set of instantiators to the instruction
		static const InstructionInstantiator instruction_set[256];

		/**
		 * Given an opcode, it will get the right instruction
		 * @params u1 The opcode
		 * @return the shared pointer to the instruction
		 */
		std::shared_ptr<Instruction> getInstr(const u1 &);
	};

};