#pragma once

#include <string>
#include <iostream>
#include <vector>
#include <map>
#include <utility>
#include "util/macros.hpp"
#include "engine/framesStack.hpp"
#include "class_loader/constant_pool.hpp"

namespace jvm {

	class Instruction;

	typedef std::shared_ptr<Instruction> (*InstructionInstantiator)();

	class Code : public std::vector<std::shared_ptr<Instruction>> {
	public:
		void interpret(std::vector<u1> &);

		void printToStream(std::ostream &, std::string &);

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

	class Instruction {
	protected:
		Instruction() = default;

	public:
		template <class T>
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
		virtual void printToStream(std::ostream &, std::string &) = 0;

		/**
		 * Fill the params of this class
		 */
		virtual uint32_t fillParams(const uint32_t, const std::vector<u1> &) = 0;

		/**
		 * Get the name of the class
		 */
		virtual std::string getName() = 0;

		/**
		 * Get the OpCode of the class
		 */
		virtual uint32_t getOpCode() = 0;

	private:
		//> A static reference to the framestack of the program
		static FramesStack &fs;
	};

	//Constants opcodes 0x00,00 -- 0x14,20
	class OPnop : public Instruction { // 0x00 -- 00
	public:
		/**
		 * Constructor
		 */
		OPnop() = default;

		/**
		 * Nothing
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPaconst_null : public Instruction { // 0x01 -- 01
	public:
		/**
		 * Constructor
		 */
		OPaconst_null() = default;

		/**
		 * Push the null object reference onto the operand stack.
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPiconst_m1 : public Instruction { // 0x02 -- 02
	public:
		/**
		 * Constructor
		 */
		OPiconst_m1() = default;

		/**
		 *Push the int constant <i> (-1, 0, 1, 2, 3, 4 or 5) onto the operand stack.
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPiconst_0 : public Instruction { // 0x03 -- 03
	public:
		/**
		 * Constructor
		 */
		OPiconst_0() = default;

		/**
		 * Push the int constant <i> (-1, 0, 1, 2, 3, 4 or 5) onto the operand stack.
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPiconst_1 : public Instruction { // 0x04 -- 04
	public:
		/**
		 * Constructor
		 */
		OPiconst_1() = default;

		/**
		 * Push the int constant <i> (-1, 0, 1, 2, 3, 4 or 5) onto the operand stack.
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPiconst_2 : public Instruction { // 0x05 -- 05
	public:
		/**
		 * Constructor
		 */
		OPiconst_2() = default;

		/**
		 * Push the int constant <i> (-1, 0, 1, 2, 3, 4 or 5) onto the operand stack.
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPiconst_3 : public Instruction { // 0x06 -- 06
	public:
		/**
		 * Constructor
		 */
		OPiconst_3() = default;

		/**
		 *  Push the int constant <i> (-1, 0, 1, 2, 3, 4 or 5) onto the operand stack.
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPiconst_4 : public Instruction { // 0x07 -- 07
	public:
		/**
		 * Constructor
		 */
		OPiconst_4() = default;

		/**
		 * Push the int constant <i> (-1, 0, 1, 2, 3, 4 or 5) onto the operand stack.
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPiconst_5 : public Instruction { // 0x08 -- 08
	public:
		/**
		 * Constructor
		 */
		OPiconst_5() = default;

		/**
		 * Push the int constant <i> (-1, 0, 1, 2, 3, 4 or 5) onto the operand stack.
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPlconst_0 : public Instruction { // 0x09 -- 09
	public:
		/**
		 * Constructor
		 */
		OPlconst_0() = default;

		/**
		 * Push the long constant <l> (0 or 1) onto the operand stack.
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPlconst_1 : public Instruction { // 0x0A -- 10
	public:
		/**
		 * Constructor
		 */
		OPlconst_1() = default;

		/**
		 *Push the long constant <l> (0 or 1) onto the operand stack.
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPfconst_0 : public Instruction { // 0x0B -- 11
	public:
		/**
		 * Constructor
		 */
		OPfconst_0() = default;

		/**
		 * Push the float constant <f> (0.0, 1.0, or 2.0) onto the operand stack.
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPfconst_1 : public Instruction { // 0x0C -- 12
	public:
		/**
		 * Constructor
		 */
		OPfconst_1() = default;

		/**
		 * Push the float constant <f> (0.0, 1.0, or 2.0) onto the operand stack.
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPfconst_2 : public Instruction { // 0x0D -- 13
	public:
		/**
		 * Constructor
		 */
		OPfconst_2() = default;

		/**
		 * Push the float constant <f> (0.0, 1.0, or 2.0) onto the operand stack.
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPdconst_0 : public Instruction { // 0x0E -- 14
	public:
		/**
		 * Constructor
		 */
		OPdconst_0() = default;

		/**
		 * Push the double constant <d> (0.0 or 1.0) onto the operand stack.
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPdconst_1 : public Instruction { // 0x0F -- 15
	public:
		/**
		 * Constructor
		 */
		OPdconst_1() = default;

		/**
		 * Push the double constant <d> (0.0 or 1.0) onto the operand stack.
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPbipush : public Instruction { // 0x10 -- 16
	public:
		/**
		 * Constructor
		 */
		OPbipush() = default;

		/**
		 * Push byte
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		u1 byte; ///< Byte to be pushed as an integer to the stack
	};

	class OPsipush : public Instruction { // 0x11 -- 17
	public:
		/**
		 * Constructor
		 */
		OPsipush() = default;

		/**
		 * Push short
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		i2 value; ///< Short value to be pushed onto the stack
	};

	class OPldc : public Instruction { // 0x12 -- 18
	public:
		/**
		 * Constructor
		 */
		OPldc() = default;

