#pragma once

#include <string>
#include <iostream>
#include "util/macros.hpp"
#include "engine/framesStack.hpp"
#include "class_loader/constant_pool.hpp"

namespace jvm {

	class Instruction;

	typedef std::shared_ptr<Instruction> (* InstructionInstantiator) ();

	class Code : public std::vector<std::shared_ptr<Instruction>> {
	public:
		void interpret(std::vector<u1>&);

		void printToStream(std::ostream&, std::string&);

	private:
		//> The set of instantiators to the instruction
		static const InstructionInstantiator instruction_set[256];

		/**
		 * Given an opcode, it will get the right instruction
		 * @params u1 The opcode
		 * @return the shared pointer to the instruction
		 */
		std::shared_ptr<Instruction> getInstr(const u1&);
	};

	class Instruction {
	protected:
		Instruction() = default;
	public:
		template<class T>
		static std::shared_ptr<Instruction> instantiate() {
			return std::make_shared<T>();
		}

		virtual ~Instruction() = default;

		/**
		 * The execution of this instruction
		 */
		virtual void execute() = 0;

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&) = 0;

		/**
		 * Fill the params of this class
		 */
		virtual uint32_t fillParams(const uint32_t, const std::vector<u1>&) = 0;

		/**
		 * Get the name of the class
		 */
		virtual std::string getName() = 0;

