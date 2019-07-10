#pragma once

#include "instruction_info.hpp"

namespace jvm {

	typedef std::shared_ptr<InstructionInfo> (*InstructionInfoInstantiator)();

	/**
	 * Stores information about a code field, links to an instruction op code.
	 */
	class CodeInfo : public std::map<int, std::shared_ptr<InstructionInfo>, std::less<int>> {
	public:

		/**
		 * Given an opcode, it will get the right instruction
		 * @params data vector of bytes to be interpreted
		 */
		void interpret(std::vector<u1> &);

		/**
		 * Print the content of the class
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &);

	private:
		
		static InstructionInfoInstantiator instruction_set[256];	///> The set of instantiators to the instruction

		/**
		 * Given an opcode, it will get the right instruction
		 * @params u1 the opcode
		 * @return the shared pointer to the instruction
		 */
		std::shared_ptr<InstructionInfo> getInstr(u1 &);
	};

};
