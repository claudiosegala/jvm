#pragma once

#include <string>
#include <iostream>

namespace jvm {

	class Instruction {
	public:

	private:

	};


	//Constants opcodes 0x00,00 -- 0x14,20
	class nop : Instruction {  // 0x00 - 00
	public:
		/**
		 * Constructor
		 */
		nop();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class aconst_null : Instruction {  // 0x01 --01
	public:
		/**
		 * Constructor
		 */
		aconst_null();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class iconst_m1 : Instruction {  // 0x02 -- 02
	public:
		/**
		 * Constructor
		 */
		iconst_m1();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class iconst_0 : Instruction {  // 0x03 -- 03
	public:
		/**
		 * Constructor
		 */
		iconst_0();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class iconst_1 : Instruction {  // 0x04 -- 04
	public:
		/**
		 * Constructor
		 */
		iconst_1();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class iconst_2 : Instruction {  // 0x05 -- 05
	public:
		/**
		 * Constructor
		 */
		iconst_2();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class iconst_3 : Instruction {  // 0x06 -- 06
	public:
		/**
		 * Constructor
		 */
		iconst_3();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class iconst_4 : Instruction {  // 0x07 -- 07
	public:
		/**
		 * Constructor
		 */
		iconst_4();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class iconst_5 : Instruction {  // 0x08 -- 08
	public:
		/**
		 * Constructor
		 */
		iconst_5();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class lconst_0 : Instruction {  // 0x09 -- 09
	public:
		/**
		 * Constructor
		 */
		lconst_0();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class lconst_1 : Instruction {  // 0x0A -- 10
	public:
		/**
		 * Constructor
		 */
		lconst_1();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class fconst_0 : Instruction {  // 0x0B -- 11
	public:
		/**
		 * Constructor
		 */
		fconst_0();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class fconst_1 : Instruction {  // 0x0C -- 12
	public:
		/**
		 * Constructor
		 */
		fconst_1();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class fconst_2 : Instruction {  // 0x0D -- 13
	public:
		/**
		 * Constructor
		 */
		fconst_2();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class dconst_0 : Instruction {  // 0x0E -- 14
	public:
		/**
		 * Constructor
		 */
		dconst_0();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class dconst_1 : Instruction {  // 0x0F -- 15
	public:
		/**
		 * Constructor
		 */
		dconst_1();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class bipush : Instruction {  // 0x10 -- 16
	public:
		/**
		 * Constructor
		 */
		bipush();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class sipush : Instruction {  // 0x11 -- 17
	public:
		/**
		 * Constructor
		 */
		sipush();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class ldc : Instruction {  // 0x12 -- 18
	public:
		/**
		 * Constructor
		 */
		ldc();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class ldc_w : Instruction {  // 0x13 -- 19
	public:
		/**
		 * Constructor
		 */
		ldc_w();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class ldc2_w : Instruction {  // 0x14 -- 20
	public:
		/**
		 * Constructor
		 */
		ldc2_w();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	//Loads opcodes 0x15,21 -- 0x35,53
	class iload : Instruction {  //0x15 -- 21
	public:
		/**
		 * Constructor
		 */
		iload();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class lload : Instruction {  // 0x16 -- 22
	public:
		/**
		 * Constructor
		 */
		lload();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class fload : Instruction {  // 0x17 -- 23
	public:
		/**
		 * Constructor
		 */
		fload();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class dload : Instruction {  // 0x18 -- 24
	public:
		/**
		 * Constructor
		 */
		dload();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class aload : Instruction {  // 0x19 -- 25
	public:
		/**
		 * Constructor
		 */
		aload();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class iload_0 : Instruction {  // 0x1A -- 26
	public:
		/**
		 * Constructor
		 */
		iload_0();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class iload_1 : Instruction {  // 0x1B -- 27
	public:
		/**
		 * Constructor
		 */
		iload_1();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class iload_2 : Instruction {  // 0x1C -- 28
	public:
		/**
		 * Constructor
		 */
		iload_2();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class iload_3 : Instruction {  // 0x1D -- 29
	public:
		/**
		 * Constructor
		 */
		iload_3();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class lload_0 : Instruction {  // 0x1E -- 30
	public:
		/**
		 * Constructor
		 */
		lload_0();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class lload_1 : Instruction {  // 0x1F -- 31
	public:
		/**
		 * Constructor
		 */
		lload_1();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class lload_2 : Instruction {  // 0x20 -- 32
	public:
		/**
		 * Constructor
		 */
		lload_2();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class lload_3 : Instruction {  // 0x21 -- 33
	public:
		/**
		 * Constructor
		 */
		lload_3();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class fload_0 : Instruction {  // 0x22 -- 34
	public:
		/**
		 * Constructor
		 */
		fload_0();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class fload_1 : Instruction {  // 0x23 -- 35
	public:
		/**
		 * Constructor
		 */
		fload_1();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class fload_2 : Instruction {  // 0x24 -- 36
	public:
		/**
		 * Constructor
		 */
		fload_2();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class fload_3 : Instruction {  // 0x25 -- 37
	public:
		/**
		 * Constructor
		 */
		fload_3();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class dload_0 : Instruction {  // 0x26 -- 38
	public:
		/**
		 * Constructor
		 */
		dload_0();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class dload_1 : Instruction {  // 0x27 -- 39
	public:
		/**
		 * Constructor
		 */
		dload_1();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class dload_2 : Instruction {  // 0x28 -- 40
	public:
		/**
		 * Constructor
		 */
		dload_2();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class dload_3 : Instruction {  // 0x29 -- 41
	public:
		/**
		 * Constructor
		 */
		dload_3();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class aload_0 : Instruction {  // 0x2A -- 42
	public:
		/**
		 * Constructor
		 */
		aload_0();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class aload_1 : Instruction {  // 0x2B -- 43
	public:
		/**
		 * Constructor
		 */
		aload_1();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class aload_2 : Instruction {  // 0x2C -- 44
	public:
		/**
		 * Constructor
		 */
		aload_2();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class aload_3 : Instruction {  // 0x2D -- 45
	public:
		/**
		 * Constructor
		 */
		aload_3();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class iaload : Instruction {   // 0x2E -- 46
	public:
		/**
		 * Constructor
		 */
		iaload();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class laload : Instruction {   // 0x2F -- 47
	public:
		/**
		 * Constructor
		 */
		laload();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class faload : Instruction {   // 0x30 -- 48
	public:
		/**
		 * Constructor
		 */
		faload();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class daload : Instruction {   // 0x31 -- 49
	public:
		/**
		 * Constructor
		 */
		daload();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class aaload : Instruction {   // 0x32 -- 50
	public:
		/**
		 * Constructor
		 */
		aaload();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class baload : Instruction {   // 0x33 -- 51
	public:
		/**
		 * Constructor
		 */
		baload();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class caload : Instruction {   // 0x34 -- 52
	public:
		/**
		 * Constructor
		 */
		caload();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class saload : Instruction {  // 0x35 -- 53
	public:
		/**
		 * Constructor
		 */
		saload();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	//Stores 0x36,54 -> 0x56,86
	class istore : Instruction {  //0x36 -- 54
	public:
		/**
		 * Constructor
		 */
		istore();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class lstore : Instruction {  // 0x37 -- 55
	public:
		/**
		 * Constructor
		 */
		lstore();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class fstore : Instruction {  // 0x38 -- 56
	public:
		/**
		 * Constructor
		 */
		fstore();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class dstore : Instruction {  // 0x39 -- 57
	public:
		/**
		 * Constructor
		 */
		dstore();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class astore : Instruction {  // 0x3A -- 58
	public:
		/**
		 * Constructor
		 */
		astore();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class istore_0 : Instruction {  // 0x3B -- 59
	public:
		/**
		 * Constructor
		 */
		istore_0();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class istore_1 : Instruction {  // 0x3C -- 60
	public:
		/**
		 * Constructor
		 */
		istore_1();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class istore_2 : Instruction {  // 0x3D -- 61
	public:
		/**
		 * Constructor
		 */
		istore_2();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class istore_3 : Instruction {  // 0x3E -- 62
	public:
		/**
		 * Constructor
		 */
		istore_3();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class lstore_0 : Instruction {  // 0x3F -- 63
	public:
		/**
		 * Constructor
		 */
		lstore_0();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class lstore_1 : Instruction {  // 0x40 -- 64
	public:
		/**
		 * Constructor
		 */
		lstore_1();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class lstore_2 : Instruction {  // 0x41 -- 65
	public:
		/**
		 * Constructor
		 */
		lstore_2();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class lstore_3 : Instruction {  // 0x42 -- 66
	public:
		/**
		 * Constructor
		 */
		lstore_3();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class fstore_0 : Instruction {  // 0x43 -- 67
	public:
		/**
		 * Constructor
		 */
		fstore_0();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class fstore_1 : Instruction {  // 0x44 -- 68
	public:
		/**
		 * Constructor
		 */
		fstore_1();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class fstore_2 : Instruction {  // 0x45 -- 69
	public:
		/**
		 * Constructor
		 */
		fstore_2();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class fstore_3 : Instruction {  // 0x46 -- 70
	public:
		/**
		 * Constructor
		 */
		fstore_3();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class dstore_0 : Instruction {  // 0x47 -- 71
	public:
		/**
		 * Constructor
		 */
		dstore_0();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class dstore_1 : Instruction {  // 0x48 -- 72
	public:
		/**
		 * Constructor
		 */
		dstore_1();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class dstore_2 : Instruction {  // 0x49 -- 73
	public:
		/**
		 * Constructor
		 */
		dstore_2();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class dstore_3 : Instruction {  // 0x4A -- 74
	public:
		/**
		 * Constructor
		 */
		dstore_3();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class astore_0 : Instruction { // 0x4B -- 75
	public:
		/**
		 * Constructor
		 */
		astore_0();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class astore_1 : Instruction {  // 0x4C -- 76
	public:
		/**
		 * Constructor
		 */
		astore_1();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class astore_2 : Instruction {  // 0x4D -- 77
	public:
		/**
		 * Constructor
		 */
		astore_2();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class astore_3 : Instruction {  // 0x4E -- 78
	public:
		/**
		 * Constructor
		 */
		astore_3();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class iastore : Instruction {  // 0x4F -- 79
	public:
		/**
		 * Constructor
		 */
		iastore();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class lastore : Instruction {  // 0x50 -- 80
	public:
		/**
		 * Constructor
		 */
		lastore();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class fastore : Instruction {  // 0x51 -- 81
	public:
		/**
		 * Constructor
		 */
		fastore();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class dastore : Instruction {  // 0x52 -- 82
	public:
		/**
		 * Constructor
		 */
		dastore();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class aastore : Instruction {  // 0x53 -- 83
	public:
		/**
		 * Constructor
		 */
		aastore();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class bastore : Instruction {  // 0x54 -- 84
	public:
		/**
		 * Constructor
		 */
		bastore();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class castore : Instruction {  // 0x55 -- 85
	public:
		/**
		 * Constructor
		 */
		castore();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class sastore : Instruction {  // 0x56 -- 86
	public:
		/**
		 * Constructor
		 */
		sastore();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	// Stack 0x57,87 -> 0x5F,95
	class pop : Instruction {  //0x57 -- 87
	public:
		/**
		 * Constructor
		 */
		pop();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class pop2 : Instruction {  //0x58 -- 88
	public:
		/**
		 * Constructor
		 */
		pop2();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class dup : Instruction {  //0x59 -- 89
	public:
		/**
		 * Constructor
		 */
		dup();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class dup_x1 : Instruction {  //0x5A -- 90
	public:
		/**
		 * Constructor
		 */
		dup_x1();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class dup_x2 : Instruction {  //0x5B -- 91
	public:
		/**
		 * Constructor
		 */
		dup_x2();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class dup2 : Instruction {  //0x5C -- 92
	public:
		/**
		 * Constructor
		 */
		dup2();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class dup2_x1 : Instruction {  //0x5D -- 93
	public:
		/**
		 * Constructor
		 */
		dup2_x1();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class dup2_x2 : Instruction {  //0x5E -- 94
	public:
		/**
		 * Constructor
		 */
		dup2_x2();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class swap : Instruction {  //0x5F -- 95
	public:
		/**
		 * Constructor
		 */
		swap();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	// Math 0x60,96 -> 0x84,132
	class iadd : Instruction {  //0x60 -- 96
	public:
		/**
		 * Constructor
		 */
		iadd();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class ladd : Instruction {  //0x61 -- 97
	public:
		/**
		 * Constructor
		 */
		ladd();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class fadd : Instruction {  //0x62 -- 98
	public:
		/**
		 * Constructor
		 */
		fadd();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class dadd : Instruction {  //0x63 -- 99
	public:
		/**
		 * Constructor
		 */
		dadd();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class isub : Instruction {  //0x64 -- 100
	public:
		/**
		 * Constructor
		 */
		isub();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class lsub : Instruction {  //0x65 -- 101
	public:
		/**
		 * Constructor
		 */
		lsub();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class fsub : Instruction {  //0x66 -- 102
	public:
		/**
		 * Constructor
		 */
		fsub();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class dsub : Instruction {  //0x67 -- 103
	public:
		/**
		 * Constructor
		 */
		dsub();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class imul : Instruction {  //0x68 -- 104
	public:
		/**
		 * Constructor
		 */
		imul();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class lmul : Instruction {  //0x69 -- 105
	public:
		/**
		 * Constructor
		 */
		lmul();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class fmul : Instruction {  //0x6A -- 106
	public:
		/**
		 * Constructor
		 */
		fmul();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class dmul : Instruction {  //0x6B -- 107
	public:
		/**
		 * Constructor
		 */
		dmul();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class idiv : Instruction {  //0x6C -- 108
	public:
		/**
		 * Constructor
		 */
		idiv();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class ldiv : Instruction {  //0x6D -- 109
	public:
		/**
		 * Constructor
		 */
		ldiv();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class fdiv : Instruction {  //0x6E -- 110
	public:
		/**
		 * Constructor
		 */
		fdiv();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class ddiv : Instruction {  //0x6F -- 111
	public:
		/**
		 * Constructor
		 */
		ddiv();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class irem : Instruction {  //0x70 -- 112
	public:
		/**
		 * Constructor
		 */
		irem();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class lrem : Instruction {  //0x71 -- 113
	public:
		/**
		 * Constructor
		 */
		lrem();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class frem : Instruction {  //0x72 -- 114
	public:
		/**
		 * Constructor
		 */
		frem();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class drem : Instruction {  //0x73 -- 115
	public:
		/**
		 * Constructor
		 */
		drem();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class ineg : Instruction {  //0x74 -- 116
	public:
		/**
		 * Constructor
		 */
		ineg();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class lneg : Instruction {  //0x75 -- 117
	public:
		/**
		 * Constructor
		 */
		lneg();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class fneg : Instruction {  //0x76 -- 118
	public:
		/**
		 * Constructor
		 */
		fneg();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class dneg : Instruction {  //0x77 -- 119
	public:
		/**
		 * Constructor
		 */
		dneg();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class ishl : Instruction {  //0x78 -- 120
	public:
		/**
		 * Constructor
		 */
		ishl();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class lshl : Instruction {  //0x79 -- 121
	public:
		/**
		 * Constructor
		 */
		lshl();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class ishr : Instruction {  //0x7A -- 122
	public:
		/**
		 * Constructor
		 */
		ishr();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class lshr : Instruction {  //0x7B -- 123
	public:
		/**
		 * Constructor
		 */
		lshr();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class iushr : Instruction {  //0x7C -- 124
	public:
		/**
		 * Constructor
		 */
		iushr();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class lushr : Instruction {  //0x7D -- 125
	public:
		/**
		 * Constructor
		 */
		lushr();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class iand : Instruction {  //0x7E -- 126
	public:
		/**
		 * Constructor
		 */
		iand();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class land : Instruction {  // 0x7F -- 127
	public:
		/**
		 * Constructor
		 */
		land();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class ior : Instruction {  // 0x80 -- 128
	public:
		/**
		 * Constructor
		 */
		ior();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class lor : Instruction {  // 0x81 --129
	public:
		/**
		 * Constructor
		 */
		lor();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class ixor : Instruction {  // 0x82 -- 130
	public:
		/**
		 * Constructor
		 */
		ixor();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class lxor : Instruction {  // 0x83 -- 131
	public:
		/**
		 * Constructor
		 */
		lxor();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class iinc : Instruction {  // 0x84 -- 132
	public:
		/**
		 * Constructor
		 */
		iinc();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	//Conversations 0x85,133 -> 0x93,147
	class i2l : Instruction {  // 0x85 -- 133
	public:
		/**
		 * Constructor
		 */
		i2l();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class i2f : Instruction {  // 0x86 -- 134
	public:
		/**
		 * Constructor
		 */
		i2f();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class i2d : Instruction {  // 0x87 -- 135
	public:
		/**
		 * Constructor
		 */
		i2d();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class l2i : Instruction {  // 0x88 -- 136
	public:
		/**
		 * Constructor
		 */
		l2i();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class l2f : Instruction {  // 0x89 -- 137
	public:
		/**
		 * Constructor
		 */
		l2f();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class l2d : Instruction {  // 0x8A -- 138
	public:
		/**
		 * Constructor
		 */
		l2d();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class f2i : Instruction {  // 0x8B -- 139
	public:
		/**
		 * Constructor
		 */
		f2i();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class f2l : Instruction {  // 0x8C -- 140
	public:
		/**
		 * Constructor
		 */
		f2l();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class f2d : Instruction {  // 0x8D -- 141
	public:
		/**
		 * Constructor
		 */
		f2d();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class d2i : Instruction {  // 0x8E -- 142
	public:
		/**
		 * Constructor
		 */
		d2i();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class d2l : Instruction {  // 0x8F -- 143
	public:
		/**
		 * Constructor
		 */
		d2l();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class d2f : Instruction {  // 0x90 -- 144
	public:
		/**
		 * Constructor
		 */
		d2f();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class i2b : Instruction {  // 0x91 -- 145
	public:
		/**
		 * Constructor
		 */
		i2b();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class i2c : Instruction {  // 0x92 -- 146
	public:
		/**
		 * Constructor
		 */
		i2c();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class i2s : Instruction {  // 0x93 -- 147
	public:
		/**
		 * Constructor
		 */
		i2s();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	// Comparisons 0x94,148 -> 0xA6,166
	class lcmp : Instruction {  // 0x94 -- 148
	public:
		/**
		 * Constructor
		 */
		lcmp();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class fcmpl : Instruction {  // 0x95 -- 149
	public:
		/**
		 * Constructor
		 */
		fcmpl();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class fcmpg : Instruction {  // 0x96 -- 150
	public:
		/**
		 * Constructor
		 */
		fcmpg();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class dcmpl : Instruction {  // 0x97 -- 151
	public:
		/**
		 * Constructor
		 */
		dcmpl();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class dcmpg : Instruction {  // 0x98 -- 152
	public:
		/**
		 * Constructor
		 */
		dcmpg();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class ifeq : Instruction {  // 0x99 -- 153
	public:
		/**
		 * Constructor
		 */
		ifeq();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class ifne : Instruction {  // 0x9A -- 154
	public:
		/**
		 * Constructor
		 */
		ifne();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class iflt : Instruction {  // 0x9B -- 155
	public:
		/**
		 * Constructor
		 */
		iflt();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class ifge : Instruction {  // 0x9C -- 156
	public:
		/**
		 * Constructor
		 */
		ifge();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class ifgt : Instruction {  //0x9D -- 157
	public:
		/**
		 * Constructor
		 */
		ifgt();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class ifle : Instruction {  //0x9E -- 158
	public:
		/**
		 * Constructor
		 */
		ifle();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class if_icmpeq : Instruction {  // 0x9F -- 159
	public:
		/**
		 * Constructor
		 */
		if_icmpeq();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class if_icmpne : Instruction {  // 0xA0 -- 160
	public:
		/**
		 * Constructor
		 */
		if_icmpne();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class if_icmplt : Instruction {  // 0xA1 - 161
	public:
		/**
		 * Constructor
		 */
		if_icmplt();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class if_icmpge : Instruction {  // 0xA2 -- 162
	public:
		/**
		 * Constructor
		 */
		if_icmpge();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class if_icmpgt : Instruction {  // 0xA3 -- 163
	public:
		/**
		 * Constructor
		 */
		if_icmpgt();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class if_icmple : Instruction {  // 0xA4 -- 164
	public:
		/**
		 * Constructor
		 */
		if_icmple();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class if_acmpeq : Instruction {  // 0xA5 -- 165
	public:
		/**
		 * Constructor
		 */
		if_acmpeq();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class if_acmpne : Instruction {  // 0xA6 -- 166
	public:
		/**
		 * Constructor
		 */
		if_acmpne();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	//Control 0xA7,167 -> 0xB1,177
	class goto_jvm : Instruction {  // 0xA7 -- 167
	public:
		/**
		 * Constructor
		 */
		goto_jvm();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class jsr : Instruction {  // 0xA8 -- 168
	public:
		/**
		 * Constructor
		 */
		jsr();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class ret : Instruction {  // 0xA9 -- 169
	public:
		/**
		 * Constructor
		 */
		ret();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class tableswitch : Instruction {  // 0xAA -- 170
	public:
		/**
		 * Constructor
		 */
		tableswitch();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class ireturn : Instruction {  // 0xAB -- 171
	public:
		/**
		 * Constructor
		 */
		ireturn();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class lreturn : Instruction {  // 0xAC -- 172
	public:
		/**
		 * Constructor
		 */
		lreturn();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class freturn : Instruction {  // 0xAD -- 173
	public:
		/**
		 * Constructor
		 */
		freturn();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class dreturn : Instruction {  // 0xAE -- 174
	public:
		/**
		 * Constructor
		 */
		dreturn();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class areturn : Instruction {  // 0xAF -- 175
	public:
		/**
		 * Constructor
		 */
		areturn();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class return_jvm : Instruction {  // 0xB0 -- 176
	public:
		/**
		 * Constructor
		 */
		return_jvm();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	//References 0xB2,178 -> 0xC3,195
	class getstatic : Instruction {  // 0xB2 -- 178
	public:
		/**
		 * Constructor
		 */
		getstatic();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};


	class putstatic : Instruction {  // 0xB3 -- 179
	public:
		/**
		 * Constructor
		 */
		putstatic();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class getfield : Instruction {  // 0xB4 -- 180
	public:
		/**
		 * Constructor
		 */
		getfield();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class putfield : Instruction {  // 0xB5 -- 181
	public:
		/**
		 * Constructor
		 */
		putfield();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class invokevirtual : Instruction {  // 0xB6 -- 182
	public:
		/**
		 * Constructor
		 */
		invokevirtual();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class invokespecial : Instruction {  // 0xB7 -- 183
	public:
		/**
		 * Constructor
		 */
		invokespecial();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class invokestatic : Instruction {  // 0xB8 -- 184
	public:
		/**
		 * Constructor
		 */
		invokestatic();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class invokeinterface : Instruction {  // 0xB9 -- 185
	public:
		/**
		 * Constructor
		 */
		invokeinterface();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class invokedynamic : Instruction {  // 0xBA - - 186
	public:
		/**
		 * Constructor
		 */
		invokedynamic();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class new_jvm : Instruction {  // 0xBB -- 187
	public:
		/**
		 * Constructor
		 */
		new_jvm();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class newarray : Instruction {  // 0xBC -- 188
	public:
		/**
		 * Constructor
		 */
		newarray();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class anewarray : Instruction {  // 0xBD -- 189
	public:
		/**
		 * Constructor
		 */
		anewarray();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class arraylength : Instruction { // 0xBE -- 190
	public:
		/**
		 * Constructor
		 */
		arraylength();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class athrow : Instruction {        // 0xBF -- 191
	public:
		/**
		 * Constructor
		 */
		athrow();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class checkcast : Instruction {     // 0xC0 -- 192
	public:
		/**
		 * Constructor
		 */
		checkcast();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class instanceof : Instruction {     //0xC1 -- 193
	public:
		/**
		 * Constructor
		 */
		instanceof();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class monitorenter : Instruction {   // 0xC2 -- 194
	public:
		/**
		 * Constructor
		 */
		monitorenter();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class monitorexit : Instruction {   // 0xC3 -- 195
	public:
		/**
		 * Constructor
		 */
		monitorexit();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	//Extended 0xC4,196 -> 0xC9,201
	class wide : Instruction {  // 0xC4 -- 196
	public:
		/**
		 * Constructor
		 */
		wide();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class multianewarray : Instruction {  // 0xC5 -- 197
	public:
		/**
		 * Constructor
		 */
		multianewarray();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class ifnull : Instruction {  // 0xC6 -- 198
	public:
		/**
		 * Constructor
		 */
		ifnull();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class ifnonnull : Instruction {  // 0xC7 -- 199
	public:
		/**
		 * Constructor
		 */
		ifnonnull();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class goto_w : Instruction {  // 0xC8 -- 200
	public:
		/**
		 * Constructor
		 */
		goto_w();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class jsr_w : Instruction {  // 0xC9 -- 201
	public:
		/**
		 * Constructor
		 */
		jsr_w();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	//Reserved 0xca,202 -> 0xff,255
	class breakpoint : Instruction {  // 0xca -- 202
	public:
		/**
		 * Constructor
		 */
		breakpoint();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class impdep1 : Instruction {  // 0xFE -- 254
	public:
		/**
		 * Constructor
		 */
		impdep1();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

	class impdep2 : Instruction {  // 0xFF -- 255
	public:
		/**
		 * Constructor
		 */
		impdep2();

		/**
		 * The execution of this instruction
		 */
		virtual void execute();

		/**
		 * Print in the stream the name
		 */
		virtual void printToStream(std::ostream&, std::string&);

		/**
		 * Get the name of the class
		 */
		virtual std::string getName();
	};

};