	private:
		//> A static reference to the framestack of the program
		static FramesStack& fs;
	};


	//Constants opcodes 0x00,00 -- 0x14,20
	class op_nop : public Instruction {  // 0x00 - 00
	public:
		/**
		 * Constructor
		 */
		op_nop() = default;

		/**
		 * Does nothing
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_aconst_null : public Instruction {  // 0x01 --01
	public:
		/**
		 * Constructor
		 */
		op_aconst_null() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_iconst_m1 : public Instruction {  // 0x02 -- 02
	public:
		/**
		 * Constructor
		 */
		op_iconst_m1() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_iconst_0 : public Instruction {  // 0x03 -- 03
	public:
		/**
		 * Constructor
		 */
		op_iconst_0() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_iconst_1 : public Instruction {  // 0x04 -- 04
	public:
		/**
		 * Constructor
		 */
		op_iconst_1() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_iconst_2 : public Instruction {  // 0x05 -- 05
	public:
		/**
		 * Constructor
		 */
		op_iconst_2() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_iconst_3 : public Instruction {  // 0x06 -- 06
	public:
		/**
		 * Constructor
		 */
		op_iconst_3() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_iconst_4 : public Instruction {  // 0x07 -- 07
	public:
		/**
		 * Constructor
		 */
		op_iconst_4() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_iconst_5 : public Instruction {  // 0x08 -- 08
	public:
		/**
		 * Constructor
		 */
		op_iconst_5() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_lconst_0 : public Instruction {  // 0x09 -- 09
	public:
		/**
		 * Constructor
		 */
		op_lconst_0() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_lconst_1 : public Instruction {  // 0x0A -- 10
	public:
		/**
		 * Constructor
		 */
		op_lconst_1() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_fconst_0 : public Instruction {  // 0x0B -- 11
	public:
		/**
		 * Constructor
		 */
		op_fconst_0() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_fconst_1 : public Instruction {  // 0x0C -- 12
	public:
		/**
		 * Constructor
		 */
		op_fconst_1() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_fconst_2 : public Instruction {  // 0x0D -- 13
	public:
		/**
		 * Constructor
		 */
		op_fconst_2() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_dconst_0 : public Instruction {  // 0x0E -- 14
	public:
		/**
		 * Constructor
		 */
		op_dconst_0() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_dconst_1 : public Instruction {  // 0x0F -- 15
	public:
		/**
		 * Constructor
		 */
		op_dconst_1() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_bipush : public Instruction {  // 0x10 -- 16
	public:
		/**
		 * Constructor
		 */
		op_bipush() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	private:
		u1 byte; ///< Byte to be pushed as an integer to the stack
	};

	class op_sipush : public Instruction {  // 0x11 -- 17
	public:
		/**
		 * Constructor
		 */
		op_sipush() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_ldc : public Instruction {  // 0x12 -- 18
	public:
		/**
		 * Constructor
		 */
		op_ldc() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_ldc_w : public Instruction {  // 0x13 -- 19
	public:
		/**
		 * Constructor
		 */
		op_ldc_w() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_ldc2_w : public Instruction {  // 0x14 -- 20
	public:
		/**
		 * Constructor
		 */
		op_ldc2_w() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	//Loads opcodes 0x15,21 -- 0x35,53
	class op_iload : public Instruction {  //0x15 -- 21
	public:
		/**
		 * Constructor
		 */
		op_iload() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_lload : public Instruction {  // 0x16 -- 22
	public:
		/**
		 * Constructor
		 */
		op_lload() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_fload : public Instruction {  // 0x17 -- 23
	public:
		/**
		 * Constructor
		 */
		op_fload() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	private:
		u1 index; ///< Index of the local float variable
	};

	class op_dload : public Instruction {  // 0x18 -- 24
	public:
		/**
		 * Constructor
		 */
		op_dload() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;

	private:
		u1 index; ///< Index to the local double variable
	};

	class op_aload : public Instruction {  // 0x19 -- 25
	public:
		/**
		 * Constructor
		 */
		op_aload() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;

	private:
		u1 index; ///< index of the reference to the local variable to be loaded
	};

	class op_iload_0 : public Instruction {  // 0x1A -- 26
	public:
		/**
		 * Constructor
		 */
		op_iload_0() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_iload_1 : public Instruction {  // 0x1B -- 27
	public:
		/**
		 * Constructor
		 */
		op_iload_1() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_iload_2 : public Instruction {  // 0x1C -- 28
	public:
		/**
		 * Constructor
		 */
		op_iload_2() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_iload_3 : public Instruction {  // 0x1D -- 29
	public:
		/**
		 * Constructor
		 */
		op_iload_3() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_lload_0 : public Instruction {  // 0x1E -- 30
	public:
		/**
		 * Constructor
		 */
		op_lload_0() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_lload_1 : public Instruction {  // 0x1F -- 31
	public:
		/**
		 * Constructor
		 */
		op_lload_1() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_lload_2 : public Instruction {  // 0x20 -- 32
	public:
		/**
		 * Constructor
		 */
		op_lload_2() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_lload_3 : public Instruction {  // 0x21 -- 33
	public:
		/**
		 * Constructor
		 */
		op_lload_3() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_fload_0 : public Instruction {  // 0x22 -- 34
	public:
		/**
		 * Constructor
		 */
		op_fload_0() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_fload_1 : public Instruction {  // 0x23 -- 35
	public:
		/**
		 * Constructor
		 */
		op_fload_1() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_fload_2 : public Instruction {  // 0x24 -- 36
	public:
		/**
		 * Constructor
		 */
		op_fload_2() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_fload_3 : public Instruction {  // 0x25 -- 37
	public:
		/**
		 * Constructor
		 */
		op_fload_3() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_dload_0 : public Instruction {  // 0x26 -- 38
	public:
		/**
		 * Constructor
		 */
		op_dload_0() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_dload_1 : public Instruction {  // 0x27 -- 39
	public:
		/**
		 * Constructor
		 */
		op_dload_1() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_dload_2 : public Instruction {  // 0x28 -- 40
	public:
		/**
		 * Constructor
		 */
		op_dload_2() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_dload_3 : public Instruction {  // 0x29 -- 41
	public:
		/**
		 * Constructor
		 */
		op_dload_3() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_aload_0 : public Instruction {  // 0x2A -- 42
	public:
		/**
		 * Constructor
		 */
		op_aload_0() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_aload_1 : public Instruction {  // 0x2B -- 43
	public:
		/**
		 * Constructor
		 */
		op_aload_1() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_aload_2 : public Instruction {  // 0x2C -- 44
	public:
		/**
		 * Constructor
		 */
		op_aload_2() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_aload_3 : public Instruction {  // 0x2D -- 45
	public:
		/**
		 * Constructor
		 */
		op_aload_3() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_iaload : public Instruction {   // 0x2E -- 46
	public:
		/**
		 * Constructor
		 */
		op_iaload() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_laload : public Instruction {   // 0x2F -- 47
	public:
		/**
		 * Constructor
		 */
		op_laload() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_faload : public Instruction {   // 0x30 -- 48
	public:
		/**
		 * Constructor
		 */
		op_faload() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_daload : public Instruction {   // 0x31 -- 49
	public:
		/**
		 * Constructor
		 */
		op_daload() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_aaload : public Instruction {   // 0x32 -- 50
	public:
		/**
		 * Constructor
		 */
		op_aaload() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_baload : public Instruction {   // 0x33 -- 51
	public:
		/**
		 * Constructor
		 */
		op_baload() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_caload : public Instruction {   // 0x34 -- 52
	public:
		/**
		 * Constructor
		 */
		op_caload() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_saload : public Instruction {  // 0x35 -- 53
	public:
		/**
		 * Constructor
		 */
		op_saload() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	//Stores 0x36,54 -> 0x56,86
	class op_istore : public Instruction {  //0x36 -- 54
	public:
		/**
		 * Constructor
		 */
		op_istore() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_lstore : public Instruction {  // 0x37 -- 55
	public:
		/**
		 * Constructor
		 */
		op_lstore() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_fstore : public Instruction {  // 0x38 -- 56
	public:
		/**
		 * Constructor
		 */
		op_fstore() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;

	private:
		u1 index; ///< Index of the local float variable
	};

	class op_dstore : public Instruction {  // 0x39 -- 57
	public:
		/**
		 * Constructor
		 */
		op_dstore() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;

	private:
		u1 index; ///< Index to the local double variable
	};

	class op_astore : public Instruction {  // 0x3A -- 58
	public:
		/**
		 * Constructor
		 */
		op_astore() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;

	private:
		u1 index; ///< Index of the local variable that will store the reference
	};

	class op_istore_0 : public Instruction {  // 0x3B -- 59
	public:
		/**
		 * Constructor
		 */
		op_istore_0() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_istore_1 : public Instruction {  // 0x3C -- 60
	public:
		/**
		 * Constructor
		 */
		op_istore_1() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_istore_2 : public Instruction {  // 0x3D -- 61
	public:
		/**
		 * Constructor
		 */
		op_istore_2() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_istore_3 : public Instruction {  // 0x3E -- 62
	public:
		/**
		 * Constructor
		 */
		op_istore_3() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_lstore_0 : public Instruction {  // 0x3F -- 63
	public:
		/**
		 * Constructor
		 */
		op_lstore_0() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_lstore_1 : public Instruction {  // 0x40 -- 64
	public:
		/**
		 * Constructor
		 */
		op_lstore_1() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_lstore_2 : public Instruction {  // 0x41 -- 65
	public:
		/**
		 * Constructor
		 */
		op_lstore_2() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_lstore_3 : public Instruction {  // 0x42 -- 66
	public:
		/**
		 * Constructor
		 */
		op_lstore_3() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_fstore_0 : public Instruction {  // 0x43 -- 67
	public:
		/**
		 * Constructor
		 */
		op_fstore_0() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_fstore_1 : public Instruction {  // 0x44 -- 68
	public:
		/**
		 * Constructor
		 */
		op_fstore_1() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_fstore_2 : public Instruction {  // 0x45 -- 69
	public:
		/**
		 * Constructor
		 */
		op_fstore_2() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_fstore_3 : public Instruction {  // 0x46 -- 70
	public:
		/**
		 * Constructor
		 */
		op_fstore_3() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_dstore_0 : public Instruction {  // 0x47 -- 71
	public:
		/**
		 * Constructor
		 */
		op_dstore_0() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_dstore_1 : public Instruction {  // 0x48 -- 72
	public:
		/**
		 * Constructor
		 */
		op_dstore_1() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_dstore_2 : public Instruction {  // 0x49 -- 73
	public:
		/**
		 * Constructor
		 */
		op_dstore_2() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_dstore_3 : public Instruction {  // 0x4A -- 74
	public:
		/**
		 * Constructor
		 */
		op_dstore_3() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_astore_0 : public Instruction { // 0x4B -- 75
	public:
		/**
		 * Constructor
		 */
		op_astore_0() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_astore_1 : public Instruction {  // 0x4C -- 76
	public:
		/**
		 * Constructor
		 */
		op_astore_1() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_astore_2 : public Instruction {  // 0x4D -- 77
	public:
		/**
		 * Constructor
		 */
		op_astore_2() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_astore_3 : public Instruction {  // 0x4E -- 78
	public:
		/**
		 * Constructor
		 */
		op_astore_3() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_iastore : public Instruction {  // 0x4F -- 79
	public:
		/**
		 * Constructor
		 */
		op_iastore() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_lastore : public Instruction {  // 0x50 -- 80
	public:
		/**
		 * Constructor
		 */
		op_lastore() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_fastore : public Instruction {  // 0x51 -- 81
	public:
		/**
		 * Constructor
		 */
		op_fastore() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_dastore : public Instruction {  // 0x52 -- 82
	public:
		/**
		 * Constructor
		 */
		op_dastore() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_aastore : public Instruction {  // 0x53 -- 83
	public:
		/**
		 * Constructor
		 */
		op_aastore() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_bastore : public Instruction {  // 0x54 -- 84
	public:
		/**
		 * Constructor
		 */
		op_bastore() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_castore : public Instruction {  // 0x55 -- 85
	public:
		/**
		 * Constructor
		 */
		op_castore() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_sastore : public Instruction {  // 0x56 -- 86
	public:
		/**
		 * Constructor
		 */
		op_sastore() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	// Stack 0x57,87 -> 0x5F,95
	class op_pop : public Instruction {  //0x57 -- 87
	public:
		/**
		 * Constructor
		 */
		op_pop() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_pop2 : public Instruction {  //0x58 -- 88
	public:
		/**
		 * Constructor
		 */
		op_pop2() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_dup : public Instruction {  //0x59 -- 89
	public:
		/**
		 * Constructor
		 */
		op_dup() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_dup_x1 : public Instruction {  //0x5A -- 90
	public:
		/**
		 * Constructor
		 */
		op_dup_x1() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_dup_x2 : public Instruction {  //0x5B -- 91
	public:
		/**
		 * Constructor
		 */
		op_dup_x2() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_dup2 : public Instruction {  //0x5C -- 92
	public:
		/**
		 * Constructor
		 */
		op_dup2() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_dup2_x1 : public Instruction {  //0x5D -- 93
	public:
		/**
		 * Constructor
		 */
		op_dup2_x1() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_dup2_x2 : public Instruction {  //0x5E -- 94
	public:
		/**
		 * Constructor
		 */
		op_dup2_x2() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_swap : public Instruction {  //0x5F -- 95
	public:
		/**
		 * Constructor
		 */
		op_swap() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	// Math 0x60,96 -> 0x84,132
	class op_iadd : public Instruction {  //0x60 -- 96
	public:
		/**
		 * Constructor
		 */
		op_iadd() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_ladd : public Instruction {  //0x61 -- 97
	public:
		/**
		 * Constructor
		 */
		op_ladd() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_fadd : public Instruction {  //0x62 -- 98
	public:
		/**
		 * Constructor
		 */
		op_fadd() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_dadd : public Instruction {  //0x63 -- 99
	public:
		/**
		 * Constructor
		 */
		op_dadd() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_isub : public Instruction {  //0x64 -- 100
	public:
		/**
		 * Constructor
		 */
		op_isub() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_lsub : public Instruction {  //0x65 -- 101
	public:
		/**
		 * Constructor
		 */
		op_lsub() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_fsub : public Instruction {  //0x66 -- 102
	public:
		/**
		 * Constructor
		 */
		op_fsub() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_dsub : public Instruction {  //0x67 -- 103
	public:
		/**
		 * Constructor
		 */
		op_dsub() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_imul : public Instruction {  //0x68 -- 104
	public:
		/**
		 * Constructor
		 */
		op_imul() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_lmul : public Instruction {  //0x69 -- 105
	public:
		/**
		 * Constructor
		 */
		op_lmul() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_fmul : public Instruction {  //0x6A -- 106
	public:
		/**
		 * Constructor
		 */
		op_fmul() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_dmul : public Instruction {  //0x6B -- 107
	public:
		/**
		 * Constructor
		 */
		op_dmul() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_idiv : public Instruction {  //0x6C -- 108
	public:
		/**
		 * Constructor
		 */
		op_idiv() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_ldiv : public Instruction {  //0x6D -- 109
	public:
		/**
		 * Constructor
		 */
		op_ldiv() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_fdiv : public Instruction {  //0x6E -- 110
	public:
		/**
		 * Constructor
		 */
		op_fdiv() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_ddiv : public Instruction {  //0x6F -- 111
	public:
		/**
		 * Constructor
		 */
		op_ddiv() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_irem : public Instruction {  //0x70 -- 112
	public:
		/**
		 * Constructor
		 */
		op_irem() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_lrem : public Instruction {  //0x71 -- 113
	public:
		/**
		 * Constructor
		 */
		op_lrem() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_frem : public Instruction {  //0x72 -- 114
	public:
		/**
		 * Constructor
		 */
		op_frem() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_drem : public Instruction {  //0x73 -- 115
	public:
		/**
		 * Constructor
		 */
		op_drem() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_ineg : public Instruction {  //0x74 -- 116
	public:
		/**
		 * Constructor
		 */
		op_ineg() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_lneg : public Instruction {  //0x75 -- 117
	public:
		/**
		 * Constructor
		 */
		op_lneg() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_fneg : public Instruction {  //0x76 -- 118
	public:
		/**
		 * Constructor
		 */
		op_fneg() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_dneg : public Instruction {  //0x77 -- 119
	public:
		/**
		 * Constructor
		 */
		op_dneg() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_ishl : public Instruction {  //0x78 -- 120
	public:
		/**
		 * Constructor
		 */
		op_ishl() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_lshl : public Instruction {  //0x79 -- 121
	public:
		/**
		 * Constructor
		 */
		op_lshl() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_ishr : public Instruction {  //0x7A -- 122
	public:
		/**
		 * Constructor
		 */
		op_ishr() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_lshr : public Instruction {  //0x7B -- 123
	public:
		/**
		 * Constructor
		 */
		op_lshr() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_iushr : public Instruction {  //0x7C -- 124
	public:
		/**
		 * Constructor
		 */
		op_iushr() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_lushr : public Instruction {  //0x7D -- 125
	public:
		/**
		 * Constructor
		 */
		op_lushr() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_iand : public Instruction {  //0x7E -- 126
	public:
		/**
		 * Constructor
		 */
		op_iand() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_land : public Instruction {  // 0x7F -- 127
	public:
		/**
		 * Constructor
		 */
		op_land() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_ior : public Instruction {  // 0x80 -- 128
	public:
		/**
		 * Constructor
		 */
		op_ior() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_lor : public Instruction {  // 0x81 --129
	public:
		/**
		 * Constructor
		 */
		op_lor() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_ixor : public Instruction {  // 0x82 -- 130
	public:
		/**
		 * Constructor
		 */
		op_ixor() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_lxor : public Instruction {  // 0x83 -- 131
	public:
		/**
		 * Constructor
		 */
		op_lxor() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_iinc : public Instruction {  // 0x84 -- 132
	public:
		/**
		 * Constructor
		 */
		op_iinc() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;

	private:
		u1 index;		///< 
		u1 constant;	///< 
	};

	//Conversations 0x85,133 -> 0x93,147
	class op_i2l : public Instruction {  // 0x85 -- 133
	public:
		/**
		 * Constructor
		 */
		op_i2l() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_i2f : public Instruction {  // 0x86 -- 134
	public:
		/**
		 * Constructor
		 */
		op_i2f() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_i2d : public Instruction {  // 0x87 -- 135
	public:
		/**
		 * Constructor
		 */
		op_i2d() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_l2i : public Instruction {  // 0x88 -- 136
	public:
		/**
		 * Constructor
		 */
		op_l2i() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_l2f : public Instruction {  // 0x89 -- 137
	public:
		/**
		 * Constructor
		 */
		op_l2f() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_l2d : public Instruction {  // 0x8A -- 138
	public:
		/**
		 * Constructor
		 */
		op_l2d() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_f2i : public Instruction {  // 0x8B -- 139
	public:
		/**
		 * Constructor
		 */
		op_f2i() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_f2l : public Instruction {  // 0x8C -- 140
	public:
		/**
		 * Constructor
		 */
		op_f2l() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_f2d : public Instruction {  // 0x8D -- 141
	public:
		/**
		 * Constructor
		 */
		op_f2d() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_d2i : public Instruction {  // 0x8E -- 142
	public:
		/**
		 * Constructor
		 */
		op_d2i() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_d2l : public Instruction {  // 0x8F -- 143
	public:
		/**
		 * Constructor
		 */
		op_d2l() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_d2f : public Instruction {  // 0x90 -- 144
	public:
		/**
		 * Constructor
		 */
		op_d2f() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_i2b : public Instruction {  // 0x91 -- 145
	public:
		/**
		 * Constructor
		 */
		op_i2b() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_i2c : public Instruction {  // 0x92 -- 146
	public:
		/**
		 * Constructor
		 */
		op_i2c() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_i2s : public Instruction {  // 0x93 -- 147
	public:
		/**
		 * Constructor
		 */
		op_i2s() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	// Comparisons 0x94,148 -> 0xA6,166
	class op_lcmp : public Instruction {  // 0x94 -- 148
	public:
		/**
		 * Constructor
		 */
		op_lcmp() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_fcmpl : public Instruction {  // 0x95 -- 149
	public:
		/**
		 * Constructor
		 */
		op_fcmpl() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_fcmpg : public Instruction {  // 0x96 -- 150
	public:
		/**
		 * Constructor
		 */
		op_fcmpg() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_dcmpl : public Instruction {  // 0x97 -- 151
	public:
		/**
		 * Constructor
		 */
		op_dcmpl() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_dcmpg : public Instruction {  // 0x98 -- 152
	public:
		/**
		 * Constructor
		 */
		op_dcmpg() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_ifeq : public Instruction {  // 0x99 -- 153
	public:
		/**
		 * Constructor
		 */
		op_ifeq() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;

	private:
		u2 branchoffset; ///< Offset to the next instruction
	};

	class op_ifne : public Instruction {  // 0x9A -- 154
	public:
		/**
		 * Constructor
		 */
		op_ifne() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;

	private:
		u2 branchoffset; ///< Offset to the next instruction
	};

	class op_iflt : public Instruction {  // 0x9B -- 155
	public:
		/**
		 * Constructor
		 */
		op_iflt() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;

	private:
		u2 branchoffset; ///< Offset to the next instruction
	};

	class op_ifge : public Instruction {  // 0x9C -- 156
	public:
		/**
		 * Constructor
		 */
		op_ifge() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;

	private:
		u2 branchoffset; ///< Offset to the next instruction
	};

	class op_ifgt : public Instruction {  //0x9D -- 157
	public:
		/**
		 * Constructor
		 */
		op_ifgt() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;

	private:
		u2 branchoffset; ///< Offset to the next instruction
	};

	class op_ifle : public Instruction {  //0x9E -- 158
	public:
		/**
		 * Constructor
		 */
		op_ifle() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;

	private:
		u2 branchoffset; ///< Offset to the next instruction
	};

	class op_if_icmpeq : public Instruction {  // 0x9F -- 159
	public:
		/**
		 * Constructor
		 */
		op_if_icmpeq() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;

	private:
		u2 branchoffset; ///< Offset to the next instruction
	};

	class op_if_icmpne : public Instruction {  // 0xA0 -- 160
	public:
		/**
		 * Constructor
		 */
		op_if_icmpne() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;

	private:
		u2 branchoffset; ///< Offset to the next instruction
	};

	class op_if_icmplt : public Instruction {  // 0xA1 - 161
	public:
		/**
		 * Constructor
		 */
		op_if_icmplt() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;

	private:
		u2 branchoffset; ///< Offset to the next instruction
	};

	class op_if_icmpge : public Instruction {  // 0xA2 -- 162
	public:
		/**
		 * Constructor
		 */
		op_if_icmpge() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;

	private:
		u2 branchoffset; ///< Offset to the next instruction
	};

	class op_if_icmpgt : public Instruction {  // 0xA3 -- 163
	public:
		/**
		 * Constructor
		 */
		op_if_icmpgt() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;

	private:
		u2 branchoffset; ///< Offset to the next instruction
	};

	class op_if_icmple : public Instruction {  // 0xA4 -- 164
	public:
		/**
		 * Constructor
		 */
		op_if_icmple() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;

	private:
		u2 branchoffset; ///< Offset to the next instruction
	};

	class op_if_acmpeq : public Instruction {  // 0xA5 -- 165
	public:
		/**
		 * Constructor
		 */
		op_if_acmpeq() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;

	private:
		u2 branchoffset; ///< Offset to the next instruction
	};

	class op_if_acmpne : public Instruction {  // 0xA6 -- 166
	public:
		/**
		 * Constructor
		 */
		op_if_acmpne() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;

	private:
		u2 branchoffset; ///< Offset to the next instruction
	};

	//Control 0xA7,167 -> 0xB1,177
	class op_goto : public Instruction {  // 0xA7 -- 167
	public:
		/**
		 * Constructor
		 */
		op_goto() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;

	private:
		u2 branchoffset; ///< Offset to the next instruction
	};

	class op_jsr : public Instruction {  // 0xA8 -- 168
	public:
		/**
		 * Constructor
		 */
		op_jsr() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_ret : public Instruction {  // 0xA9 -- 169
	public:
		/**
		 * Constructor
		 */
		op_ret() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_tableswitch : public Instruction {  // 0xAA -- 170
	public:
		/**
		 * Constructor
		 */
		op_tableswitch() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_lookupswitch : public Instruction {  // 0xAA -- 170
	public:
		/**
		 * Constructor
		 */
		op_lookupswitch() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_ireturn : public Instruction {  // 0xAB -- 171
	public:
		/**
		 * Constructor
		 */
		op_ireturn() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_lreturn : public Instruction {  // 0xAC -- 172
	public:
		/**
		 * Constructor
		 */
		op_lreturn() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_freturn : public Instruction {  // 0xAD -- 173
	public:
		/**
		 * Constructor
		 */
		op_freturn() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_dreturn : public Instruction {  // 0xAE -- 174
	public:
		/**
		 * Constructor
		 */
		op_dreturn() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_areturn : public Instruction {  // 0xAF -- 175
	public:
		/**
		 * Constructor
		 */
		op_areturn() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_return : public Instruction {  // 0xB0 -- 176
	public:
		/**
		 * Constructor
		 */
		op_return() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	//References 0xB2,178 -> 0xC3,195
	class op_getstatic : public Instruction {  // 0xB2 -- 178
	public:
		/**
		 * Constructor
		 */
		op_getstatic() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;

	private:
		u2 index; ///< Index to the field reference in the constant pool
	};


	class op_putstatic : public Instruction {  // 0xB3 -- 179
	public:
		/**
		 * Constructor
		 */
		op_putstatic() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_getfield : public Instruction {  // 0xB4 -- 180
	public:
		/**
		 * Constructor
		 */
		op_getfield() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;

	private:
		u2 index; ///< Index to the field reference in the constant pool
	};

	class op_putfield : public Instruction {  // 0xB5 -- 181
	public:
		/**
		 * Constructor
		 */
		op_putfield() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_invokevirtual : public Instruction {  // 0xB6 -- 182
	public:
		/**
		 * Constructor
		 */
		op_invokevirtual() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_invokespecial : public Instruction {  // 0xB7 -- 183
	public:
		/**
		 * Constructor
		 */
		op_invokespecial() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_invokestatic : public Instruction {  // 0xB8 -- 184
	public:
		/**
		 * Constructor
		 */
		op_invokestatic() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_invokeinterface : public Instruction {  // 0xB9 -- 185
	public:
		/**
		 * Constructor
		 */
		op_invokeinterface() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_invokedynamic : public Instruction {  // 0xBA - - 186
	public:
		/**
		 * Constructor
		 */
		op_invokedynamic() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_new : public Instruction {  // 0xBB -- 187
	public:
		/**
		 * Constructor
		 */
		op_new() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_newarray : public Instruction {  // 0xBC -- 188
	public:
		/**
		 * Constructor
		 */
		op_newarray() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_anewarray : public Instruction {  // 0xBD -- 189
	public:
		/**
		 * Constructor
		 */
		op_anewarray() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;

	private:
		u2 index; ///< index of the reference to the class that identifies the component type
	};

	class op_arraylength : public Instruction { // 0xBE -- 190
	public:
		/**
		 * Constructor
		 */
		op_arraylength() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_athrow : public Instruction {        // 0xBF -- 191
	public:
		/**
		 * Constructor
		 */
		op_athrow() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_checkcast : public Instruction {     // 0xC0 -- 192
	public:
		/**
		 * Constructor
		 */
		op_checkcast() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;

	private:
		u2 index; ///< Index of the class reference in the constant pool
	};

	class op_instanceof : public Instruction {     //0xC1 -- 193
	public:
		/**
		 * Constructor
		 */
		op_instanceof() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_monitorenter : public Instruction {   // 0xC2 -- 194
	public:
		/**
		 * Constructor
		 */
		op_monitorenter() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_monitorexit : public Instruction {   // 0xC3 -- 195
	public:
		/**
		 * Constructor
		 */
		op_monitorexit() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	//Extended 0xC4,196 -> 0xC9,201
	class op_wide : public Instruction {  // 0xC4 -- 196
	public:
		/**
		 * Constructor
		 */
		op_wide() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_multianewarray : public Instruction {  // 0xC5 -- 197
	public:
		/**
		 * Constructor
		 */
		op_multianewarray() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	class op_ifnull : public Instruction {  // 0xC6 -- 198
	public:
		/**
		 * Constructor
		 */
		op_ifnull() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;

	private:
		u2 branchoffset; ///< Offset to the next instruction
	};

	class op_ifnonnull : public Instruction {  // 0xC7 -- 199
	public:
		/**
		 * Constructor
		 */
		op_ifnonnull() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;

	private:
		u2 branchoffset; ///< Offset to the next instruction
	};

	class op_goto_w : public Instruction {  // 0xC8 -- 200
	public:
		/**
		 * Constructor
		 */
		op_goto_w() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	private:
		u4 branchoffset; ///< Offset to the next instruction
	};

	class op_jsr_w : public Instruction {  // 0xC9 -- 201
	public:
		/**
		 * Constructor
		 */
		op_jsr_w() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	//Reserved 0xca,202 -> 0xff,255
	/**
	 * This opcode have been reserved and may be used only inside a 
	 * Java Virtual Machine implementation. It cannot appear in 
	 * valid class files. In this case, we didn't implemented this
	 * opcode.
	 */
	class op_breakpoint : public Instruction {  // 0xca -- 202
	public:
		/**
		 * Constructor
		 */
		op_breakpoint() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	/**
	 * This opcode have been reserved and may be used only inside a 
	 * Java Virtual Machine implementation. It cannot appear in 
	 * valid class files. In this case, we didn't implemented this
	 * opcode.
	 */
	class op_impdep1 : public Instruction {  // 0xFE -- 254
	public:
		/**
		 * Constructor
		 */
		op_impdep1() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

	/**
	 * This opcode have been reserved and may be used only inside a 
	 * Java Virtual Machine implementation. It cannot appear in 
	 * valid class files. In this case, we didn't implemented this
	 * opcode.
	 */
	class op_impdep2 : public Instruction {  // 0xFF -- 255
	public:
		/**
		 * Constructor
		 */
		op_impdep2() = default;

		/**
		 * The execution of this instruction
		 */
		void execute() override;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream&, std::string&) override;

		/**
		 * Fill the params of this class
		 */
		uint32_t fillParams(const uint32_t, const std::vector<u1>&) override;

		/**
		 * Get the name of the class
		 */
		std::string getName() override;
	};

};
