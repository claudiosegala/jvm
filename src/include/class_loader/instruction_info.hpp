#pragma once

#include "base.hpp"
#include "util/converter.hpp"

namespace jvm {

	class InstructionInfo {
	protected:
		InstructionInfo() = default;

	public:
		//> Jumping bytes
		uint32_t jpm;

		template <class T>
		static std::shared_ptr<InstructionInfo> instantiate() {
			return std::make_shared<T>();
		}

		virtual ~InstructionInfo() = default;

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
	};

	//Constants opcodes 0x00,00 -- 0x14,20
	class OPINFOnop : public InstructionInfo { // 0x00 -- 00
	public:
		/**
		 * Constructor
		 */
		OPINFOnop() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * No params for this instruction
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

	class OPINFOaconst_null : public InstructionInfo { // 0x01 -- 01
	public:
		/**
		 * Constructor
		 */
		OPINFOaconst_null() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * operand stack ... → ..., null, opcode byte1, byte2 The immediate unsigned byte1 and byte2 values are assembled into an intermediate short where the value of the short is (byte1 << 8) | byte2
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

	class OPINFOiconst_m1 : public InstructionInfo { // 0x02 -- 02
	public:
		/**
		 * Constructor
		 */
		OPINFOiconst_m1() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Operand stack ... → ..., <i>
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

	class OPINFOiconst_0 : public InstructionInfo { // 0x03 -- 03
	public:
		/**
		 * Constructor
		 */
		OPINFOiconst_0() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Operand Stack ... → ..., <i>
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

	class OPINFOiconst_1 : public InstructionInfo { // 0x04 -- 04
	public:
		/**
		 * Constructor
		 */
		OPINFOiconst_1() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Operand Stack... → ..., <i>
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

	class OPINFOiconst_2 : public InstructionInfo { // 0x05 -- 05
	public:
		/**
		 * Constructor
		 */
		OPINFOiconst_2() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 *Operand Stack ... → ..., <i>
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

	class OPINFOiconst_3 : public InstructionInfo { // 0x06 -- 06
	public:
		/**
		 * Constructor
		 */
		OPINFOiconst_3() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 *Operand Stack  ... → ..., <i>
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

	class OPINFOiconst_4 : public InstructionInfo { // 0x07 -- 07
	public:
		/**
		 * Constructor
		 */
		OPINFOiconst_4() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 *Operand Stack ... → ..., <i>
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

	class OPINFOiconst_5 : public InstructionInfo { // 0x08 -- 08
	public:
		/**
		 * Constructor
		 */
		OPINFOiconst_5() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 *Operand Stack  ... → ..., <i>
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

	class OPINFOlconst_0 : public InstructionInfo { // 0x09 -- 09
	public:
		/**
		 * Constructor
		 */
		OPINFOlconst_0() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Operand Stack  ... → ..., <i>
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

	class OPINFOlconst_1 : public InstructionInfo { // 0x0A -- 10
	public:
		/**
		 * Constructor
		 */
		OPINFOlconst_1() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 *OpStack ... → ..., <l> ,
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

	class OPINFOfconst_0 : public InstructionInfo { // 0x0B -- 11
	public:
		/**
		 * Constructor
		 */
		OPINFOfconst_0() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ... → ..., <f>
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

	class OPINFOfconst_1 : public InstructionInfo { // 0x0C -- 12
	public:
		/**
		 * Constructor
		 */
		OPINFOfconst_1() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ... → ..., <f>
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

	class OPINFOfconst_2 : public InstructionInfo { // 0x0D -- 13
	public:
		/**
		 * Constructor
		 */
		OPINFOfconst_2() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ... → ..., <f>
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

	class OPINFOdconst_0 : public InstructionInfo { // 0x0E -- 14
	public:
		/**
		 * Constructor
		 */
		OPINFOdconst_0() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ... → ..., <f>
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

	class OPINFOdconst_1 : public InstructionInfo { // 0x0F -- 15
	public:
		/**
		 * Constructor
		 */
		OPINFOdconst_1() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ... → ..., <f>
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

	class OPINFObipush : public InstructionInfo { // 0x10 -- 16
	public:
		/**
		 * Constructor
		 */
		OPINFObipush() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Operand Stack  ... → ..., <i> , byte
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
		i1 byte; ///< Byte to be pushed as an integer to the stack
	};

	class OPINFOsipush : public InstructionInfo { // 0x11 -- 17
	public:
		/**
		 * Constructor
		 */
		OPINFOsipush() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Operand Stack ... → ..., value , The immediate unsigned byte1 and byte2 values are assembled into an intermediate short where the value of the short is (byte1 << 8) | byte2
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

	class OPINFOldc : public InstructionInfo { // 0x12 -- 18
	public:
		/**
		 * Constructor
		 */
		OPINFOldc() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Operand Stack ... → ..., value , The index is an unsigned byte that must be a valid index into the run-time constant pool
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

	class OPINFOldc_w : public InstructionInfo { // 0x13 -- 19
	public:
		/**
		 * Constructor
		 */
		OPINFOldc_w() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ... → ..., value , indexbyte1 + indexbyte2
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

	class OPINFOldc2_w : public InstructionInfo { // 0x14 -- 20
	public:
		/**
		 * Constructor
		 */
		OPINFOldc2_w() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Operand Stack ... → ..., value , indexbyte1 indexbyte2 , the value of the index is calculated as (indexbyte1 << 8) | indexbyte2, run-time constant pool
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
	class OPINFOiload : public InstructionInfo { // 0x15 -- 21
	public:
		/**
		 * Constructor
		 */
		OPINFOiload() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ... → ..., value , The index is an unsigned byte into local variable array,
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

	class OPINFOlload : public InstructionInfo { // 0x16 -- 22
	public:
		/**
		 * Constructor
		 */
		OPINFOlload() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ... → ..., value, The index is an unsigned byte , local variable array
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