		/**
		 * Push item from run-time constant pool
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		u1 index; ///< Index in the constant pool
	};

	class OPldc_w : public Instruction { // 0x13 -- 19
	public:
		/**
		 * Constructor
		 */
		OPldc_w() = default;

		/**
		 * Push item from run-time constant pool (wide index) (byte1 <<8 | byte2) são juntos em 16 bits para 1 index so
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		u2 index; ///< Index in the constant pool
	};

	class OPldc2_w : public Instruction { // 0x14 -- 20
	public:
		/**
		 * Constructor
		 */
		OPldc2_w() = default;

		/**
		 * Push long or double from run-time constant pool (wide index)
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		u2 index; ///< Index in the constant pool
	};

	//Loads opcodes 0x15,21 -- 0x35,53
	class OPiload : public Instruction { // 0x15 -- 21
	public:
		/**
		 * Constructor
		 */
		OPiload() = default;

		/**
		 * Load int from local variable push to stack
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		u1 index; ///< Index of the local variable
	};

	class OPlload : public Instruction { // 0x16 -- 22
	public:
		/**
		 * Constructor
		 */
		OPlload() = default;

		/**
		 * Load long from local variable
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		u1 index; ///< Index to the local variable
	};

	class OPfload : public Instruction { // 0x17 -- 23
	public:
		/**
		 * Constructor
		 */
		OPfload() = default;

		/**
		 * Load float from local variable
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		u1 index; ///< Index of the local float variable
	};

	class OPdload : public Instruction { // 0x18 -- 24
	public:
		/**
		 * Constructor
		 */
		OPdload() = default;

		/**
		 * Load double from local variable
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		u1 index; ///< Index to the local double variable
	};

	class OPaload : public Instruction { // 0x19 -- 25
	public:
		/**
		 * Constructor
		 */
		OPaload() = default;

		/**
		 * Load reference from local variable
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		u1 index; ///< index of the reference to the local variable to be loaded
	};

	class OPiload_0 : public Instruction { // 0x1A -- 26
	public:
		/**
		 * Constructor
		 */
		OPiload_0() = default;

		/**
		 * Load int from local variable index 1
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPiload_1 : public Instruction { // 0x1B -- 27
	public:
		/**
		 * Constructor
		 */
		OPiload_1() = default;

		/**
		 * Load int from local variable index 2
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPiload_2 : public Instruction { // 0x1C -- 28
	public:
		/**
		 * Constructor
		 */
		OPiload_2() = default;

		/**
		 * Load int from local variable index 3
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPiload_3 : public Instruction { // 0x1D -- 29
	public:
		/**
		 * Constructor
		 */
		OPiload_3() = default;

		/**
		 * Load int from local variable index 4
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPlload_0 : public Instruction { // 0x1E -- 30
	public:
		/**
		 * Constructor
		 */
		OPlload_0() = default;

		/**
		 * Load long from local variable from index 1
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPlload_1 : public Instruction { // 0x1F -- 31
	public:
		/**
		 * Constructor
		 */
		OPlload_1() = default;

		/**
		 * Load long from local variable from index 2
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPlload_2 : public Instruction { // 0x20 -- 32
	public:
		/**
		 * Constructor
		 */
		OPlload_2() = default;

		/**
		 * Load long from local variable from index 3
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPlload_3 : public Instruction { // 0x21 -- 33
	public:
		/**
		 * Constructor
		 */
		OPlload_3() = default;

		/**
		 * Load long from local variable from index 4
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPfload_0 : public Instruction { // 0x22 -- 34
	public:
		/**
		 * Constructor
		 */
		OPfload_0() = default;

		/**
		 * Load float from local variable index 1
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPfload_1 : public Instruction { // 0x23 -- 35
	public:
		/**
		 * Constructor
		 */
		OPfload_1() = default;

		/**
		 * Load float from local variable index 2
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPfload_2 : public Instruction { // 0x24 -- 36
	public:
		/**
		 * Constructor
		 */
		OPfload_2() = default;

		/**
		 * Load float from local variable index 3
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPfload_3 : public Instruction { // 0x25 -- 37
	public:
		/**
		 * Constructor
		 */
		OPfload_3() = default;

		/**
		 * Load float from local variable index 4
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPdload_0 : public Instruction { // 0x26 -- 38
	public:
		/**
		 * Constructor
		 */
		OPdload_0() = default;

		/**
		 * Load float from local variable index 1
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPdload_1 : public Instruction { // 0x27 -- 39
	public:
		/**
		 * Constructor
		 */
		OPdload_1() = default;

		/**
		 * Load float from local variable index 2
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPdload_2 : public Instruction { // 0x28 -- 40
	public:
		/**
		 * Constructor
		 */
		OPdload_2() = default;

		/**
		 * Load float from local variable index 3
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPdload_3 : public Instruction { // 0x29 -- 41
	public:
		/**
		 * Constructor
		 */
		OPdload_3() = default;

