#pragma once

#include "base.hpp"
#include "constant_pool.hpp"
#include "util/converter.hpp"

namespace jvm {

	/**
	 * Stores info about a instruction. Each instruction will inherit from InstructionInfo and implement its spefic features and implementation details.
	 */
	class InstructionInfo {
	protected:

		/**
		 * Default constructor
		 */
		InstructionInfo() = default;

	public:

		uint32_t jmp;	///> Number of bytes of the arguments read

		template <class T>
		static std::shared_ptr<InstructionInfo> instantiate() {
			return std::make_shared<T>();
		}

		/**
		 * Default destructor
		 */
		virtual ~InstructionInfo() = default;

		/**
		 * Print in the stream the name
		 * @param std::ostream& Console output, std::string& String to be printed
		 */
		virtual void printToStream(std::ostream &, std::string &, ConstantPool &) = 0;

		/**
		 * Fill the params of this class
		 * @param uint32_t Index of the data vector, std::vector<u1>& Reference to the data vector
		 */
		virtual uint32_t fillParams(uint32_t, std::vector<u1> &) = 0;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		virtual std::string getName() = 0;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		virtual u1 getOpCode() = 0;

	};

	//Constants opcodes 0x00,00 -- 0x14,20
	class OPINFOnop : public InstructionInfo { // 0x00 -- 00
	public:
		/**
		 * Default constructor
		 */
		OPINFOnop();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * No params for this instruction
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOaconst_null : public InstructionInfo { // 0x01 -- 01
	public:

		/**
		 * Default constructor
		 */
		OPINFOaconst_null();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * operand stack ... → ..., null, opcode byte1, byte2 The immediate unsigned byte1 and byte2 values are assembled into an intermediate short where the value of the short is (byte1 << 8) | byte2
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOiconst_m1 : public InstructionInfo { // 0x02 -- 02
	public:

		/**
		 * Default constructor
		 */
		OPINFOiconst_m1();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Operand stack ... → ..., <i>
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOiconst_0 : public InstructionInfo { // 0x03 -- 03
	public:

		/**
		 * Default constructor
		 */
		OPINFOiconst_0();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Operand Stack ... → ..., <i>
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOiconst_1 : public InstructionInfo { // 0x04 -- 04
	public:

		/**
		 * Default constructor
		 */
		OPINFOiconst_1();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Operand Stack... → ..., <i>
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOiconst_2 : public InstructionInfo { // 0x05 -- 05
	public:

		/**
		 * Default constructor
		 */
		OPINFOiconst_2();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 *Operand Stack ... → ..., <i>
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOiconst_3 : public InstructionInfo { // 0x06 -- 06
	public:

		/**
		 * Default constructor
		 */
		OPINFOiconst_3();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 *Operand Stack  ... → ..., <i>
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOiconst_4 : public InstructionInfo { // 0x07 -- 07
	public:

		/**
		 * Default constructor
		 */
		OPINFOiconst_4();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 *Operand Stack ... → ..., <i>
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOiconst_5 : public InstructionInfo { // 0x08 -- 08
	public:

		/**
		 * Default constructor
		 */
		OPINFOiconst_5();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 *Operand Stack  ... → ..., <i>
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOlconst_0 : public InstructionInfo { // 0x09 -- 09
	public:

		/**
		 * Default constructor
		 */
		OPINFOlconst_0();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Operand Stack  ... → ..., <i>
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOlconst_1 : public InstructionInfo { // 0x0A -- 10
	public:

		/**
		 * Default constructor
		 */
		OPINFOlconst_1();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 *OpStack ... → ..., <l> ,
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOfconst_0 : public InstructionInfo { // 0x0B -- 11
	public:

		/**
		 * Default constructor
		 */
		OPINFOfconst_0();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ... → ..., <f>
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOfconst_1 : public InstructionInfo { // 0x0C -- 12
	public:

		/**
		 * Default constructor
		 */
		OPINFOfconst_1();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ... → ..., <f>
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOfconst_2 : public InstructionInfo { // 0x0D -- 13
	public:

		/**
		 * Default constructor
		 */
		OPINFOfconst_2();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ... → ..., <f>
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOdconst_0 : public InstructionInfo { // 0x0E -- 14
	public:

		/**
		 * Default constructor
		 */
		OPINFOdconst_0();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ... → ..., <f>
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOdconst_1 : public InstructionInfo { // 0x0F -- 15
	public:

		/**
		 * Default constructor
		 */
		OPINFOdconst_1();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ... → ..., <f>
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFObipush : public InstructionInfo { // 0x10 -- 16
	public:

		/**
		 * Default constructor
		 */
		OPINFObipush();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Operand Stack  ... → ..., <i> , byte
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

		i1 byte; ///< Byte to be pushed as an integer to the stack
	};

	class OPINFOsipush : public InstructionInfo { // 0x11 -- 17
	public:

		/**
		 * Default constructor
		 */
		OPINFOsipush();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Operand Stack ... → ..., value , The immediate unsigned byte1 and byte2 values are assembled into an intermediate short where the value of the short is (byte1 << 8) | byte2
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

		i2 value; ///< Short value to be pushed onto the stack
	};

	class OPINFOldc : public InstructionInfo { // 0x12 -- 18
	public:

		/**
		 * Default constructor
		 */
		OPINFOldc();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Operand Stack ... → ..., value , The index is an unsigned byte that must be a valid index into the run-time constant pool
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

		u1 index; ///< Index in the constant pool
	};

	class OPINFOldc_w : public InstructionInfo { // 0x13 -- 19
	public:

		/**
		 * Default constructor
		 */
		OPINFOldc_w();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ... → ..., value , indexbyte1 + indexbyte2
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

		u2 index; ///< Index in the constant pool
	};

	class OPINFOldc2_w : public InstructionInfo { // 0x14 -- 20
	public:

		/**
		 * Default constructor
		 */
		OPINFOldc2_w();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Operand Stack ... → ..., value , indexbyte1 indexbyte2 , the value of the index is calculated as (indexbyte1 << 8) | indexbyte2, run-time constant pool
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

		u2 index; ///< Index in the constant pool
	};

	//Loads opcodes 0x15,21 -- 0x35,53
	class OPINFOiload : public InstructionInfo { // 0x15 -- 21
	public:

		/**
		 * Default constructor
		 */
		OPINFOiload();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ... → ..., value , The index is an unsigned byte into local variable array,
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

		u1 index; ///< Index of the local variable
	};

	class OPINFOlload : public InstructionInfo { // 0x16 -- 22
	public:

		/**
		 * Default constructor
		 */
		OPINFOlload();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ... → ..., value, The index is an unsigned byte , local variable array
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

		u1 index; ///< Index to the local variable
	};

	class OPINFOfload : public InstructionInfo { // 0x17 -- 23
	public:

		/**
		 * Default constructor
		 */
		OPINFOfload();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Op_stack ... → ..., value, The index is an unsigned byte that must be an index into the local variable array
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

		u1 index; ///< Index of the local float variable
	};

	class OPINFOdload : public InstructionInfo { // 0x18 -- 24
	public:

		/**
		 * Default constructor
		 */
		OPINFOdload();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ... →..., value, The index is an unsigned byte. Both index and index+1 must be indices into the local variable array
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

		u1 index; ///< Index to the local double variable
	};

	class OPINFOaload : public InstructionInfo { // 0x19 -- 25
	public:

		/**
		 * Default constructor
		 */
		OPINFOaload();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack  ... → ..., objectref, The index is an unsigned byte that must be an index into the local variable array of the current frame
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

		u1 index; ///< index of the reference to the local variable to be loaded
	};

	class OPINFOiload_0 : public InstructionInfo { // 0x1A -- 26
	public:

		/**
		 * Default constructor
		 */
		OPINFOiload_0();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ... → ..., value , The <n> must be an index into the local variable array
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOiload_1 : public InstructionInfo { // 0x1B -- 27
	public:

		/**
		 * Default constructor
		 */
		OPINFOiload_1();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ... → ..., value , The <n> must be an index into the local variable array
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOiload_2 : public InstructionInfo { // 0x1C -- 28
	public:

		/**
		 * Default constructor
		 */
		OPINFOiload_2();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ... → ..., value , The <n> must be an index into the local variable array
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOiload_3 : public InstructionInfo { // 0x1D -- 29
	public:

		/**
		 * Default constructor
		 */
		OPINFOiload_3();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ... → ..., value , The <n> must be an index into the local variable array
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOlload_0 : public InstructionInfo { // 0x1E -- 30
	public:

		/**
		 * Default constructor
		 */
		OPINFOlload_0();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ... → ..., value , The <n> must be an index into the local variable array
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOlload_1 : public InstructionInfo { // 0x1F -- 31
	public:

		/**
		 * Default constructor
		 */
		OPINFOlload_1();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ... → ..., value , The <n> must be an index into the local variable array
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOlload_2 : public InstructionInfo { // 0x20 -- 32
	public:

		/**
		 * Default constructor
		 */
		OPINFOlload_2();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ... → ..., value , The <n> must be an index into the local variable array
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOlload_3 : public InstructionInfo { // 0x21 -- 33
	public:

		/**
		 * Default constructor
		 */
		OPINFOlload_3();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ... → ..., value , The <n> must be an index into the local variable array
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOfload_0 : public InstructionInfo { // 0x22 -- 34
	public:

		/**
		 * Default constructor
		 */
		OPINFOfload_0();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ... → ..., value , The <n> must be an index into the local variable array of the current frame
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOfload_1 : public InstructionInfo { // 0x23 -- 35
	public:

		/**
		 * Default constructor
		 */
		OPINFOfload_1();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 *  OpStack ... → ..., value , The <n> must be an index into the local variable array of the current frame
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOfload_2 : public InstructionInfo { // 0x24 -- 36
	public:

		/**
		 * Default constructor
		 */
		OPINFOfload_2();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 *  OpStack ... → ..., value , The <n> must be an index into the local variable array of the current frame
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOfload_3 : public InstructionInfo { // 0x25 -- 37
	public:

		/**
		 * Default constructor
		 */
		OPINFOfload_3();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 *  OpStack ... → ..., value , The <n> must be an index into the local variable array of the current frame
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOdload_0 : public InstructionInfo { // 0x26 -- 38
	public:

		/**
		 * Default constructor
		 */
		OPINFOdload_0();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ... → ..., value, Both <n> and <n>+1 must be indices into the local variable array of the current frame
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOdload_1 : public InstructionInfo { // 0x27 -- 39
	public:

		/**
		 * Default constructor
		 */
		OPINFOdload_1();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ... → ..., value, Both <n> and <n>+1 must be indices into the local variable array of the current frame
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOdload_2 : public InstructionInfo { // 0x28 -- 40
	public:

		/**
		 * Default constructor
		 */
		OPINFOdload_2();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ... → ..., value, Both <n> and <n>+1 must be indices into the local variable array of the current frame
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOdload_3 : public InstructionInfo { // 0x29 -- 41
	public:

		/**
		 * Default constructor
		 */
		OPINFOdload_3();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ... → ..., value, Both <n> and <n>+1 must be indices into the local variable array of the current frame
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOaload_0 : public InstructionInfo { // 0x2A -- 42
	public:

		/**
		 * Default constructor
		 */
		OPINFOaload_0();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ... → ..., objectref,The <n> must be an index into the local variable array of the current frame
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOaload_1 : public InstructionInfo { // 0x2B -- 43
	public:

		/**
		 * Default constructor
		 */
		OPINFOaload_1();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ... → ..., objectref,The <n> must be an index into the local variable array of the current frame
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOaload_2 : public InstructionInfo { // 0x2C -- 44
	public:

		/**
		 * Default constructor
		 */
		OPINFOaload_2();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ... → ..., objectref,The <n> must be an index into the local variable array of the current frame
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOaload_3 : public InstructionInfo { // 0x2D -- 45
	public:

		/**
		 * Default constructor
		 */
		OPINFOaload_3();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ... → ..., objectref,The <n> must be an index into the local variable array of the current frame
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOiaload : public InstructionInfo { // 0x2E -- 46
	public:

		/**
		 * Default constructor
		 */
		OPINFOiaload();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack..., arrayref, index → ..., value,The <n> must be an index into the local variable array of the current frame
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOlaload : public InstructionInfo { // 0x2F -- 47
	public:

		/**
		 * Default constructor
		 */
		OPINFOlaload();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ..., arrayref, index → ..., value ,The <n> must be an index into the local variable array of the current frame
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOfaload : public InstructionInfo { // 0x30 -- 48
	public:

		/**
		 * Default constructor
		 */
		OPINFOfaload();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., arrayref, index → ..., value , The arrayref must be of type reference and must refer to an array whose components are of type float
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOdaload : public InstructionInfo { // 0x31 -- 49
	public:

		/**
		 * Default constructor
		 */
		OPINFOdaload();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ..., arrayref, index → ..., value , The arrayref must be of type reference and must refer to an array whose components are of type double.
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOaaload : public InstructionInfo { // 0x32 -- 50
	public:

		/**
		 * Default constructor
		 */
		OPINFOaaload();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ..., arrayref, index → ..., value , The arrayref must be of type reference and must refer to an array whose components are of type reference
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFObaload : public InstructionInfo { // 0x33 -- 51
	public:

		/**
		 * Default constructor
		 */
		OPINFObaload();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ..., arrayref, index → ..., value , The arrayref must be of type reference and must refer to an array whose components are of type byte or of type boolean
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOcaload : public InstructionInfo { // 0x34 -- 52
	public:

		/**
		 * Default constructor
		 */
		OPINFOcaload();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ..., arrayref, index → ..., value , The arrayref must be of type reference and must refer to an array whose components are of type char. The index must be of type int
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOsaload : public InstructionInfo { // 0x35 -- 53
	public:

		/**
		 * Default constructor
		 */
		OPINFOsaload();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ..., arrayref, index → ..., value , The arrayref must be of type reference and must refer to an array whose components are of type short.
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	//Stores 0x36,54 -> 0x56,86
	class OPINFOistore : public InstructionInfo { // 0x36 -- 54
	public:

		/**
		 * Default constructor
		 */
		OPINFOistore();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ..., value → ... , The index is an unsigned byte that must be an index into the local variable array of the current frame
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

		u1 index; ///< Index to the local variable
	};

	class OPINFOlstore : public InstructionInfo { // 0x37 -- 55
	public:

		/**
		 * Default constructor
		 */
		OPINFOlstore();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ..., value → ... , The index is an unsigned byte. Both index and index+1 must be indices into the local variable array of the current frame
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

		u1 index; ///< Index to the local variable
	};

	class OPINFOfstore : public InstructionInfo { // 0x38 -- 56
	public:

		/**
		 * Default constructor
		 */
		OPINFOfstore();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ..., value → ... , The index is an unsigned byte that must be an index into the local variable array of the current frame
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

		u1 index; ///< Index of the local float variable
	};

	class OPINFOdstore : public InstructionInfo { // 0x39 -- 57
	public:

		/**
		 * Default constructor
		 */
		OPINFOdstore();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ..., value → ... , The index is an unsigned byte. Both index and index+1 must be indices into the local variable array of the current frame

		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

		u1 index; ///< Index to the local double variable
	};

	class OPINFOastore : public InstructionInfo { // 0x3A -- 58
	public:

		/**
		 * Default constructor
		 */
		OPINFOastore();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ..., objectref → ... , The index is an unsigned byte that must be an index into the local variable array of the current frame
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

		u1 index; ///< Index of the local variable that will store the reference
	};

	class OPINFOistore_0 : public InstructionInfo { // 0x3B -- 59
	public:

		/**
		 * Default constructor
		 */
		OPINFOistore_0();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ..., value → ... , The <n> must be an index into the local variable array of the current frame
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOistore_1 : public InstructionInfo { // 0x3C -- 60
	public:

		/**
		 * Default constructor
		 */
		OPINFOistore_1();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ..., value → ... , The <n> must be an index into the local variable array of the current frame
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOistore_2 : public InstructionInfo { // 0x3D -- 61
	public:

		/**
		 * Default constructor
		 */
		OPINFOistore_2();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value → ...
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOistore_3 : public InstructionInfo { // 0x3E -- 62
	public:

		/**
		 * Default constructor
		 */
		OPINFOistore_3();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value → ... , The <n> must be an index into the local variable array of the current frame.
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOlstore_0 : public InstructionInfo { // 0x3F -- 63
	public:

		/**
		 * Default constructor
		 */
		OPINFOlstore_0();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ..., value → ... , Both <n> and <n>+1 must be indices into the local variable array of the current frame
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOlstore_1 : public InstructionInfo { // 0x40 -- 64
	public:

		/**
		 * Default constructor
		 */
		OPINFOlstore_1();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ..., value → ... , Both <n> and <n>+1 must be indices into the local variable array of the current frame
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOlstore_2 : public InstructionInfo { // 0x41 -- 65
	public:

		/**
		 * Default constructor
		 */
		OPINFOlstore_2();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ..., value → ... , Both <n> and <n>+1 must be indices into the local variable array of the current frame
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOlstore_3 : public InstructionInfo { // 0x42 -- 66
	public:

		/**
		 * Default constructor
		 */
		OPINFOlstore_3();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ..., value → ... , Both <n> and <n>+1 must be indices into the local variable array of the current frame
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOfstore_0 : public InstructionInfo { // 0x43 -- 67
	public:

		/**
		 * Default constructor
		 */
		OPINFOfstore_0();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ..., value → ... , The <n> must be an index into the local variable array of the current frame
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOfstore_1 : public InstructionInfo { // 0x44 -- 68
	public:

		/**
		 * Default constructor
		 */
		OPINFOfstore_1();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ..., value → ... , The <n> must be an index into the local variable array of the current frame
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOfstore_2 : public InstructionInfo { // 0x45 -- 69
	public:

		/**
		 * Default constructor
		 */
		OPINFOfstore_2();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ..., value → ... , The <n> must be an index into the local variable array of the current frame
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOfstore_3 : public InstructionInfo { // 0x46 -- 70
	public:

		/**
		 * Default constructor
		 */
		OPINFOfstore_3();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ..., value → ... , The <n> must be an index into the local variable array of the current frame
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOdstore_0 : public InstructionInfo { // 0x47 -- 71
	public:

		/**
		 * Default constructor
		 */
		OPINFOdstore_0();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ..., value → ... , Both <n> and <n>+1 must be indices into the local variable array of the current frame
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOdstore_1 : public InstructionInfo { // 0x48 -- 72
	public:

		/**
		 * Default constructor
		 */
		OPINFOdstore_1();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ..., value → ... , Both <n> and <n>+1 must be indices into the local variable array of the current frame
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOdstore_2 : public InstructionInfo { // 0x49 -- 73
	public:

		/**
		 * Default constructor
		 */
		OPINFOdstore_2();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ..., value → ... , Both <n> and <n>+1 must be indices into the local variable array of the current frame
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOdstore_3 : public InstructionInfo { // 0x4A -- 74
	public:

		/**
		 * Default constructor
		 */
		OPINFOdstore_3();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ..., value → ... , Both <n> and <n>+1 must be indices into the local variable array of the current frame
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOastore_0 : public InstructionInfo { // 0x4B -- 75
	public:

		/**
		 * Default constructor
		 */
		OPINFOastore_0();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * ..., objectref → ... , The <n> must be an index into the local variable array of the current frame
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOastore_1 : public InstructionInfo { // 0x4C -- 76
	public:

		/**
		 * Default constructor
		 */
		OPINFOastore_1();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * ..., objectref → ... , The <n> must be an index into the local variable array of the current frame
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOastore_2 : public InstructionInfo { // 0x4D -- 77
	public:

		/**
		 * Default constructor
		 */
		OPINFOastore_2();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ..., objectref → ... , The <n> must be an index into the local variable array of the current frame
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOastore_3 : public InstructionInfo { // 0x4E -- 78
	public:

		/**
		 * Default constructor
		 */
		OPINFOastore_3();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ..., objectref → ... , The <n> must be an index into the local variable array of the current frame
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOiastore : public InstructionInfo { // 0x4F -- 79
	public:

		/**
		 * Default constructor
		 */
		OPINFOiastore();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ..., arrayref, index, value →... , The arrayref must be of type reference and must refer to an array whose components are of type int. Both index and value must be of type int
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOlastore : public InstructionInfo { // 0x50 -- 80
	public:

		/**
		 * Default constructor
		 */
		OPINFOlastore();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ..., arrayref, index, value → ...
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOfastore : public InstructionInfo { // 0x51 -- 81
	public:

		/**
		 * Default constructor
		 */
		OPINFOfastore();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ..., arrayref, index, value → ... , The arrayref must be of type reference and must refer to an array whose components are of type float. The index must be of type int
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOdastore : public InstructionInfo { // 0x52 -- 82
	public:

		/**
		 * Default constructor
		 */
		OPINFOdastore();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ..., arrayref, index, value → ... , The arrayref must be of type reference and must refer to an array whose components are of type double
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOaastore : public InstructionInfo { // 0x53 -- 83
	public:

		/**
		 * Default constructor
		 */
		OPINFOaastore();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ..., arrayref, index, value → ... , The arrayref must be of type reference and must refer to an array whose components are of type reference
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFObastore : public InstructionInfo { // 0x54 -- 84
	public:

		/**
		 * Default constructor
		 */
		OPINFObastore();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ..., arrayref, index, value → ... , The arrayref must be of type reference and must refer to an array whose components are of type byte or of type boolean. The index and the value must both be of type int.
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOcastore : public InstructionInfo { // 0x55 -- 85
	public:

		/**
		 * Default constructor
		 */
		OPINFOcastore();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * * OpStack ..., arrayref, index, value → ...
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOsastore : public InstructionInfo { // 0x56 -- 86
	public:

		/**
		 * Default constructor
		 */
		OPINFOsastore();

		/**
		 *
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ..., arrayref, index, value → ... , The arrayref must be of type reference and must refer to an array whose components are of type short. Both index and value must be of type int.
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	// Stack 0x57,87 -> 0x5F,95
	class OPINFOpop : public InstructionInfo { // 0x57 -- 87
	public:

		/**
		 * Default constructor
		 */
		OPINFOpop();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ..., value → ... , Pop the top value from the operand stack.
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOpop2 : public InstructionInfo { // 0x58 -- 88
	public:

		/**
		 * Default constructor
		 */
		OPINFOpop2();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack Form 1: ..., value2, value1 → ... ,  where each of value1 and value2 is a value of a category 1 computional type
		 * OpStack Form 2: ..., value → ... , where value is a value of a category 2 computational type
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOdup : public InstructionInfo { // 0x59 -- 89
	public:

		/**
		 * Default constructor
		 */
		OPINFOdup();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ..., value → ..., value, value ,
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOdup_x1 : public InstructionInfo { // 0x5A -- 90
	public:

		/**
		 * Default constructor
		 */
		OPINFOdup_x1();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack ..., value2, value1 → ..., value1, value2, value1 , Duplicate the top value on the operand stack and insert the duplicated value two values down in the operand stack.
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOdup_x2 : public InstructionInfo { // 0x5B -- 91
	public:

		/**
		 * Default constructor
		 */
		OPINFOdup_x2();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack Form 1: ..., value3, value2, value1 → ..., value1, value3, value2, value1 , where value1, value2, and value3 are all values of a category 1 computational type
		 * OpStack Form 2: ..., value2, value1 → ..., value1, value2, value1 , where value1 is a value of a category 1 computational type and value2 is a value of a category 2 computational type
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOdup2 : public InstructionInfo { // 0x5C -- 92
	public:

		/**
		 * Default constructor
		 */
		OPINFOdup2();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack Form 1: ..., value2, value1 → ..., value2, value1, value2, value1 ,where both value1 and value2 are values of a category 1 computational type
		 * OpStack Form 2: ..., value → ..., value, value where value is a value of a category 2 computational type
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOdup2_x1 : public InstructionInfo { // 0x5D -- 93
	public:

		/**
		 * Default constructor
		 */
		OPINFOdup2_x1();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * OpStack Form 1: ..., value3, value2, value1 → ..., value2, value1, value3, value2, value1 , where value1, value2, and value3 are all values of a category 1 computational type
		 * OpStack Form 2: ..., value2, value1 → ..., value1, value2, value1 , where value1 is a value of a category 2 computational type and value2 is a value of a category 1 computational type
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOdup2_x2 : public InstructionInfo { // 0x5E -- 94
	public:

		/**
		 * Default constructor
		 */
		OPINFOdup2_x2();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack Form 1: ..., value4, value3, value2, value1 → ..., value2, value1, value4, value3, value2, value1 , where value1, value2, value3, and value4 are all values of a category 1 computational type,
		 * Opstack Form 2: ..., value3, value2, value1 → ..., value1, value3, value2, value1
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOswap : public InstructionInfo { // 0x5F -- 95
	public:

		/**
		 * Default constructor
		 */
		OPINFOswap();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value2, value1 → ..., value1, value2
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	// Math 0x60,96 -> 0x84,132
	class OPINFOiadd : public InstructionInfo { // 0x60 -- 96
	public:

		/**
		 * Default constructor
		 */
		OPINFOiadd();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOladd : public InstructionInfo { // 0x61 -- 97
	public:

		/**
		 * Default constructor
		 */
		OPINFOladd();

		/**
		 *
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOfadd : public InstructionInfo { // 0x62 -- 98
	public:

		/**
		 * Default constructor
		 */
		OPINFOfadd();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack  ..., value1, value2 → ..., result
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOdadd : public InstructionInfo { // 0x63 -- 99
	public:

		/**
		 * Default constructor
		 */
		OPINFOdadd();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOisub : public InstructionInfo { // 0x64 -- 100
	public:

		/**
		 * Default constructor
		 */
		OPINFOisub();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOlsub : public InstructionInfo { // 0x65 -- 101
	public:

		/**
		 * Default constructor
		 */
		OPINFOlsub();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOfsub : public InstructionInfo { // 0x66 -- 102
	public:

		/**
		 * Default constructor
		 */
		OPINFOfsub();

		/**
		 * Opstack  ..., value1, value2 → ..., result
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOdsub : public InstructionInfo { // 0x67 -- 103
	public:

		/**
		 * Default constructor
		 */
		OPINFOdsub();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack  ..., value1, value2 → ..., result
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOimul : public InstructionInfo { // 0x68 -- 104
	public:

		/**
		 * Default constructor
		 */
		OPINFOimul();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOlmul : public InstructionInfo { // 0x69 -- 105
	public:

		/**
		 * Default constructor
		 */
		OPINFOlmul();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOfmul : public InstructionInfo { // 0x6A -- 106
	public:

		/**
		 * Default constructor
		 */
		OPINFOfmul();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOdmul : public InstructionInfo { // 0x6B -- 107
	public:

		/**
		 * Default constructor
		 */
		OPINFOdmul();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result pop2 for each value
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOidiv : public InstructionInfo { // 0x6C -- 108
	public:

		/**
		 * Default constructor
		 */
		OPINFOidiv();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOldiv : public InstructionInfo { // 0x6D -- 109
	public:

		/**
		 * Default constructor
		 */
		OPINFOldiv();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOfdiv : public InstructionInfo { // 0x6E -- 110
	public:

		/**
		 * Default constructor
		 */
		OPINFOfdiv();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOddiv : public InstructionInfo { // 0x6F -- 111
	public:

		/**
		 * Default constructor
		 */
		OPINFOddiv();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOirem : public InstructionInfo { // 0x70 -- 112
	public:

		/**
		 * Default constructor
		 */
		OPINFOirem();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack  ..., value1, value2 → ..., result
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOlrem : public InstructionInfo { // 0x71 -- 113
	public:

		/**
		 * Default constructor
		 */
		OPINFOlrem();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack  ..., value1, value2 → ..., result
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOfrem : public InstructionInfo { // 0x72 -- 114
	public:

		/**
		 * Default constructor
		 */
		OPINFOfrem();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOdrem : public InstructionInfo { // 0x73 -- 115
	public:

		/**
		 * Default constructor
		 */
		OPINFOdrem();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOineg : public InstructionInfo { // 0x74 -- 116
	public:

		/**
		 * Default constructor
		 */
		OPINFOineg();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack  ..., value →..., result
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOlneg : public InstructionInfo { // 0x75 -- 117
	public:

		/**
		 * Default constructor
		 */
		OPINFOlneg();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value → ..., result
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOfneg : public InstructionInfo { // 0x76 -- 118
	public:

		/**
		 * Default constructor
		 */
		OPINFOfneg();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack  ..., value → ..., result
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOdneg : public InstructionInfo { // 0x77 -- 119
	public:

		/**
		 * Default constructor
		 */
		OPINFOdneg();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack  ..., value → ..., result
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOishl : public InstructionInfo { // 0x78 -- 120
	public:

		/**
		 * Default constructor
		 */
		OPINFOishl();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOlshl : public InstructionInfo { // 0x79 -- 121
	public:

		/**
		 * Default constructor
		 */
		OPINFOlshl();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOishr : public InstructionInfo { // 0x7A -- 122
	public:

		/**
		 * Default constructor
		 */
		OPINFOishr();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOlshr : public InstructionInfo { // 0x7B -- 123
	public:

		/**
		 * Default constructor
		 */
		OPINFOlshr();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOiushr : public InstructionInfo { // 0x7C -- 124
	public:

		/**
		 * Default constructor
		 */
		OPINFOiushr();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOlushr : public InstructionInfo { // 0x7D -- 125
	public:

		/**
		 * Default constructor
		 */
		OPINFOlushr();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOiand : public InstructionInfo { // 0x7E -- 126
	public:

		/**
		 * Default constructor
		 */
		OPINFOiand();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value1, value2 →..., result
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOland : public InstructionInfo { // 0x7F -- 127
	public:

		/**
		 * Default constructor
		 */
		OPINFOland();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOior : public InstructionInfo { // 0x80 -- 128
	public:

		/**
		 * Default constructor
		 */
		OPINFOior();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOlor : public InstructionInfo { // 0x81 --129
	public:

		/**
		 * Default constructor
		 */
		OPINFOlor();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value1, value2 →..., result
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOixor : public InstructionInfo { // 0x82 -- 130
	public:

		/**
		 * Default constructor
		 */
		OPINFOixor();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOlxor : public InstructionInfo { // 0x83 -- 131
	public:

		/**
		 * Default constructor
		 */
		OPINFOlxor();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOiinc : public InstructionInfo { // 0x84 -- 132
	public:

		/**
		 * Default constructor
		 */
		OPINFOiinc();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack -> no changes, int index int 		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

		u1 index;		///< Index of the local variable
		i1 constant;	///< Value to be incremented to the local variable
	};

	//Conversations 0x85,133 -> 0x93,147
	class OPINFOi2l : public InstructionInfo { // 0x85 -- 133
	public:

		/**
		 * Default constructor
		 */
		OPINFOi2l();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value → ..., result
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOi2f : public InstructionInfo { // 0x86 -- 134
	public:

		/**
		 * Default constructor
		 */
		OPINFOi2f();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack  ..., value →..., result
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOi2d : public InstructionInfo { // 0x87 -- 135
	public:

		/**
		 * Default constructor
		 */
		OPINFOi2d();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value →..., result
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOl2i : public InstructionInfo { // 0x88 -- 136
	public:

		/**
		 * Default constructor
		 */
		OPINFOl2i();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value →..., result
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOl2f : public InstructionInfo { // 0x89 -- 137
	public:

		/**
		 * Default constructor
		 */
		OPINFOl2f();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value →..., result
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOl2d : public InstructionInfo { // 0x8A -- 138
	public:

		/**
		 * Default constructor
		 */
		OPINFOl2d();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value →..., result
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOf2i : public InstructionInfo { // 0x8B -- 139
	public:

		/**
		 * Default constructor
		 */
		OPINFOf2i();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack  ..., value → ..., result
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOf2l : public InstructionInfo { // 0x8C -- 140
	public:

		/**
		 * Default constructor
		 */
		OPINFOf2l();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value → ..., result
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOf2d : public InstructionInfo { // 0x8D -- 141
	public:

		/**
		 * Default constructor
		 */
		OPINFOf2d();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value →..., result
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOd2i : public InstructionInfo { // 0x8E -- 142
	public:

		/**
		 * Default constructor
		 */
		OPINFOd2i();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 *  Opstack ..., value → ..., result
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOd2l : public InstructionInfo { // 0x8F -- 143
	public:

		/**
		 * Default constructor
		 */
		OPINFOd2l();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value → ..., result
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOd2f : public InstructionInfo { // 0x90 -- 144
	public:

		/**
		 * Default constructor
		 */
		OPINFOd2f();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value → ..., result
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOi2b : public InstructionInfo { // 0x91 -- 145
	public:

		/**
		 * Default constructor
		 */
		OPINFOi2b();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value →..., result
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOi2c : public InstructionInfo { // 0x92 -- 146
	public:

		/**
		 * Default constructor
		 */
		OPINFOi2c();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value → ..., result
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOi2s : public InstructionInfo { // 0x93 -- 147
	public:

		/**
		 * Default constructor
		 */
		OPINFOi2s();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value →..., result
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	// Comparisons 0x94,148 -> 0xA6,166
	class OPINFOlcmp : public InstructionInfo { // 0x94 -- 148
	public:

		/**
		 * Default constructor
		 */
		OPINFOlcmp();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack  ..., value1, value2 → ..., result , if value1 > value2 push 1 , if value2 > value1 push -1 if value1 == value2 push 0
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOfcmpl : public InstructionInfo { // 0x95 -- 149
	public:

		/**
		 * Default constructor
		 */
		OPINFOfcmpl();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack  ..., value1, value2 → ..., result
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOfcmpg : public InstructionInfo { // 0x96 -- 150
	public:

		/**
		 * Default constructor
		 */
		OPINFOfcmpg();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOdcmpl : public InstructionInfo { // 0x97 -- 151
	public:

		/**
		 * Default constructor
		 */
		OPINFOdcmpl();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value1, value2 → ..., result
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOdcmpg : public InstructionInfo { // 0x98 -- 152
	public:

		/**
		 * Default constructor
		 */
		OPINFOdcmpg();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack  ..., value1, value2 →..., result
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOifeq : public InstructionInfo { // 0x99 -- 153
	public:

		/**
		 * Default constructor
		 */
		OPINFOifeq();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value → ..., branchbyte1 + branchbyte2
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

		i2 branchoffset; ///< Offset to the next instruction
	};

	class OPINFOifne : public InstructionInfo { // 0x9A -- 154
	public:

		/**
		 * Default constructor
		 */
		OPINFOifne();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value → ..., branchbyte1 + branchbyte2
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

		i2 branchoffset; ///< Offset to the next instruction
	};

	class OPINFOiflt : public InstructionInfo { // 0x9B -- 155
	public:

		/**
		 * Default constructor
		 */
		OPINFOiflt();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value → ..., branchbyte1 + branchbyte2
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

		i2 branchoffset; ///< Offset to the next instruction
	};

	class OPINFOifge : public InstructionInfo { // 0x9C -- 156
	public:

		/**
		 * Default constructor
		 */
		OPINFOifge();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value → ..., branchbyte1 + branchbyte2
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

		i2 branchoffset; ///< Offset to the next instruction
	};

	class OPINFOifgt : public InstructionInfo { // 0x9D -- 157
	public:

		/**
		 * Default constructor
		 */
		OPINFOifgt();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value → ..., branchbyte1 + branchbyte2
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

		i2 branchoffset; ///< Offset to the next instruction
	};

	class OPINFOifle : public InstructionInfo { // 0x9E -- 158
	public:

		/**
		 * Default constructor
		 */
		OPINFOifle();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value → ..., branchbyte1 + branchbyte2
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

		i2 branchoffset; ///< Offset to the next instruction
	};

	class OPINFOif_icmpeq : public InstructionInfo { // 0x9F -- 159
	public:

		/**
		 * Default constructor
		 */
		OPINFOif_icmpeq();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value → ..., branchbyte1 + branchbyte2
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

		i2 branchoffset; ///< Offset to the next instruction
	};

	class OPINFOif_icmpne : public InstructionInfo { // 0xA0 -- 160
	public:

		/**
		 * Default constructor
		 */
		OPINFOif_icmpne();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value1, value2 → ...,branchbyte1 + branchbyte2
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

		i2 branchoffset; ///< Offset to the next instruction
	};

	class OPINFOif_icmplt : public InstructionInfo { // 0xA1 - 161
	public:

		/**
		 * Default constructor
		 */
		OPINFOif_icmplt();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value1, value2 →... , branchbyte1 + branchbyte2
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

		i2 branchoffset; ///< Offset to the next instruction
	};

	class OPINFOif_icmpge : public InstructionInfo { // 0xA2 -- 162
	public:

		/**
		 * Default constructor
		 */
		OPINFOif_icmpge();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value1, value2 →... , branchbyte1 + branchbyte2
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

		i2 branchoffset; ///< Offset to the next instruction
	};

	class OPINFOif_icmpgt : public InstructionInfo { // 0xA3 -- 163
	public:

		/**
		 * Default constructor
		 */
		OPINFOif_icmpgt();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value1, value2 →... , branchbyte1 + branchbyte2
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

		i2 branchoffset; ///< Offset to the next instruction
	};

	class OPINFOif_icmple : public InstructionInfo { // 0xA4 -- 164
	public:

		/**
		 * Default constructor
		 */
		OPINFOif_icmple();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value1, value2 → ... , branchbyte1 + branchbyte2
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

		i2 branchoffset; ///< Offset to the next instruction
	};

	class OPINFOif_acmpeq : public InstructionInfo { // 0xA5 -- 165
	public:

		/**
		 * Default constructor
		 */
		OPINFOif_acmpeq();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value1, value2 → ... , branchbyte1 branchbyte2
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

		i2 branchoffset; ///< Offset to the next instruction
	};

	class OPINFOif_acmpne : public InstructionInfo { // 0xA6 -- 166
	public:

		/**
		 * Default constructor
		 */
		OPINFOif_acmpne();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value1, value2 → ... ,  branchbyte1 + branchbyte2
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

		i2 branchoffset; ///< Offset to the next instruction
	};

	//Control 0xA7,167 -> 0xB1,177
	class OPINFOgoto : public InstructionInfo { // 0xA7 -- 167
	public:

		/**
		 * Default constructor
		 */
		OPINFOgoto();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack no change , branchbyte1 + branchbyte2
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

		i2 branchoffset; ///< Offset to the next instruction
	};

	class OPINFOjsr : public InstructionInfo { // 0xA8 -- 168
	public:

		/**
		 * Default constructor
		 */
		OPINFOjsr();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ... → ..., address , branchbyte1 + branchbyte2
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

		i2 branchoffset; ///< Offset to a subroutine
	};

	class OPINFOret : public InstructionInfo { // 0xA9 -- 169
	public:

		/**
		 * Default constructor
		 */
		OPINFOret();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack no change
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

		u1 index; ///< Index to the local variable
	};

	class OPINFOtableswitch : public InstructionInfo { // 0xAA -- 170
	public:

		/**
		 * Default constructor
		 */
		OPINFOtableswitch();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

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
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

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
		 * Default constructor
		 */
		OPINFOlookupswitch();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

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
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

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
		 * Default constructor
		 */
		OPINFOireturn();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value → [empty]
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOlreturn : public InstructionInfo { // 0xAD -- 173
	public:

		/**
		 * Default constructor
		 */
		OPINFOlreturn();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value → [empty]
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOfreturn : public InstructionInfo { // 0xAE -- 174
	public:

		/**
		 * Default constructor
		 */
		OPINFOfreturn();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value → [empty]
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOdreturn : public InstructionInfo { // 0xAF -- 175
	public:

		/**
		 * Default constructor
		 */
		OPINFOdreturn();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value → [empty]
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOareturn : public InstructionInfo { // 0xB0 -- 176
	public:

		/**
		 * Default constructor
		 */
		OPINFOareturn();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., objectref → [empty]
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOreturn : public InstructionInfo { // 0xB1 -- 177
	public:

		/**
		 * Default constructor
		 */
		OPINFOreturn();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ... → [empty]
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	//References 0xB2,178 -> 0xC3,195
	class OPINFOgetstatic : public InstructionInfo { // 0xB2 -- 178
	public:

		/**
		 * Default constructor
		 */
		OPINFOgetstatic();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., → ..., value,indexbyte1 + indexbyte2
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

		u2 index; ///< Index to the field reference in the constant pool
	};

	class OPINFOputstatic : public InstructionInfo { // 0xB3 -- 179
	public:

		/**
		 * Default constructor
		 */
		OPINFOputstatic();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value → ... ,indexbyte1 + indexbyte2
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

		u2 index; ///< Index in the constant pool to the field reference
	};

	class OPINFOgetfield : public InstructionInfo { // 0xB4 -- 180
	public:

		/**
		 * Default constructor
		 */
		OPINFOgetfield();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 *Opstack ..., objectref → ..., value ,indexbyte1 + indexbyte2
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

		u2 index; ///< Index to the field reference in the constant pool
	};

	class OPINFOputfield : public InstructionInfo { // 0xB5 -- 181
	public:

		/**
		 * Default constructor
		 */
		OPINFOputfield();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., objectref, value → ... , indexbyte1 + indexbyte2
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

		u2 index; ///< Index in the constant pool to the field reference
	};

	class OPINFOinvokevirtual : public InstructionInfo { // 0xB6 -- 182
	public:

		/**
		 * Default constructor
		 */
		OPINFOinvokevirtual();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., objectref, [arg1, [arg2 ...]] → ... , indexbyte1 + indexbyte2
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

		u2 index; ///< Index in the constant pool to the method reference
	};

	class OPINFOinvokespecial : public InstructionInfo { // 0xB7 -- 183
	public:

		/**
		 * Default constructor
		 */
		OPINFOinvokespecial();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., objectref, [arg1, [arg2 ...]] → ... , indexbyte1 + indexbyte2
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

		u2 index; ///< Index in the constant pool to the method reference
	};

	class OPINFOinvokestatic : public InstructionInfo { // 0xB8 -- 184
	public:

		/**
		 * Default constructor
		 */
		OPINFOinvokestatic();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., [arg1, [arg2 ...]] → ...
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

		u2 index; ///< Index in the constant pool to the method reference
	};

	class OPINFOinvokeinterface : public InstructionInfo { // 0xB9 -- 185
	public:

		/**
		 * Default constructor
		 */
		OPINFOinvokeinterface();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., objectref, [arg1, [arg2 ...]] → ... , indexbyte1 + indexbyte2 , count , 0
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

		u2 index;	///< Index in the constant pool to the interface method
		u1 count;	///< Count operand that must not be zero
	};

	class OPINFOinvokedynamic : public InstructionInfo { // 0xBA - - 186
	public:

		/**
		 * Default constructor
		 */
		OPINFOinvokedynamic();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., [arg1, [arg2 ...]] → ...
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

		u2 index; ///< Index in the constant pool
	};

	class OPINFOnew : public InstructionInfo { // 0xBB -- 187
	public:

		/**
		 * Default constructor
		 */
		OPINFOnew();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ... → ..., objectref indexbyte1 + indexbyte2
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

		u2 index; ///< Index in the constant pool to the class reference
	};

	class OPINFOnewarray : public InstructionInfo { // 0xBC -- 188
	public:

		/**
		 * Default constructor
		 */
		OPINFOnewarray();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., count → ..., arrayref , atype
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

		u1 atype; ///< Code that indicates the type of array to create
	};

	class OPINFOanewarray : public InstructionInfo { // 0xBD -- 189
	public:

		/**
		 * Default constructor
		 */
		OPINFOanewarray();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opcode ..., count → ..., arrayref , indexbyte1 + indexbyte2
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

		u2 index; ///< index of the reference to the class that identifies the component type
	};

	class OPINFOarraylength : public InstructionInfo { // 0xBE -- 190
	public:

		/**
		 * Default constructor
		 */
		OPINFOarraylength();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., arrayref →..., length
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOathrow : public InstructionInfo { // 0xBF -- 191
	public:

		/**
		 * Default constructor
		 */
		OPINFOathrow();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., objectref → objectref
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOcheckcast : public InstructionInfo { // 0xC0 -- 192
	public:

		/**
		 * Default constructor
		 */
		OPINFOcheckcast();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., objectref → ..., objectref ,  indexbyte1 + indexbyte2
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

		u2 index; ///< Index of the class reference in the constant pool
	};

	class OPINFOinstanceof : public InstructionInfo { // 0xC1 -- 193
	public:

		/**
		 * Default constructor
		 */
		OPINFOinstanceof();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., objectref → ..., result, indexbyte1 + indexbyte2
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

		u2 index; ///< Index to the class reference in the constant pool
	};

	class OPINFOmonitorenter : public InstructionInfo { // 0xC2 -- 194
	public:

		/**
		 * Default constructor
		 */
		OPINFOmonitorenter();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., objectref → ...
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	class OPINFOmonitorexit : public InstructionInfo { // 0xC3 -- 195
	public:

		/**
		 * Default constructor
		 */
		OPINFOmonitorexit();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., objectref → ...
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

	//Extended 0xC4,196 -> 0xC9,201
	class OPINFOwide : public InstructionInfo { // 0xC4 -- 196
	public:

		/**
		 * Default constructor
		 */
		OPINFOwide();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack Same as modified instruction
		 * iinc
		 * indexbyte1
		 * indexbyte2
		 * constbyte1
		 * constbyte2
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

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
		 * Default constructor
		 */
		OPINFOmultianewarray();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., count1, [count2, ...] → ..., arrayref
		 * indexbyte1
		 * indexbyte2
		 * dimensions
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

		u2 index; ///< Index in the constant pool
		u1 dimensions; // Number of dimensions of the array to be created, must be greater than or equal to 1
	};

	class OPINFOifnull : public InstructionInfo { // 0xC6 -- 198
	public:

		/**
		 * Default constructor
		 */
		OPINFOifnull();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ..., value → ... , branchbyte1 + branchbyte2
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

		i2 branchoffset; ///< Offset to the next instruction
	};

	class OPINFOifnonnull : public InstructionInfo { // 0xC7 -- 199
	public:

		/**
		 * Default constructor
		 */
		OPINFOifnonnull();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack  ..., value → ...,branchbyte1 + branchbyte2
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

		i2 branchoffset; ///< Offset to the next instruction
	};

	class OPINFOgoto_w : public InstructionInfo { // 0xC8 -- 200
	public:

		/**
		 * Default constructor
		 */
		OPINFOgoto_w();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack no changes
		 * branchbyte1 + branchbyte2 + branchbyte3 + branchbyte4
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

		i4 branchoffset; ///< Offset to the next instruction
	};

	class OPINFOjsr_w : public InstructionInfo { // 0xC9 -- 201
	public:

		/**
		 * Default constructor
		 */
		OPINFOjsr_w();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * Opstack ... → ..., address , branchbyte1 + branchbyte2 + branchbyte3 + branchbyte4
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;

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
		 * Default constructor
		 */
		OPINFObreakpoint();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * No params for this intrsuction
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
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
		 * Default constructor
		 */
		OPINFOimpdep1();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * No params for this instruction
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
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
		 * Default constructor
		 */
		OPINFOimpdep2();

		/**
		 * Print in the stream the name
		 * @param os used to output data
		 * @param prefix string to be printed before the opcodes
		 */
		void printToStream(std::ostream &, std::string &, ConstantPool &) override;

		/**
		 * No params for this instruction
		 * @param idx index to the data vector
		 * @param data vector of bytes containing the arguments
		 * @return unsigned int number of arguments read
		 */
		uint32_t fillParams(uint32_t, std::vector<u1> &) override;

		/**
		 * Get the name of the class
		 * @return string name of the class
		 */
		std::string getName() override;

		/**
		 * Get the OpCode of the class
		 * @return unsigned int the opcode
		 */
		u1 getOpCode() override;
	};

};