	class OPINFOfload : public InstructionInfo { // 0x17 -- 23
	public:
		/**
		 * Constructor
		 */
		OPINFOfload() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Op_stack ... → ..., value, The index is an unsigned byte that must be an index into the local variable array
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

	class OPINFOdload : public InstructionInfo { // 0x18 -- 24
	public:
		/**
		 * Constructor
		 */
		OPINFOdload() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ... →..., value, The index is an unsigned byte. Both index and index+1 must be indices into the local variable array
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

	class OPINFOaload : public InstructionInfo { // 0x19 -- 25
	public:
		/**
		 * Constructor
		 */
		OPINFOaload() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack  ... → ..., objectref, The index is an unsigned byte that must be an index into the local variable array of the current frame
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

	class OPINFOiload_0 : public InstructionInfo { // 0x1A -- 26
	public:
		/**
		 * Constructor
		 */
		OPINFOiload_0() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ... → ..., value , The <n> must be an index into the local variable array
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

	class OPINFOiload_1 : public InstructionInfo { // 0x1B -- 27
	public:
		/**
		 * Constructor
		 */
		OPINFOiload_1() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ... → ..., value , The <n> must be an index into the local variable array
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

	class OPINFOiload_2 : public InstructionInfo { // 0x1C -- 28
	public:
		/**
		 * Constructor
		 */
		OPINFOiload_2() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ... → ..., value , The <n> must be an index into the local variable array
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

	class OPINFOiload_3 : public InstructionInfo { // 0x1D -- 29
	public:
		/**
		 * Constructor
		 */
		OPINFOiload_3() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ... → ..., value , The <n> must be an index into the local variable array
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

	class OPINFOlload_0 : public InstructionInfo { // 0x1E -- 30
	public:
		/**
		 * Constructor
		 */
		OPINFOlload_0() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ... → ..., value , The <n> must be an index into the local variable array
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

	class OPINFOlload_1 : public InstructionInfo { // 0x1F -- 31
	public:
		/**
		 * Constructor
		 */
		OPINFOlload_1() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ... → ..., value , The <n> must be an index into the local variable array
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

	class OPINFOlload_2 : public InstructionInfo { // 0x20 -- 32
	public:
		/**
		 * Constructor
		 */
		OPINFOlload_2() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ... → ..., value , The <n> must be an index into the local variable array
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

	class OPINFOlload_3 : public InstructionInfo { // 0x21 -- 33
	public:
		/**
		 * Constructor
		 */
		OPINFOlload_3() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ... → ..., value , The <n> must be an index into the local variable array
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

	class OPINFOfload_0 : public InstructionInfo { // 0x22 -- 34
	public:
		/**
		 * Constructor
		 */
		OPINFOfload_0() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ... → ..., value , The <n> must be an index into the local variable array of the current frame
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

	class OPINFOfload_1 : public InstructionInfo { // 0x23 -- 35
	public:
		/**
		 * Constructor
		 */
		OPINFOfload_1() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 *  OpStack ... → ..., value , The <n> must be an index into the local variable array of the current frame
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

	class OPINFOfload_2 : public InstructionInfo { // 0x24 -- 36
	public:
		/**
		 * Constructor
		 */
		OPINFOfload_2() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 *  OpStack ... → ..., value , The <n> must be an index into the local variable array of the current frame
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

	class OPINFOfload_3 : public InstructionInfo { // 0x25 -- 37
	public:
		/**
		 * Constructor
		 */
		OPINFOfload_3() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 *  OpStack ... → ..., value , The <n> must be an index into the local variable array of the current frame
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

	class OPINFOdload_0 : public InstructionInfo { // 0x26 -- 38
	public:
		/**
		 * Constructor
		 */
		OPINFOdload_0() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ... → ..., value, Both <n> and <n>+1 must be indices into the local variable array of the current frame
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

	class OPINFOdload_1 : public InstructionInfo { // 0x27 -- 39
	public:
		/**
		 * Constructor
		 */
		OPINFOdload_1() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ... → ..., value, Both <n> and <n>+1 must be indices into the local variable array of the current frame
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

	class OPINFOdload_2 : public InstructionInfo { // 0x28 -- 40
	public:
		/**
		 * Constructor
		 */
		OPINFOdload_2() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ... → ..., value, Both <n> and <n>+1 must be indices into the local variable array of the current frame
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

	class OPINFOdload_3 : public InstructionInfo { // 0x29 -- 41
	public:
		/**
		 * Constructor
		 */
		OPINFOdload_3() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ... → ..., value, Both <n> and <n>+1 must be indices into the local variable array of the current frame
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

	class OPINFOaload_0 : public InstructionInfo { // 0x2A -- 42
	public:
		/**
		 * Constructor
		 */
		OPINFOaload_0() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ... → ..., objectref,The <n> must be an index into the local variable array of the current frame
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

	class OPINFOaload_1 : public InstructionInfo { // 0x2B -- 43
	public:
		/**
		 * Constructor
		 */
		OPINFOaload_1() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ... → ..., objectref,The <n> must be an index into the local variable array of the current frame
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

	class OPINFOaload_2 : public InstructionInfo { // 0x2C -- 44
	public:
		/**
		 * Constructor
		 */
		OPINFOaload_2() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ... → ..., objectref,The <n> must be an index into the local variable array of the current frame
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

	class OPINFOaload_3 : public InstructionInfo { // 0x2D -- 45
	public:
		/**
		 * Constructor
		 */
		OPINFOaload_3() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ... → ..., objectref,The <n> must be an index into the local variable array of the current frame
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

	class OPINFOiaload : public InstructionInfo { // 0x2E -- 46
	public:
		/**
		 * Constructor
		 */
		OPINFOiaload() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack..., arrayref, index → ..., value,The <n> must be an index into the local variable array of the current frame
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

	class OPINFOlaload : public InstructionInfo { // 0x2F -- 47
	public:
		/**
		 * Constructor
		 */
		OPINFOlaload() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ..., arrayref, index → ..., value ,The <n> must be an index into the local variable array of the current frame
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