		/**
		 * Load float from local variable index 4
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPaload_0 : public Instruction { // 0x2A -- 42
	public:
		/**
		 * Constructor
		 */
		OPaload_0() = default;

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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPaload_1 : public Instruction { // 0x2B -- 43
	public:
		/**
		 * Constructor
		 */
		OPaload_1() = default;

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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPaload_2 : public Instruction { // 0x2C -- 44
	public:
		/**
		 * Constructor
		 */
		OPaload_2() = default;

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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPaload_3 : public Instruction { // 0x2D -- 45
	public:
		/**
		 * Constructor
		 */
		OPaload_3() = default;

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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPiaload : public Instruction { // 0x2E -- 46
	public:
		/**
		 * Constructor
		 */
		OPiaload() = default;

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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPlaload : public Instruction { // 0x2F -- 47
	public:
		/**
		 * Constructor
		 */
		OPlaload() = default;

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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPfaload : public Instruction { // 0x30 -- 48
	public:
		/**
		 * Constructor
		 */
		OPfaload() = default;

		/**
		 * Load float from array ,arrayref and index poped from stack acquired value is pushed onto the stack
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPdaload : public Instruction { // 0x31 -- 49
	public:
		/**
		 * Constructor
		 */
		OPdaload() = default;

		/**
		 * Load double from array arrayref,index
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPaaload : public Instruction { // 0x32 -- 50
	public:
		/**
		 * Constructor
		 */
		OPaaload() = default;

		/**
		 * Load reference from array arrayref,index type reference
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPbaload : public Instruction { // 0x33 -- 51
	public:
		/**
		 * Constructor
		 */
		OPbaload() = default;

		/**
		 * Load byte or boolean from array ,arrayref,index
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPcaload : public Instruction { // 0x34 -- 52
	public:
		/**
		 * Constructor
		 */
		OPcaload() = default;

		/**
		 * Load char from array ,arrayref,index
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPsaload : public Instruction { // 0x35 -- 53
	public:
		/**
		 * Constructor
		 */
		OPsaload() = default;

		/**
		 * Load short from array arrayref,index
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	//Stores 0x36,54 -> 0x56,86
	class OPistore : public Instruction { // 0x36 -- 54
	public:
		/**
		 * Constructor
		 */
		OPistore() = default;

		/**
		 * Store int into local variable pop from stack
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		u1 index; ///< Index to the local variable
	};

	class OPlstore : public Instruction { // 0x37 -- 55
	public:
		/**
		 * Constructor
		 */
		OPlstore() = default;

		/**
		 * Store long into local variable
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		u1 index; ///< Index to the local variable
	};

	class OPfstore : public Instruction { // 0x38 -- 56
	public:
		/**
		 * Constructor
		 */
		OPfstore() = default;

		/**
		 * Store float into local variable
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		u1 index; ///< Index of the local float variable
	};

	class OPdstore : public Instruction { // 0x39 -- 57
	public:
		/**
		 * Constructor
		 */
		OPdstore() = default;

		/**
		 * Store double into local variable
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		u1 index; ///< Index to the local double variable
	};

	class OPastore : public Instruction { // 0x3A -- 58
	public:
		/**
		 * Constructor
		 */
		OPastore() = default;

		/**
		 * Store reference into local variable
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		u1 index; ///< Index of the local variable that will store the reference
	};

	class OPistore_0 : public Instruction { // 0x3B -- 59
	public:
		/**
		 * Constructor
		 */
		OPistore_0() = default;

		/**
		 * Store int into local variable index 1
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPistore_1 : public Instruction { // 0x3C -- 60
	public:
		/**
		 * Constructor
		 */
		OPistore_1() = default;

		/**
		 * Store int into local variable index 2
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPistore_2 : public Instruction { // 0x3D -- 61
	public:
		/**
		 * Constructor
		 */
		OPistore_2() = default;

		/**
		 * Store int into local variable index 3
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPistore_3 : public Instruction { // 0x3E -- 62
	public:
		/**
		 * Constructor
		 */
		OPistore_3() = default;

		/**
		 * Store int into local variable index 4
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPlstore_0 : public Instruction { // 0x3F -- 63
	public:
		/**
		 * Constructor
		 */
		OPlstore_0() = default;

		/**
		 * Store long into local variable index 1
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPlstore_1 : public Instruction { // 0x40 -- 64
	public:
		/**
		 * Constructor
		 */
		OPlstore_1() = default;

		/**
		 * Store long into local variable index 2
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPlstore_2 : public Instruction { // 0x41 -- 65
	public:
		/**
		 * Constructor
		 */
		OPlstore_2() = default;

		/**
		 * Store long into local variable index 3
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPlstore_3 : public Instruction { // 0x42 -- 66
	public:
		/**
		 * Constructor
		 */
		OPlstore_3() = default;

		/**
		 * Store long into local variable index 4
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPfstore_0 : public Instruction { // 0x43 -- 67
	public:
		/**
		 * Constructor
		 */
		OPfstore_0() = default;

		/**
		 * Store float into local variable index 1
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPfstore_1 : public Instruction { // 0x44 -- 68
	public:
		/**
		 * Constructor
		 */
		OPfstore_1() = default;

		/**
		 * Store float into local variable index 2
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPfstore_2 : public Instruction { // 0x45 -- 69
	public:
		/**
		 * Constructor
		 */
		OPfstore_2() = default;

		/**
		 * Store float into local variable index 3
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPfstore_3 : public Instruction { // 0x46 -- 70
	public:
		/**
		 * Constructor
		 */
		OPfstore_3() = default;

		/**
		 * Store float into local variable index 4
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPdstore_0 : public Instruction { // 0x47 -- 71
	public:
		/**
		 * Constructor
		 */
		OPdstore_0() = default;

		/**
		 * Store double into local variable index 1
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPdstore_1 : public Instruction { // 0x48 -- 72
	public:
		/**
		 * Constructor
		 */
		OPdstore_1() = default;

		/**
		 * Store double into local variable index 2
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPdstore_2 : public Instruction { // 0x49 -- 73
	public:
		/**
		 * Constructor
		 */
		OPdstore_2() = default;

		/**
		 * Store double into local variable index 3
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPdstore_3 : public Instruction { // 0x4A -- 74
	public:
		/**
		 * Constructor
		 */
		OPdstore_3() = default;

		/**
		 * Store double into local variable index 4
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPastore_0 : public Instruction { // 0x4B -- 75
	public:
		/**
		 * Constructor
		 */
		OPastore_0() = default;

		/**
		 * Store reference into local variable index 1
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPastore_1 : public Instruction { // 0x4C -- 76
	public:
		/**
		 * Constructor
		 */
		OPastore_1() = default;

		/**
		 * Store reference into local variable index 2
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPastore_2 : public Instruction { // 0x4D -- 77
	public:
		/**
		 * Constructor
		 */
		OPastore_2() = default;

		/**
		 * Store reference into local variable index 3
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPastore_3 : public Instruction { // 0x4E -- 78
	public:
		/**
		 * Constructor
		 */
		OPastore_3() = default;

		/**
		 * Store reference into local variable index 4
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPiastore : public Instruction { // 0x4F -- 79
	public:
		/**
		 * Constructor
		 */
		OPiastore() = default;

		/**
		 * Store into int array opstack -> arrayref,index,value
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPlastore : public Instruction { // 0x50 -- 80
	public:
		/**
		 * Constructor
		 */
		OPlastore() = default;

		/**
		 * Store into long array arrayref,index,value
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPfastore : public Instruction { // 0x51 -- 81
	public:
		/**
		 * Constructor
		 */
		OPfastore() = default;

		/**
		 * Store into float array arrayref, index, value →
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPdastore : public Instruction { // 0x52 -- 82
	public:
		/**
		 * Constructor
		 */
		OPdastore() = default;

		/**
		 * Store into double array  arrayref, index, value →
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPaastore : public Instruction { // 0x53 -- 83
	public:
		/**
		 * Constructor
		 */
		OPaastore() = default;

		/**
		 * Store into reference array  arrayref, index, value →
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPbastore : public Instruction { // 0x54 -- 84
	public:
		/**
		 * Constructor
		 */
		OPbastore() = default;

		/**
		 * Store into byte or boolean array , arrayref, index, value →
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPcastore : public Instruction { // 0x55 -- 85
	public:
		/**
		 * Constructor
		 */
		OPcastore() = default;

		/**
		 * Store into char array ,  arrayref, index, value →
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPsastore : public Instruction { // 0x56 -- 86
	public:
		/**
		 * Constructor
		 */
		OPsastore() = default;

		/**
		 * Store into short array , arrayref, index, value →
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	// Stack 0x57,87 -> 0x5F,95
	class OPpop : public Instruction { // 0x57 -- 87
	public:
		/**
		 * Constructor
		 */
		OPpop() = default;

		/**
		 * Pop the top operand stack value
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPpop2 : public Instruction { // 0x58 -- 88
	public:
		/**
		 * Constructor
		 */
		OPpop2() = default;

		/**
		 * Pop the top one or two operand stack values
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPdup : public Instruction { // 0x59 -- 89
	public:
		/**
		 * Constructor
		 */
		OPdup() = default;

		/**
		 * Duplicate the top operand stack value
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPdup_x1 : public Instruction { // 0x5A -- 90
	public:
		/**
		 * Constructor
		 */
		OPdup_x1() = default;

		/**
		 * Duplicate the top operand stack value and insert two values down ,..., value2, value1 → ..., value1, value2, value1
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPdup_x2 : public Instruction { // 0x5B -- 91
	public:
		/**
		 * Constructor
		 */
		OPdup_x2() = default;

		/**
		 * Duplicate the top operand stack value and insert two or three values down ..., value3, value2, value1 → ..., value1, value3, value2, value1
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPdup2 : public Instruction { // 0x5C -- 92
	public:
		/**
		 * Constructor
		 */
		OPdup2() = default;

		/**
		 * Duplicate the top one or two operand stack values
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPdup2_x1 : public Instruction { // 0x5D -- 93
	public:
		/**
		 * Constructor
		 */
		OPdup2_x1() = default;

		/**
		 * Duplicate the top one or two operand stack values and insert two or three values down
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPdup2_x2 : public Instruction { // 0x5E -- 94
	public:
		/**
		 * Constructor
		 */
		OPdup2_x2() = default;

		/**
		 * Duplicate the top one or two operand stack values and insert two, three, or four values down
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPswap : public Instruction { // 0x5F -- 95
	public:
		/**
		 * Constructor
		 */
		OPswap() = default;

		/**
		 * Swap the top two operand stack values
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	// Math 0x60,96 -> 0x84,132
	class OPiadd : public Instruction { // 0x60 -- 96
	public:
		/**
		 * Constructor
		 */
		OPiadd() = default;

		/**
		 * Swap the top two operand stack values , ..., value1, value2 →..., result
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPladd : public Instruction { // 0x61 -- 97
	public:
		/**
		 * Constructor
		 */
		OPladd() = default;

		/**
		 * Add long ..., value1, value2 → ..., result
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPfadd : public Instruction { // 0x62 -- 98
	public:
		/**
		 * Constructor
		 */
		OPfadd() = default;

		/**
		 * Add float ..., value1, value2 → ..., result
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPdadd : public Instruction { // 0x63 -- 99
	public:
		/**
		 * Constructor
		 */
		OPdadd() = default;

		/**
		 * Add double , ..., value1, value2 → ..., result
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPisub : public Instruction { // 0x64 -- 100
	public:
		/**
		 * Constructor
		 */
		OPisub() = default;

		/**
		 * Subtract int ..., value1, value2 → ..., result
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPlsub : public Instruction { // 0x65 -- 101
	public:
		/**
		 * Constructor
		 */
		OPlsub() = default;

		/**
		 * Subtract long ..., value1, value2 → ..., result
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPfsub : public Instruction { // 0x66 -- 102
	public:
		/**
		 * Constructor
		 */
		OPfsub() = default;

		/**
		 * Subtract float ..., value1, value2 → ..., result
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPdsub : public Instruction { // 0x67 -- 103
	public:
		/**
		 * Constructor
		 */
		OPdsub() = default;

		/**
		 * Subtract double ..., value1, value2 → ..., result
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPimul : public Instruction { // 0x68 -- 104
	public:
		/**
		 * Constructor
		 */
		OPimul() = default;

		/**
		 * Multiply int ..., value1, value2 → ..., result
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPlmul : public Instruction { // 0x69 -- 105
	public:
		/**
		 * Constructor
		 */
		OPlmul() = default;

		/**
		 * Multiply long ..., value1, value2 → ..., result
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPfmul : public Instruction { // 0x6A -- 106
	public:
		/**
		 * Constructor
		 */
		OPfmul() = default;

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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPdmul : public Instruction { // 0x6B -- 107
	public:
		/**
		 * Constructor
		 */
		OPdmul() = default;

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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPidiv : public Instruction { // 0x6C -- 108
	public:
		/**
		 * Constructor
		 */
		OPidiv() = default;

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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPldiv : public Instruction { // 0x6D -- 109
	public:
		/**
		 * Constructor
		 */
		OPldiv() = default;

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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPfdiv : public Instruction { // 0x6E -- 110
	public:
		/**
		 * Constructor
		 */
		OPfdiv() = default;

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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPddiv : public Instruction { // 0x6F -- 111
	public:
		/**
		 * Constructor
		 */
		OPddiv() = default;

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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPirem : public Instruction { // 0x70 -- 112
	public:
		/**
		 * Constructor
		 */
		OPirem() = default;

		/**
		 * Remainder int , ..., value1, value2 → ..., result
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPlrem : public Instruction { // 0x71 -- 113
	public:
		/**
		 * Constructor
		 */
		OPlrem() = default;

		/**
		 * Remainder long , ..., value1, value2 → ..., result
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPfrem : public Instruction { // 0x72 -- 114
	public:
		/**
		 * Constructor
		 */
		OPfrem() = default;

		/**
		 * Remainder float ..., value1, value2 → ..., result
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPdrem : public Instruction { // 0x73 -- 115
	public:
		/**
		 * Constructor
		 */
		OPdrem() = default;

		/**
		 * Remainder double ..., value1, value2 → ..., result
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPineg : public Instruction { // 0x74 -- 116
	public:
		/**
		 * Constructor
		 */
		OPineg() = default;

		/**
		 * Negate int , ..., value →..., result
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPlneg : public Instruction { // 0x75 -- 117
	public:
		/**
		 * Constructor
		 */
		OPlneg() = default;

		/**
		 * Negate long ..., value → ..., result
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPfneg : public Instruction { // 0x76 -- 118
	public:
		/**
		 * Constructor
		 */
		OPfneg() = default;

		/**
		 * Negate float, ..., value → ..., result
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPdneg : public Instruction { // 0x77 -- 119
	public:
		/**
		 * Constructor
		 */
		OPdneg() = default;

		/**
		 * Negate double , ..., value → ..., result
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPishl : public Instruction { // 0x78 -- 120
	public:
		/**
		 * Constructor
		 */
		OPishl() = default;

		/**
		 * Shift left int , ..., value1, value2 → ..., result
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPlshl : public Instruction { // 0x79 -- 121
	public:
		/**
		 * Constructor
		 */
		OPlshl() = default;

		/**
		 * Shift left long , ..., value1, value2 → ..., result
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPishr : public Instruction { // 0x7A -- 122
	public:
		/**
		 * Constructor
		 */
		OPishr() = default;

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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPlshr : public Instruction { // 0x7B -- 123
	public:
		/**
		 * Constructor
		 */
		OPlshr() = default;

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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPiushr : public Instruction { // 0x7C -- 124
	public:
		/**
		 * Constructor
		 */
		OPiushr() = default;

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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPlushr : public Instruction { // 0x7D -- 125
	public:
		/**
		 * Constructor
		 */
		OPlushr() = default;

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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPiand : public Instruction { // 0x7E -- 126
	public:
		/**
		 * Constructor
		 */
		OPiand() = default;

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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPland : public Instruction { // 0x7F -- 127
	public:
		/**
		 * Constructor
		 */
		OPland() = default;

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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPior : public Instruction { // 0x80 -- 128
	public:
		/**
		 * Constructor
		 */
		OPior() = default;

		/**
		 *  Boolean OR int ,  ..., value1, value2 → ..., result
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPlor : public Instruction { // 0x81 --129
	public:
		/**
		 * Constructor
		 */
		OPlor() = default;

		/**
		 * Boolean OR long ,..., value1, value2 →..., result
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPixor : public Instruction { // 0x82 -- 130
	public:
		/**
		 * Constructor
		 */
		OPixor() = default;

		/**
		 * Boolean XOR int,..., value1, value2 → ..., result
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPlxor : public Instruction { // 0x83 -- 131
	public:
		/**
		 * Constructor
		 */
		OPlxor() = default;

		/**
		 * Boolean XOR long,..., value1, value2 → ..., result
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPiinc : public Instruction { // 0x84 -- 132
	public:
		/**
		 * Constructor
		 */
		OPiinc() = default;

		/**
		 * Increment local variable by constant
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		u1 index;		///< Index of the local variable
		i1 constant;	///< Value to be incremented to the local variable
	};

	//Conversations 0x85,133 -> 0x93,147
	class OPi2l : public Instruction { // 0x85 -- 133
	public:
		/**
		 * Constructor
		 */
		OPi2l() = default;

		/**
		 * Convert int to long
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPi2f : public Instruction { // 0x86 -- 134
	public:
		/**
		 * Constructor
		 */
		OPi2f() = default;

		/**
		 * Convert int to float , ..., value →..., result
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPi2d : public Instruction { // 0x87 -- 135
	public:
		/**
		 * Constructor
		 */
		OPi2d() = default;

		/**
		 * Convert int to double , ..., value →..., result
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPl2i : public Instruction { // 0x88 -- 136
	public:
		/**
		 * Constructor
		 */
		OPl2i() = default;

		/**
		 * Convert long to int,..., value →..., result
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPl2f : public Instruction { // 0x89 -- 137
	public:
		/**
		 * Constructor
		 */
		OPl2f() = default;

		/**
		 * Convert long to float ,..., value →..., result
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPl2d : public Instruction { // 0x8A -- 138
	public:
		/**
		 * Constructor
		 */
		OPl2d() = default;

		/**
		 * Convert long to double , ..., value →..., result
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPf2i : public Instruction { // 0x8B -- 139
	public:
		/**
		 * Constructor
		 */
		OPf2i() = default;

		/**
		 * Convert float to int , ..., value → ..., result
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPf2l : public Instruction { // 0x8C -- 140
	public:
		/**
		 * Constructor
		 */
		OPf2l() = default;

		/**
		 * Convert float to long , ..., value → ..., result
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPf2d : public Instruction { // 0x8D -- 141
	public:
		/**
		 * Constructor
		 */
		OPf2d() = default;

		/**
		 * Convert float to double, ..., value →..., result
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPd2i : public Instruction { // 0x8E -- 142
	public:
		/**
		 * Constructor
		 */
		OPd2i() = default;

		/**
		 * Convert double to int , ..., value → ..., result
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPd2l : public Instruction { // 0x8F -- 143
	public:
		/**
		 * Constructor
		 */
		OPd2l() = default;

		/**
		 * Convert double to long , ..., value → ..., result
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPd2f : public Instruction { // 0x90 -- 144
	public:
		/**
		 * Constructor
		 */
		OPd2f() = default;

		/**
		 * Convert double to float , ..., value → ..., result
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPi2b : public Instruction { // 0x91 -- 145
	public:
		/**
		 * Constructor
		 */
		OPi2b() = default;

		/**
		 * Convert int to byte , ..., value →..., result
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPi2c : public Instruction { // 0x92 -- 146
	public:
		/**
		 * Constructor
		 */
		OPi2c() = default;

		/**
		 * Convert int to char ..., value → ..., result
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPi2s : public Instruction { // 0x93 -- 147
	public:
		/**
		 * Constructor
		 */
		OPi2s() = default;

		/**
		 * Convert int to short ..., value →..., result
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	// Comparisons 0x94,148 -> 0xA6,166
	class OPlcmp : public Instruction { // 0x94 -- 148
	public:
		/**
		 * Constructor
		 */
		OPlcmp() = default;

		/**
		 * Compare long , ..., value1, value2 → ..., result
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPfcmpl : public Instruction { // 0x95 -- 149
	public:
		/**
		 * Constructor
		 */
		OPfcmpl() = default;

		/**
		 * Compare float , ..., value1, value2 → ..., result
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPfcmpg : public Instruction { // 0x96 -- 150
	public:
		/**
		 * Constructor
		 */
		OPfcmpg() = default;

		/**
		 * Compare float , ..., value1, value2 → ..., result
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPdcmpl : public Instruction { // 0x97 -- 151
	public:
		/**
		 * Constructor
		 */
		OPdcmpl() = default;

		/**
		 * Compare double , ..., value1, value2 → ..., result
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPdcmpg : public Instruction { // 0x98 -- 152
	public:
		/**
		 * Constructor
		 */
		OPdcmpg() = default;

		/**
		 * Compare double , ..., value1, value2 →..., result
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPifeq : public Instruction { // 0x99 -- 153
	public:
		/**
		 * Constructor
		 */
		OPifeq() = default;

		/**
		 * Branch if int comparison with zero succeeds
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		i2 branchoffset; ///< Offset to the next instruction
	};

	class OPifne : public Instruction { // 0x9A -- 154
	public:
		/**
		 * Constructor
		 */
		OPifne() = default;

		/**
		 * Branch if int comparison with zero succeeds
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		i2 branchoffset; ///< Offset to the next instruction
	};

	class OPiflt : public Instruction { // 0x9B -- 155
	public:
		/**
		 * Constructor
		 */
		OPiflt() = default;

		/**
		 * Branch if int comparison with zero succeeds
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		i2 branchoffset; ///< Offset to the next instruction
	};

	class OPifge : public Instruction { // 0x9C -- 156
	public:
		/**
		 * Constructor
		 */
		OPifge() = default;

		/**
		 * Branch if int comparison with zero succeeds
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		i2 branchoffset; ///< Offset to the next instruction
	};

	class OPifgt : public Instruction { // 0x9D -- 157
	public:
		/**
		 * Constructor
		 */
		OPifgt() = default;

		/**
		 * Branch if int comparison with zero succeeds
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		i2 branchoffset; ///< Offset to the next instruction
	};

	class OPifle : public Instruction { // 0x9E -- 158
	public:
		/**
		 * Constructor
		 */
		OPifle() = default;

		/**
		 * Branch if int comparison with zero succeeds
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		i2 branchoffset; ///< Offset to the next instruction
	};

	class OPif_icmpeq : public Instruction { // 0x9F -- 159
	public:
		/**
		 * Constructor
		 */
		OPif_icmpeq() = default;

		/**
		 *  Branch if int comparison succeeds
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		i2 branchoffset; ///< Offset to the next instruction
	};

	class OPif_icmpne : public Instruction { // 0xA0 -- 160
	public:
		/**
		 * Constructor
		 */
		OPif_icmpne() = default;

		/**
		 * Branch if int comparison succeeds
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		i2 branchoffset; ///< Offset to the next instruction
	};

	class OPif_icmplt : public Instruction { // 0xA1 - 161
	public:
		/**
		 * Constructor
		 */
		OPif_icmplt() = default;

		/**
		 * Branch if int comparison succeeds
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		i2 branchoffset; ///< Offset to the next instruction
	};

	class OPif_icmpge : public Instruction { // 0xA2 -- 162
	public:
		/**
		 * Constructor
		 */
		OPif_icmpge() = default;

		/**
		 * Branch if int comparison succeeds
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		i2 branchoffset; ///< Offset to the next instruction
	};

	class OPif_icmpgt : public Instruction { // 0xA3 -- 163
	public:
		/**
		 * Constructor
		 */
		OPif_icmpgt() = default;

		/**
		 * Branch if int comparison succeeds
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		i2 branchoffset; ///< Offset to the next instruction
	};

	class OPif_icmple : public Instruction { // 0xA4 -- 164
	public:
		/**
		 * Constructor
		 */
		OPif_icmple() = default;

		/**
		 * Branch if int comparison succeeds
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		i2 branchoffset; ///< Offset to the next instruction
	};

	class OPif_acmpeq : public Instruction { // 0xA5 -- 165
	public:
		/**
		 * Constructor
		 */
		OPif_acmpeq() = default;

		/**
		 * Branch if reference comparison succeeds
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		i2 branchoffset; ///< Offset to the next instruction
	};

	class OPif_acmpne : public Instruction { // 0xA6 -- 166
	public:
		/**
		 * Constructor
		 */
		OPif_acmpne() = default;

		/**
		 * Branch if reference comparison succeeds
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		i2 branchoffset; ///< Offset to the next instruction
	};

	//Control 0xA7,167 -> 0xB1,177
	class OPgoto : public Instruction { // 0xA7 -- 167
	public:
		/**
		 * Constructor
		 */
		OPgoto() = default;

		/**
		 * Branch always
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		i2 branchoffset; ///< Offset to the next instruction
	};

	class OPjsr : public Instruction { // 0xA8 -- 168
	public:
		/**
		 * Constructor
		 */
		OPjsr() = default;

		/**
		 * Jump subroutine
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		i2 branchoffset; ///< Offset to a subroutine
	};

	class OPret : public Instruction { // 0xA9 -- 169
	public:
		/**
		 * Constructor
		 */
		OPret() = default;

		/**
		 * Return from subroutine
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		u1 index; ///< Index to the local variable
	};

	class OPtableswitch : public Instruction { // 0xAA -- 170
	public:
		/**
		 * Constructor
		 */
		OPtableswitch() = default;

		/**
		 * Access jump table by index and jump
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		//> default
		i4 defaultbyte;

		//> low
		i4 low;

		//> high
		i4 high;

		//> Jump Offsets
		std::vector<i4> jumpOffsets;
	};

	class OPlookupswitch : public Instruction { // 0xAB -- 171
	public:
		/**
		 * Constructor
		 */
		OPlookupswitch() = default;

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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		//> default
		i4 defaultbyte;

		//> qtd of pairs
		i4 npairs;

		//> Jump Offsets
		std::map<i4, i4> pairs; // TODO: maybe, just maybe would be nice to use a std::map instead of std::vector
	};

	class OPireturn : public Instruction { // 0xAC -- 172
	public:
		/**
		 * Constructor
		 */
		OPireturn() = default;

		/**
		 * Return int from method
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPlreturn : public Instruction { // 0xAD -- 173
	public:
		/**
		 * Constructor
		 */
		OPlreturn() = default;

		/**
		 * Return long from method
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPfreturn : public Instruction { // 0xAE -- 174
	public:
		/**
		 * Constructor
		 */
		OPfreturn() = default;

		/**
		 * Return long from method
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPdreturn : public Instruction { // 0xAF -- 175
	public:
		/**
		 * Constructor
		 */
		OPdreturn() = default;

		/**
		 * Return double from method
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPareturn : public Instruction { // 0xB0 -- 176
	public:
		/**
		 * Constructor
		 */
		OPareturn() = default;

		/**
		 * Return reference from method
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPreturn : public Instruction { // 0xB1 -- 177
	public:
		/**
		 * Constructor
		 */
		OPreturn() = default;

		/**
		 * Return void from method
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	//References 0xB2,178 -> 0xC3,195
	class OPgetstatic : public Instruction { // 0xB2 -- 178
	public:
		/**
		 * Constructor
		 */
		OPgetstatic() = default;

		/**
		 * Get static field from class
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		u2 index; ///< Index to the field reference in the constant pool
	};

	class OPputstatic : public Instruction { // 0xB3 -- 179
	public:
		/**
		 * Constructor
		 */
		OPputstatic() = default;

		/**
		 * Get static field from class
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		u2 index; ///< Index in the constant pool to the field reference
	};

	class OPgetfield : public Instruction { // 0xB4 -- 180
	public:
		/**
		 * Constructor
		 */
		OPgetfield() = default;

		/**
		 * Fetch field from object
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		u2 index; ///< Index to the field reference in the constant pool
	};

	class OPputfield : public Instruction { // 0xB5 -- 181
	public:
		/**
		 * Constructor
		 */
		OPputfield() = default;

		/**
		 * Set field in object
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		u2 index; ///< Index in the constant pool to the field reference
	};

	class OPinvokevirtual : public Instruction { // 0xB6 -- 182
	public:
		/**
		 * Constructor
		 */
		OPinvokevirtual() = default;

		/**
		 * Invoke instance method; dispatch based on class
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		u2 index; ///< Index in the constant pool to the method reference
	};

	class OPinvokespecial : public Instruction { // 0xB7 -- 183
	public:
		/**
		 * Constructor
		 */
		OPinvokespecial() = default;

		/**
		 * Invoke instance method; special handling for superclass, private, and instance initialization method invocations
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		u2 index; ///< Index in the constant pool to the method reference
	};

	class OPinvokestatic : public Instruction { // 0xB8 -- 184
	public:
		/**
		 * Constructor
		 */
		OPinvokestatic() = default;

		/**
		 * Invoke a class (static) method
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		u2 index; ///< Index in the constant pool to the method reference
	};

	class OPinvokeinterface : public Instruction { // 0xB9 -- 185
	public:
		/**
		 * Constructor
		 */
		OPinvokeinterface() = default;

		/**
		 * Invoke interface method
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		u2 index;	///< Index in the constant pool to the interface method
		u1 count;	///< Count operand that must not be zero
	};

	class OPinvokedynamic : public Instruction { // 0xBA - - 186
	public:
		/**
		 * Constructor
		 */
		OPinvokedynamic() = default;

		/**
		 * Invoke dynamic method
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		u2 index; ///< Index in the constant pool
	};

	class OPnew : public Instruction { // 0xBB -- 187
	public:
		/**
		 * Constructor
		 */
		OPnew() = default;

		/**
		 * Create new object
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		u2 index; ///< Index in the constant pool to the class reference
	};

	class OPnewarray : public Instruction { // 0xBC -- 188
	public:
		/**
		 * Constructor
		 */
		OPnewarray() = default;

		/**
		 * Create new array
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		u1 atype; ///< Code that indicates the type of array to create
	};

	class OPanewarray : public Instruction { // 0xBD -- 189
	public:
		/**
		 * Constructor
		 */
		OPanewarray() = default;

		/**
		 * Create new array of reference
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		u2 index; ///< index of the reference to the class that identifies the component type
	};

	class OParraylength : public Instruction { // 0xBE -- 190
	public:
		/**
		 * Constructor
		 */
		OParraylength() = default;

		/**
		 * Get length of array
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPathrow : public Instruction { // 0xBF -- 191
	public:
		/**
		 * Constructor
		 */
		OPathrow() = default;

		/**
		 * Throw exception or error
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPcheckcast : public Instruction { // 0xC0 -- 192
	public:
		/**
		 * Constructor
		 */
		OPcheckcast() = default;

		/**
		 * Check whether object is of given type
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		u2 index; ///< Index of the class reference in the constant pool
	};

	class OPinstanceof : public Instruction { // 0xC1 -- 193
	public:
		/**
		 * Constructor
		 */
		OPinstanceof() = default;

		/**
		 * Determine if object is of given type
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		u2 index; ///< Index to the class reference in the constant pool
	};

	class OPmonitorenter : public Instruction { // 0xC2 -- 194
	public:
		/**
		 * Constructor
		 */
		OPmonitorenter() = default;

		/**
		 * Enter monitor for object
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	class OPmonitorexit : public Instruction { // 0xC3 -- 195
	public:
		/**
		 * Constructor
		 */
		OPmonitorexit() = default;

		/**
		 * Exit monitor for object
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	//Extended 0xC4,196 -> 0xC9,201
	class OPwide : public Instruction { // 0xC4 -- 196
	public:
		/**
		 * Constructor
		 */
		OPwide() = default;

		/**
		 * Extend local variable index by additional bytes
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		//> the opcode to execute wide
		u1 opcode;

		//> index
		u2 index;

		//> count byte
		u2 countbyte;
	};

	class OPmultianewarray : public Instruction { // 0xC5 -- 197
	public:
		/**
		 * Constructor
		 */
		OPmultianewarray() = default;

		/**
		 * Create new multidimensional array
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		u2 index; ///< Index in the constant pool
		u1 dimensions; // Number of dimensions of the array to be created, must be greater than or equal to 1
	};

	class OPifnull : public Instruction { // 0xC6 -- 198
	public:
		/**
		 * Constructor
		 */
		OPifnull() = default;

		/**
		 * Branch if reference is null
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		i2 branchoffset; ///< Offset to the next instruction
	};

	class OPifnonnull : public Instruction { // 0xC7 -- 199
	public:
		/**
		 * Constructor
		 */
		OPifnonnull() = default;

		/**
		 * Branch if reference not null
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		i2 branchoffset; ///< Offset to the next instruction
	};

	class OPgoto_w : public Instruction { // 0xC8 -- 200
	public:
		/**
		 * Constructor
		 */
		OPgoto_w() = default;

		/**
		 * Branch always (wide index)
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		i4 branchoffset; ///< Offset to the next instruction
	};

	class OPjsr_w : public Instruction { // 0xC9 -- 201
	public:
		/**
		 * Constructor
		 */
		OPjsr_w() = default;

		/**
		 * Jump subroutine (wide index)
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;

	private:
		i4 branchoffset; ///< Offset to a subroutine
	};

	//Reserved 0xca,202 -> 0xff,255
	/**
	 * This opcode have been reserved and may be used only inside a
	 * Java Virtual Machine implementation. It cannot appear in
	 * valid class files. In this case, we didn't implemented this
	 * opcode.
	 */
	class OPbreakpoint : public Instruction { // 0xca -- 202
	public:
		/**
		 * Constructor
		 */
		OPbreakpoint() = default;

		/**
		 * mnemonic breakpoint and is intended to be used by debuggers to implement breakpoints.
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	/**
	 * This opcode have been reserved and may be used only inside a
	 * Java Virtual Machine implementation. It cannot appear in
	 * valid class files. In this case, we didn't implemented this
	 * opcode.
	 */
	class OPimpdep1 : public Instruction { // 0xFE -- 254
	public:
		/**
		 * Constructor
		 */
		OPimpdep1() = default;

		/**
		 * These instructions are intended to provide "back doors" or traps to implementation-specific functionality implemented in software and hardware, respectively
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

	/**
	 * This opcode have been reserved and may be used only inside a
	 * Java Virtual Machine implementation. It cannot appear in
	 * valid class files. In this case, we didn't implemented this
	 * opcode.
	 */
	class OPimpdep2 : public Instruction { // 0xFF -- 255
	public:
		/**
		 * Constructor
		 */
		OPimpdep2() = default;

		/**
		 * These instructions are intended to provide "back doors" or traps to implementation-specific functionality implemented in software and hardware, respectively
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

		/**
		 * Get the OpCode of the class
		 */
		uint32_t getOpCode() override;
	};

};
