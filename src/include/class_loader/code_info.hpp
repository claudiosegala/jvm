#pragma once

#include "instruction_info.hpp"

namespace jvm {

	typedef std::shared_ptr<InstructionInfo> (*InstructionInfoInstantiator)();

	class CodeInfo : public std::unordered_map<int, std::shared_ptr<InstructionInfo>> {
	public:
		void interpret(std::vector<u1> &);

		void printToStream(std::ostream &, std::string &);

	private:
		//> The set of instantiators to the instruction
		static const InstructionInfoInstantiator instruction_set[256];

		/**
		 * Given an opcode, it will get the right instruction
		 * @params u1 The opcode
		 * @return the shared pointer to the instruction
		 */
		std::shared_ptr<InstructionInfo> getInstr(const u1 &);
	};

};