	class OPINFOfaload : public InstructionInfo { // 0x30 -- 48
	public:
		/**
		 * Constructor
		 */
		OPINFOfaload() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., arrayref, index → ..., value , The arrayref must be of type reference and must refer to an array whose components are of type float
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

	class OPINFOdaload : public InstructionInfo { // 0x31 -- 49
	public:
		/**
		 * Constructor
		 */
		OPINFOdaload() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ..., arrayref, index → ..., value , The arrayref must be of type reference and must refer to an array whose components are of type double.
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

	class OPINFOaaload : public InstructionInfo { // 0x32 -- 50
	public:
		/**
		 * Constructor
		 */
		OPINFOaaload() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ..., arrayref, index → ..., value , The arrayref must be of type reference and must refer to an array whose components are of type reference
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

	class OPINFObaload : public InstructionInfo { // 0x33 -- 51
	public:
		/**
		 * Constructor
		 */
		OPINFObaload() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ..., arrayref, index → ..., value , The arrayref must be of type reference and must refer to an array whose components are of type byte or of type boolean
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

	class OPINFOcaload : public InstructionInfo { // 0x34 -- 52
	public:
		/**
		 * Constructor
		 */
		OPINFOcaload() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ..., arrayref, index → ..., value , The arrayref must be of type reference and must refer to an array whose components are of type char. The index must be of type int
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

	class OPINFOsaload : public InstructionInfo { // 0x35 -- 53
	public:
		/**
		 * Constructor
		 */
		OPINFOsaload() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ..., arrayref, index → ..., value , The arrayref must be of type reference and must refer to an array whose components are of type short.
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
	class OPINFOistore : public InstructionInfo { // 0x36 -- 54
	public:
		/**
		 * Constructor
		 */
		OPINFOistore() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ..., value → ... , The index is an unsigned byte that must be an index into the local variable array of the current frame
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

	class OPINFOlstore : public InstructionInfo { // 0x37 -- 55
	public:
		/**
		 * Constructor
		 */
		OPINFOlstore() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ..., value → ... , The index is an unsigned byte. Both index and index+1 must be indices into the local variable array of the current frame
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

	class OPINFOfstore : public InstructionInfo { // 0x38 -- 56
	public:
		/**
		 * Constructor
		 */
		OPINFOfstore() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ..., value → ... , The index is an unsigned byte that must be an index into the local variable array of the current frame
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

	class OPINFOdstore : public InstructionInfo { // 0x39 -- 57
	public:
		/**
		 * Constructor
		 */
		OPINFOdstore() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ..., value → ... , The index is an unsigned byte. Both index and index+1 must be indices into the local variable array of the current frame

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

	class OPINFOastore : public InstructionInfo { // 0x3A -- 58
	public:
		/**
		 * Constructor
		 */
		OPINFOastore() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ..., objectref → ... , The index is an unsigned byte that must be an index into the local variable array of the current frame
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

	class OPINFOistore_0 : public InstructionInfo { // 0x3B -- 59
	public:
		/**
		 * Constructor
		 */
		OPINFOistore_0() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ..., value → ... , The <n> must be an index into the local variable array of the current frame
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

	class OPINFOistore_1 : public InstructionInfo { // 0x3C -- 60
	public:
		/**
		 * Constructor
		 */
		OPINFOistore_1() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ..., value → ... , The <n> must be an index into the local variable array of the current frame
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

	class OPINFOistore_2 : public InstructionInfo { // 0x3D -- 61
	public:
		/**
		 * Constructor
		 */
		OPINFOistore_2() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value → ...
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

	class OPINFOistore_3 : public InstructionInfo { // 0x3E -- 62
	public:
		/**
		 * Constructor
		 */
		OPINFOistore_3() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value → ... , The <n> must be an index into the local variable array of the current frame.
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

	class OPINFOlstore_0 : public InstructionInfo { // 0x3F -- 63
	public:
		/**
		 * Constructor
		 */
		OPINFOlstore_0() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ..., value → ... , Both <n> and <n>+1 must be indices into the local variable array of the current frame
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

	class OPINFOlstore_1 : public InstructionInfo { // 0x40 -- 64
	public:
		/**
		 * Constructor
		 */
		OPINFOlstore_1() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ..., value → ... , Both <n> and <n>+1 must be indices into the local variable array of the current frame
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

	class OPINFOlstore_2 : public InstructionInfo { // 0x41 -- 65
	public:
		/**
		 * Constructor
		 */
		OPINFOlstore_2() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ..., value → ... , Both <n> and <n>+1 must be indices into the local variable array of the current frame
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

	class OPINFOlstore_3 : public InstructionInfo { // 0x42 -- 66
	public:
		/**
		 * Constructor
		 */
		OPINFOlstore_3() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ..., value → ... , Both <n> and <n>+1 must be indices into the local variable array of the current frame
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

	class OPINFOfstore_0 : public InstructionInfo { // 0x43 -- 67
	public:
		/**
		 * Constructor
		 */
		OPINFOfstore_0() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ..., value → ... , The <n> must be an index into the local variable array of the current frame
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

	class OPINFOfstore_1 : public InstructionInfo { // 0x44 -- 68
	public:
		/**
		 * Constructor
		 */
		OPINFOfstore_1() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ..., value → ... , The <n> must be an index into the local variable array of the current frame
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

	class OPINFOfstore_2 : public InstructionInfo { // 0x45 -- 69
	public:
		/**
		 * Constructor
		 */
		OPINFOfstore_2() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ..., value → ... , The <n> must be an index into the local variable array of the current frame
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

	class OPINFOfstore_3 : public InstructionInfo { // 0x46 -- 70
	public:
		/**
		 * Constructor
		 */
		OPINFOfstore_3() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ..., value → ... , The <n> must be an index into the local variable array of the current frame
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

	class OPINFOdstore_0 : public InstructionInfo { // 0x47 -- 71
	public:
		/**
		 * Constructor
		 */
		OPINFOdstore_0() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ..., value → ... , Both <n> and <n>+1 must be indices into the local variable array of the current frame
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

	class OPINFOdstore_1 : public InstructionInfo { // 0x48 -- 72
	public:
		/**
		 * Constructor
		 */
		OPINFOdstore_1() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ..., value → ... , Both <n> and <n>+1 must be indices into the local variable array of the current frame
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

	class OPINFOdstore_2 : public InstructionInfo { // 0x49 -- 73
	public:
		/**
		 * Constructor
		 */
		OPINFOdstore_2() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ..., value → ... , Both <n> and <n>+1 must be indices into the local variable array of the current frame
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

	class OPINFOdstore_3 : public InstructionInfo { // 0x4A -- 74
	public:
		/**
		 * Constructor
		 */
		OPINFOdstore_3() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ..., value → ... , Both <n> and <n>+1 must be indices into the local variable array of the current frame
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

	class OPINFOastore_0 : public InstructionInfo { // 0x4B -- 75
	public:
		/**
		 * Constructor
		 */
		OPINFOastore_0() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * ..., objectref → ... , The <n> must be an index into the local variable array of the current frame
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

	class OPINFOastore_1 : public InstructionInfo { // 0x4C -- 76
	public:
		/**
		 * Constructor
		 */
		OPINFOastore_1() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * ..., objectref → ... , The <n> must be an index into the local variable array of the current frame
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

	class OPINFOastore_2 : public InstructionInfo { // 0x4D -- 77
	public:
		/**
		 * Constructor
		 */
		OPINFOastore_2() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ..., objectref → ... , The <n> must be an index into the local variable array of the current frame
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

	class OPINFOastore_3 : public InstructionInfo { // 0x4E -- 78
	public:
		/**
		 * Constructor
		 */
		OPINFOastore_3() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ..., objectref → ... , The <n> must be an index into the local variable array of the current frame
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

	class OPINFOiastore : public InstructionInfo { // 0x4F -- 79
	public:
		/**
		 * Constructor
		 */
		OPINFOiastore() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ..., arrayref, index, value →... , The arrayref must be of type reference and must refer to an array whose components are of type int. Both index and value must be of type int
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

	class OPINFOlastore : public InstructionInfo { // 0x50 -- 80
	public:
		/**
		 * Constructor
		 */
		OPINFOlastore() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ..., arrayref, index, value → ...
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

	class OPINFOfastore : public InstructionInfo { // 0x51 -- 81
	public:
		/**
		 * Constructor
		 */
		OPINFOfastore() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ..., arrayref, index, value → ... , The arrayref must be of type reference and must refer to an array whose components are of type float. The index must be of type int
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

	class OPINFOdastore : public InstructionInfo { // 0x52 -- 82
	public:
		/**
		 * Constructor
		 */
		OPINFOdastore() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ..., arrayref, index, value → ... , The arrayref must be of type reference and must refer to an array whose components are of type double
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

	class OPINFOaastore : public InstructionInfo { // 0x53 -- 83
	public:
		/**
		 * Constructor
		 */
		OPINFOaastore() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ..., arrayref, index, value → ... , The arrayref must be of type reference and must refer to an array whose components are of type reference
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

	class OPINFObastore : public InstructionInfo { // 0x54 -- 84
	public:
		/**
		 * Constructor
		 */
		OPINFObastore() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ..., arrayref, index, value → ... , The arrayref must be of type reference and must refer to an array whose components are of type byte or of type boolean. The index and the value must both be of type int.
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

	class OPINFOcastore : public InstructionInfo { // 0x55 -- 85
	public:
		/**
		 * Constructor
		 */
		OPINFOcastore() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * * OpStack ..., arrayref, index, value → ...
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

	class OPINFOsastore : public InstructionInfo { // 0x56 -- 86
	public:
		/**
		 * Constructor
		 */
		OPINFOsastore() = default;

		/**
		 *
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ..., arrayref, index, value → ... , The arrayref must be of type reference and must refer to an array whose components are of type short. Both index and value must be of type int.
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
	class OPINFOpop : public InstructionInfo { // 0x57 -- 87
	public:
		/**
		 * Constructor
		 */
		OPINFOpop() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ..., value → ... , Pop the top value from the operand stack.
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

	class OPINFOpop2 : public InstructionInfo { // 0x58 -- 88
	public:
		/**
		 * Constructor
		 */
		OPINFOpop2() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack Form 1: ..., value2, value1 → ... ,  where each of value1 and value2 is a value of a category 1 computional type
		 * OpStack Form 2: ..., value → ... , where value is a value of a category 2 computational type
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

	class OPINFOdup : public InstructionInfo { // 0x59 -- 89
	public:
		/**
		 * Constructor
		 */
		OPINFOdup() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ..., value → ..., value, value ,
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

	class OPINFOdup_x1 : public InstructionInfo { // 0x5A -- 90
	public:
		/**
		 * Constructor
		 */
		OPINFOdup_x1() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack ..., value2, value1 → ..., value1, value2, value1 , Duplicate the top value on the operand stack and insert the duplicated value two values down in the operand stack.
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

	class OPINFOdup_x2 : public InstructionInfo { // 0x5B -- 91
	public:
		/**
		 * Constructor
		 */
		OPINFOdup_x2() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack Form 1: ..., value3, value2, value1 → ..., value1, value3, value2, value1 , where value1, value2, and value3 are all values of a category 1 computational type
		 * OpStack Form 2: ..., value2, value1 → ..., value1, value2, value1 , where value1 is a value of a category 1 computational type and value2 is a value of a category 2 computational type
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

	class OPINFOdup2 : public InstructionInfo { // 0x5C -- 92
	public:
		/**
		 * Constructor
		 */
		OPINFOdup2() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack Form 1: ..., value2, value1 → ..., value2, value1, value2, value1 ,where both value1 and value2 are values of a category 1 computational type
		 * OpStack Form 2: ..., value → ..., value, value where value is a value of a category 2 computational type
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

	class OPINFOdup2_x1 : public InstructionInfo { // 0x5D -- 93
	public:
		/**
		 * Constructor
		 */
		OPINFOdup2_x1() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * OpStack Form 1: ..., value3, value2, value1 → ..., value2, value1, value3, value2, value1 , where value1, value2, and value3 are all values of a category 1 computational type
		 * OpStack Form 2: ..., value2, value1 → ..., value1, value2, value1 , where value1 is a value of a category 2 computational type and value2 is a value of a category 1 computational type
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

	class OPINFOdup2_x2 : public InstructionInfo { // 0x5E -- 94
	public:
		/**
		 * Constructor
		 */
		OPINFOdup2_x2() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack Form 1: ..., value4, value3, value2, value1 → ..., value2, value1, value4, value3, value2, value1 , where value1, value2, value3, and value4 are all values of a category 1 computational type,
		 * Opstack Form 2: ..., value3, value2, value1 → ..., value1, value3, value2, value1
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

	class OPINFOswap : public InstructionInfo { // 0x5F -- 95
	public:
		/**
		 * Constructor
		 */
		OPINFOswap() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value2, value1 → ..., value1, value2
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
	class OPINFOiadd : public InstructionInfo { // 0x60 -- 96
	public:
		/**
		 * Constructor
		 */
		OPINFOiadd() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result
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

	class OPINFOladd : public InstructionInfo { // 0x61 -- 97
	public:
		/**
		 * Constructor
		 */
		OPINFOladd() = default;

		/**
		 *
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result
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

	class OPINFOfadd : public InstructionInfo { // 0x62 -- 98
	public:
		/**
		 * Constructor
		 */
		OPINFOfadd() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack  ..., value1, value2 → ..., result
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

	class OPINFOdadd : public InstructionInfo { // 0x63 -- 99
	public:
		/**
		 * Constructor
		 */
		OPINFOdadd() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result
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

	class OPINFOisub : public InstructionInfo { // 0x64 -- 100
	public:
		/**
		 * Constructor
		 */
		OPINFOisub() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result
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

	class OPINFOlsub : public InstructionInfo { // 0x65 -- 101
	public:
		/**
		 * Constructor
		 */
		OPINFOlsub() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result
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

	class OPINFOfsub : public InstructionInfo { // 0x66 -- 102
	public:
		/**
		 * Constructor
		 */
		OPINFOfsub() = default;

		/**
		 * Opstack  ..., value1, value2 → ..., result
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result
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

	class OPINFOdsub : public InstructionInfo { // 0x67 -- 103
	public:
		/**
		 * Constructor
		 */
		OPINFOdsub() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack  ..., value1, value2 → ..., result
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

	class OPINFOimul : public InstructionInfo { // 0x68 -- 104
	public:
		/**
		 * Constructor
		 */
		OPINFOimul() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result
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

	class OPINFOlmul : public InstructionInfo { // 0x69 -- 105
	public:
		/**
		 * Constructor
		 */
		OPINFOlmul() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result
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

	class OPINFOfmul : public InstructionInfo { // 0x6A -- 106
	public:
		/**
		 * Constructor
		 */
		OPINFOfmul() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result
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

	class OPINFOdmul : public InstructionInfo { // 0x6B -- 107
	public:
		/**
		 * Constructor
		 */
		OPINFOdmul() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result pop2 for each value
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

	class OPINFOidiv : public InstructionInfo { // 0x6C -- 108
	public:
		/**
		 * Constructor
		 */
		OPINFOidiv() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result
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

	class OPINFOldiv : public InstructionInfo { // 0x6D -- 109
	public:
		/**
		 * Constructor
		 */
		OPINFOldiv() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result
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

	class OPINFOfdiv : public InstructionInfo { // 0x6E -- 110
	public:
		/**
		 * Constructor
		 */
		OPINFOfdiv() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result
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

	class OPINFOddiv : public InstructionInfo { // 0x6F -- 111
	public:
		/**
		 * Constructor
		 */
		OPINFOddiv() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result
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

	class OPINFOirem : public InstructionInfo { // 0x70 -- 112
	public:
		/**
		 * Constructor
		 */
		OPINFOirem() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack  ..., value1, value2 → ..., result
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

	class OPINFOlrem : public InstructionInfo { // 0x71 -- 113
	public:
		/**
		 * Constructor
		 */
		OPINFOlrem() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack  ..., value1, value2 → ..., result
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

	class OPINFOfrem : public InstructionInfo { // 0x72 -- 114
	public:
		/**
		 * Constructor
		 */
		OPINFOfrem() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result
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

	class OPINFOdrem : public InstructionInfo { // 0x73 -- 115
	public:
		/**
		 * Constructor
		 */
		OPINFOdrem() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result
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

	class OPINFOineg : public InstructionInfo { // 0x74 -- 116
	public:
		/**
		 * Constructor
		 */
		OPINFOineg() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack  ..., value →..., result
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

	class OPINFOlneg : public InstructionInfo { // 0x75 -- 117
	public:
		/**
		 * Constructor
		 */
		OPINFOlneg() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value → ..., result
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

	class OPINFOfneg : public InstructionInfo { // 0x76 -- 118
	public:
		/**
		 * Constructor
		 */
		OPINFOfneg() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack  ..., value → ..., result
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

	class OPINFOdneg : public InstructionInfo { // 0x77 -- 119
	public:
		/**
		 * Constructor
		 */
		OPINFOdneg() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack  ..., value → ..., result
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

	class OPINFOishl : public InstructionInfo { // 0x78 -- 120
	public:
		/**
		 * Constructor
		 */
		OPINFOishl() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result
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

	class OPINFOlshl : public InstructionInfo { // 0x79 -- 121
	public:
		/**
		 * Constructor
		 */
		OPINFOlshl() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result
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

	class OPINFOishr : public InstructionInfo { // 0x7A -- 122
	public:
		/**
		 * Constructor
		 */
		OPINFOishr() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result
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

	class OPINFOlshr : public InstructionInfo { // 0x7B -- 123
	public:
		/**
		 * Constructor
		 */
		OPINFOlshr() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result
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

	class OPINFOiushr : public InstructionInfo { // 0x7C -- 124
	public:
		/**
		 * Constructor
		 */
		OPINFOiushr() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result
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

	class OPINFOlushr : public InstructionInfo { // 0x7D -- 125
	public:
		/**
		 * Constructor
		 */
		OPINFOlushr() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result
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

	class OPINFOiand : public InstructionInfo { // 0x7E -- 126
	public:
		/**
		 * Constructor
		 */
		OPINFOiand() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value1, value2 →..., result
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

	class OPINFOland : public InstructionInfo { // 0x7F -- 127
	public:
		/**
		 * Constructor
		 */
		OPINFOland() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result
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

	class OPINFOior : public InstructionInfo { // 0x80 -- 128
	public:
		/**
		 * Constructor
		 */
		OPINFOior() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result
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

	class OPINFOlor : public InstructionInfo { // 0x81 --129
	public:
		/**
		 * Constructor
		 */
		OPINFOlor() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value1, value2 →..., result
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

	class OPINFOixor : public InstructionInfo { // 0x82 -- 130
	public:
		/**
		 * Constructor
		 */
		OPINFOixor() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result
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

	class OPINFOlxor : public InstructionInfo { // 0x83 -- 131
	public:
		/**
		 * Constructor
		 */
		OPINFOlxor() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result
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

	class OPINFOiinc : public InstructionInfo { // 0x84 -- 132
	public:
		/**
		 * Constructor
		 */
		OPINFOiinc() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack -> no changes, int index int const
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
	class OPINFOi2l : public InstructionInfo { // 0x85 -- 133
	public:
		/**
		 * Constructor
		 */
		OPINFOi2l() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value → ..., result
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

	class OPINFOi2f : public InstructionInfo { // 0x86 -- 134
	public:
		/**
		 * Constructor
		 */
		OPINFOi2f() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack  ..., value →..., result
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

	class OPINFOi2d : public InstructionInfo { // 0x87 -- 135
	public:
		/**
		 * Constructor
		 */
		OPINFOi2d() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value →..., result
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

	class OPINFOl2i : public InstructionInfo { // 0x88 -- 136
	public:
		/**
		 * Constructor
		 */
		OPINFOl2i() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value →..., result
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

	class OPINFOl2f : public InstructionInfo { // 0x89 -- 137
	public:
		/**
		 * Constructor
		 */
		OPINFOl2f() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value →..., result
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

	class OPINFOl2d : public InstructionInfo { // 0x8A -- 138
	public:
		/**
		 * Constructor
		 */
		OPINFOl2d() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value →..., result
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

	class OPINFOf2i : public InstructionInfo { // 0x8B -- 139
	public:
		/**
		 * Constructor
		 */
		OPINFOf2i() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack  ..., value → ..., result
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

	class OPINFOf2l : public InstructionInfo { // 0x8C -- 140
	public:
		/**
		 * Constructor
		 */
		OPINFOf2l() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value → ..., result
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

	class OPINFOf2d : public InstructionInfo { // 0x8D -- 141
	public:
		/**
		 * Constructor
		 */
		OPINFOf2d() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value →..., result
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

	class OPINFOd2i : public InstructionInfo { // 0x8E -- 142
	public:
		/**
		 * Constructor
		 */
		OPINFOd2i() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 *  Opstack ..., value → ..., result
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

	class OPINFOd2l : public InstructionInfo { // 0x8F -- 143
	public:
		/**
		 * Constructor
		 */
		OPINFOd2l() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value → ..., result
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

	class OPINFOd2f : public InstructionInfo { // 0x90 -- 144
	public:
		/**
		 * Constructor
		 */
		OPINFOd2f() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value → ..., result
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

	class OPINFOi2b : public InstructionInfo { // 0x91 -- 145
	public:
		/**
		 * Constructor
		 */
		OPINFOi2b() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value →..., result
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

	class OPINFOi2c : public InstructionInfo { // 0x92 -- 146
	public:
		/**
		 * Constructor
		 */
		OPINFOi2c() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value → ..., result
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

	class OPINFOi2s : public InstructionInfo { // 0x93 -- 147
	public:
		/**
		 * Constructor
		 */
		OPINFOi2s() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value →..., result
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
	class OPINFOlcmp : public InstructionInfo { // 0x94 -- 148
	public:
		/**
		 * Constructor
		 */
		OPINFOlcmp() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack  ..., value1, value2 → ..., result , if value1 > value2 push 1 , if value2 > value1 push -1 if value1 == value2 push 0
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

	class OPINFOfcmpl : public InstructionInfo { // 0x95 -- 149
	public:
		/**
		 * Constructor
		 */
		OPINFOfcmpl() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack  ..., value1, value2 → ..., result
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

	class OPINFOfcmpg : public InstructionInfo { // 0x96 -- 150
	public:
		/**
		 * Constructor
		 */
		OPINFOfcmpg() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result
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

	class OPINFOdcmpl : public InstructionInfo { // 0x97 -- 151
	public:
		/**
		 * Constructor
		 */
		OPINFOdcmpl() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result
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

	class OPINFOdcmpg : public InstructionInfo { // 0x98 -- 152
	public:
		/**
		 * Constructor
		 */
		OPINFOdcmpg() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack  ..., value1, value2 →..., result
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

	class OPINFOifeq : public InstructionInfo { // 0x99 -- 153
	public:
		/**
		 * Constructor
		 */
		OPINFOifeq() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value → ..., branchbyte1 + branchbyte2
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

	class OPINFOifne : public InstructionInfo { // 0x9A -- 154
	public:
		/**
		 * Constructor
		 */
		OPINFOifne() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value → ..., branchbyte1 + branchbyte2
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

	class OPINFOiflt : public InstructionInfo { // 0x9B -- 155
	public:
		/**
		 * Constructor
		 */
		OPINFOiflt() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value → ..., branchbyte1 + branchbyte2
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

	class OPINFOifge : public InstructionInfo { // 0x9C -- 156
	public:
		/**
		 * Constructor
		 */
		OPINFOifge() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value → ..., branchbyte1 + branchbyte2
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

	class OPINFOifgt : public InstructionInfo { // 0x9D -- 157
	public:
		/**
		 * Constructor
		 */
		OPINFOifgt() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value → ..., branchbyte1 + branchbyte2
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

	class OPINFOifle : public InstructionInfo { // 0x9E -- 158
	public:
		/**
		 * Constructor
		 */
		OPINFOifle() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value → ..., branchbyte1 + branchbyte2
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

	class OPINFOif_icmpeq : public InstructionInfo { // 0x9F -- 159
	public:
		/**
		 * Constructor
		 */
		OPINFOif_icmpeq() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value → ..., branchbyte1 + branchbyte2
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

	class OPINFOif_icmpne : public InstructionInfo { // 0xA0 -- 160
	public:
		/**
		 * Constructor
		 */
		OPINFOif_icmpne() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value1, value2 → ...,branchbyte1 + branchbyte2
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

	class OPINFOif_icmplt : public InstructionInfo { // 0xA1 - 161
	public:
		/**
		 * Constructor
		 */
		OPINFOif_icmplt() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value1, value2 →... , branchbyte1 + branchbyte2
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

	class OPINFOif_icmpge : public InstructionInfo { // 0xA2 -- 162
	public:
		/**
		 * Constructor
		 */
		OPINFOif_icmpge() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value1, value2 →... , branchbyte1 + branchbyte2
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

	class OPINFOif_icmpgt : public InstructionInfo { // 0xA3 -- 163
	public:
		/**
		 * Constructor
		 */
		OPINFOif_icmpgt() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value1, value2 →... , branchbyte1 + branchbyte2
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

	class OPINFOif_icmple : public InstructionInfo { // 0xA4 -- 164
	public:
		/**
		 * Constructor
		 */
		OPINFOif_icmple() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value1, value2 → ... , branchbyte1 + branchbyte2
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

	class OPINFOif_acmpeq : public InstructionInfo { // 0xA5 -- 165
	public:
		/**
		 * Constructor
		 */
		OPINFOif_acmpeq() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value1, value2 → ... , branchbyte1 branchbyte2
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

	class OPINFOif_acmpne : public InstructionInfo { // 0xA6 -- 166
	public:
		/**
		 * Constructor
		 */
		OPINFOif_acmpne() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value1, value2 → ... ,  branchbyte1 + branchbyte2
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
	class OPINFOgoto : public InstructionInfo { // 0xA7 -- 167
	public:
		/**
		 * Constructor
		 */
		OPINFOgoto() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack no change , branchbyte1 + branchbyte2
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

	class OPINFOjsr : public InstructionInfo { // 0xA8 -- 168
	public:
		/**
		 * Constructor
		 */
		OPINFOjsr() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ... → ..., address , branchbyte1 + branchbyte2
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

	class OPINFOret : public InstructionInfo { // 0xA9 -- 169
	public:
		/**
		 * Constructor
		 */
		OPINFOret() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack no change
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

	class OPINFOtableswitch : public InstructionInfo { // 0xAA -- 170
	public:
		/**
		 * Constructor
		 */
		OPINFOtableswitch() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack  ..., index → ... ,
		 * <0-3 byte pad>
		 * defaultbyte1
		 * defaultbyte2
		 * defaultbyte3
		 * defaultbyte4
		 * lowbyte1
		 *  lowbyte2
		 * lowbyte3
		 * lowbyte4
		 *  highbyte1
		 *  highbyte2
		 *  highbyte3
		 *  highbyte4
		 *   jump offsets...
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

	class OPINFOlookupswitch : public InstructionInfo { // 0xAB -- 171
	public:
		/**
		 * Constructor
		 */
		OPINFOlookupswitch() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., key → ...
		 * <0-3 byte pad>
		 * defaultbyte1
		 * defaultbyte2
		 * defaultbyte3
		 * defaultbyte4
		 * npairs1
		 * npairs2
		 * npairs3
		 * npairs4
		 *  match-offset pairs...
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
		std::map<i4, i4> pairs;
	};

	class OPINFOireturn : public InstructionInfo { // 0xAC -- 172
	public:
		/**
		 * Constructor
		 */
		OPINFOireturn() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value → [empty]
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

	class OPINFOlreturn : public InstructionInfo { // 0xAD -- 173
	public:
		/**
		 * Constructor
		 */
		OPINFOlreturn() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value → [empty]
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

	class OPINFOfreturn : public InstructionInfo { // 0xAE -- 174
	public:
		/**
		 * Constructor
		 */
		OPINFOfreturn() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value → [empty]
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

	class OPINFOdreturn : public InstructionInfo { // 0xAF -- 175
	public:
		/**
		 * Constructor
		 */
		OPINFOdreturn() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value → [empty]
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

	class OPINFOareturn : public InstructionInfo { // 0xB0 -- 176
	public:
		/**
		 * Constructor
		 */
		OPINFOareturn() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., objectref → [empty]
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

	class OPINFOreturn : public InstructionInfo { // 0xB1 -- 177
	public:
		/**
		 * Constructor
		 */
		OPINFOreturn() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ... → [empty]
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
	class OPINFOgetstatic : public InstructionInfo { // 0xB2 -- 178
	public:
		/**
		 * Constructor
		 */
		OPINFOgetstatic() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., → ..., value,indexbyte1 + indexbyte2
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

	class OPINFOputstatic : public InstructionInfo { // 0xB3 -- 179
	public:
		/**
		 * Constructor
		 */
		OPINFOputstatic() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value → ... ,indexbyte1 + indexbyte2
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

	class OPINFOgetfield : public InstructionInfo { // 0xB4 -- 180
	public:
		/**
		 * Constructor
		 */
		OPINFOgetfield() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 *Opstack ..., objectref → ..., value ,indexbyte1 + indexbyte2
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

	class OPINFOputfield : public InstructionInfo { // 0xB5 -- 181
	public:
		/**
		 * Constructor
		 */
		OPINFOputfield() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., objectref, value → ... , indexbyte1 + indexbyte2
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

	class OPINFOinvokevirtual : public InstructionInfo { // 0xB6 -- 182
	public:
		/**
		 * Constructor
		 */
		OPINFOinvokevirtual() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., objectref, [arg1, [arg2 ...]] → ... , indexbyte1 + indexbyte2
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

	class OPINFOinvokespecial : public InstructionInfo { // 0xB7 -- 183
	public:
		/**
		 * Constructor
		 */
		OPINFOinvokespecial() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., objectref, [arg1, [arg2 ...]] → ... , indexbyte1 + indexbyte2
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

	class OPINFOinvokestatic : public InstructionInfo { // 0xB8 -- 184
	public:
		/**
		 * Constructor
		 */
		OPINFOinvokestatic() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., [arg1, [arg2 ...]] → ...
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

	class OPINFOinvokeinterface : public InstructionInfo { // 0xB9 -- 185
	public:
		/**
		 * Constructor
		 */
		OPINFOinvokeinterface() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., objectref, [arg1, [arg2 ...]] → ... , indexbyte1 + indexbyte2 , count , 0
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

	class OPINFOinvokedynamic : public InstructionInfo { // 0xBA - - 186
	public:
		/**
		 * Constructor
		 */
		OPINFOinvokedynamic() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., [arg1, [arg2 ...]] → ...
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

	class OPINFOnew : public InstructionInfo { // 0xBB -- 187
	public:
		/**
		 * Constructor
		 */
		OPINFOnew() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ... → ..., objectref indexbyte1 + indexbyte2
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

	class OPINFOnewarray : public InstructionInfo { // 0xBC -- 188
	public:
		/**
		 * Constructor
		 */
		OPINFOnewarray() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., count → ..., arrayref , atype
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

	class OPINFOanewarray : public InstructionInfo { // 0xBD -- 189
	public:
		/**
		 * Constructor
		 */
		OPINFOanewarray() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opcode ..., count → ..., arrayref , indexbyte1 + indexbyte2
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

	class OPINFOarraylength : public InstructionInfo { // 0xBE -- 190
	public:
		/**
		 * Constructor
		 */
		OPINFOarraylength() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., arrayref →..., length
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

	class OPINFOathrow : public InstructionInfo { // 0xBF -- 191
	public:
		/**
		 * Constructor
		 */
		OPINFOathrow() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., objectref → objectref
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

	class OPINFOcheckcast : public InstructionInfo { // 0xC0 -- 192
	public:
		/**
		 * Constructor
		 */
		OPINFOcheckcast() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., objectref → ..., objectref ,  indexbyte1 + indexbyte2
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

	class OPINFOinstanceof : public InstructionInfo { // 0xC1 -- 193
	public:
		/**
		 * Constructor
		 */
		OPINFOinstanceof() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., objectref → ..., result, indexbyte1 + indexbyte2
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

	class OPINFOmonitorenter : public InstructionInfo { // 0xC2 -- 194
	public:
		/**
		 * Constructor
		 */
		OPINFOmonitorenter() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., objectref → ...
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

	class OPINFOmonitorexit : public InstructionInfo { // 0xC3 -- 195
	public:
		/**
		 * Constructor
		 */
		OPINFOmonitorexit() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., objectref → ...
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
	class OPINFOwide : public InstructionInfo { // 0xC4 -- 196
	public:
		/**
		 * Constructor
		 */
		OPINFOwide() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack Same as modified instruction
		 * iinc
		 * indexbyte1
		 * indexbyte2
		 * constbyte1
		 * constbyte2
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

	class OPINFOmultianewarray : public InstructionInfo { // 0xC5 -- 197
	public:
		/**
		 * Constructor
		 */
		OPINFOmultianewarray() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., count1, [count2, ...] → ..., arrayref
		 * indexbyte1
		 * indexbyte2
		 * dimensions
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

	class OPINFOifnull : public InstructionInfo { // 0xC6 -- 198
	public:
		/**
		 * Constructor
		 */
		OPINFOifnull() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ..., value → ... , branchbyte1 + branchbyte2
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

	class OPINFOifnonnull : public InstructionInfo { // 0xC7 -- 199
	public:
		/**
		 * Constructor
		 */
		OPINFOifnonnull() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack  ..., value → ...,branchbyte1 + branchbyte2
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

	class OPINFOgoto_w : public InstructionInfo { // 0xC8 -- 200
	public:
		/**
		 * Constructor
		 */
		OPINFOgoto_w() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack no changes
		 * branchbyte1 + branchbyte2 + branchbyte3 + branchbyte4
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

	class OPINFOjsr_w : public InstructionInfo { // 0xC9 -- 201
	public:
		/**
		 * Constructor
		 */
		OPINFOjsr_w() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * Opstack ... → ..., address , branchbyte1 + branchbyte2 + branchbyte3 + branchbyte4
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
	class OPINFObreakpoint : public InstructionInfo { // 0xca -- 202
	public:
		/**
		 * Constructor
		 */
		OPINFObreakpoint() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * No params for this intrsuction
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
	class OPINFOimpdep1 : public InstructionInfo { // 0xFE -- 254
	public:
		/**
		 * Constructor
		 */
		OPINFOimpdep1() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * No params for this instruction
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
	class OPINFOimpdep2 : public InstructionInfo { // 0xFF -- 255
	public:
		/**
		 * Constructor
		 */
		OPINFOimpdep2() = default;

		/**
		 * Print in the stream the name
		 */
		void printToStream(std::ostream &, std::string &) override;

		/**
		 * No params for this instruction
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
