#pragma once

#include "base.hpp"
#include "constant_pool.hpp"
#include "util/converter.hpp"

#define OPINFO_DECL(name)\
class OPINFO ## name : public InstructionInfo {\
public:\
	OPINFO ## name ();\
};

#define OPINFO_PARTIAL_DECL_OVERRIDE(name)\
	OPINFO ## name (); \
\
	void printToStream(std::ostream&, std::string&, ConstantPool&) const override;\
	uint32_t fillParams(std::uint32_t, std::vector<u1>&) override;

namespace jvm {
	class InstructionInfo {
	protected:
		InstructionInfo(u1 code, std::string name, std::uint32_t jmp);

	public:
		const u1 opcode;
		const std::string name;
		uint32_t jmp;

		/**
		 * Print in the stream the name
		 * @param std::ostream& Console output, std::string& String to be printed
		 */
		virtual void printToStream(std::ostream&, std::string&, ConstantPool&) const;
		
		/**
		 * Fill the params of this class
		 * @param uint32_t Index of the data vector, std::vector<u1>& Reference to the data vector
		 */
		virtual uint32_t fillParams(std::uint32_t, std::vector<u1>&);
	};

	//Constants opcodes 0x00,00 -- 0x14,20
	OPINFO_DECL(nop)
	OPINFO_DECL(aconst_null)
	OPINFO_DECL(iconst_m1)
	OPINFO_DECL(iconst_0)
	OPINFO_DECL(iconst_1)
	OPINFO_DECL(iconst_2)
	OPINFO_DECL(iconst_3)
	OPINFO_DECL(iconst_4)
	OPINFO_DECL(iconst_5)
	OPINFO_DECL(lconst_0)
	OPINFO_DECL(lconst_1)
	OPINFO_DECL(fconst_0)
	OPINFO_DECL(fconst_1)
	OPINFO_DECL(fconst_2)
	OPINFO_DECL(dconst_0)
	OPINFO_DECL(dconst_1)

	class OPINFObipush : public InstructionInfo {
	public:
		i1 byte; ///< Byte to be pushed as an integer to the stack

		OPINFO_PARTIAL_DECL_OVERRIDE(bipush)
	};

	class OPINFOsipush : public InstructionInfo {
	public:
		i2 value; ///< Short value to be pushed onto the stack

		OPINFO_PARTIAL_DECL_OVERRIDE(sipush)
	};

	class OPINFOldc : public InstructionInfo {
	public:
		u1 index; ///< Index in the constant pool

		OPINFO_PARTIAL_DECL_OVERRIDE(ldc)
	};

	class OPINFOldc_w : public InstructionInfo {
	public:
		u2 index; ///< Index in the constant pool

		OPINFO_PARTIAL_DECL_OVERRIDE(ldc_w)
	};

	class OPINFOldc2_w : public InstructionInfo {
	public:
		u2 index; ///< Index in the constant pool

		OPINFO_PARTIAL_DECL_OVERRIDE(ldc2_w)
	};

	//Loads opcodes 0x15,21 -- 0x35,53
	class OPINFOiload : public InstructionInfo {
	public:
		u1 index; ///< Index of the local variable

		OPINFO_PARTIAL_DECL_OVERRIDE(iload)
	};

	class OPINFOlload : public InstructionInfo {
	public:
		u1 index; ///< Index to the local variable

		OPINFO_PARTIAL_DECL_OVERRIDE(lload)
	};

	class OPINFOfload : public InstructionInfo {
	public:
		u1 index; ///< Index of the local float variable

		OPINFO_PARTIAL_DECL_OVERRIDE(fload)
	};

	class OPINFOdload : public InstructionInfo {
	public:
		u1 index; ///< Index to the local double variable

		OPINFO_PARTIAL_DECL_OVERRIDE(dload)
	};

	class OPINFOaload : public InstructionInfo {
	public:
		u1 index; ///< index of the reference to the local variable to be loaded

		OPINFO_PARTIAL_DECL_OVERRIDE(aload)
	};

	OPINFO_DECL(iload_0)
	OPINFO_DECL(iload_1)
	OPINFO_DECL(iload_2)
	OPINFO_DECL(iload_3)
	OPINFO_DECL(lload_0)
	OPINFO_DECL(lload_1)
	OPINFO_DECL(lload_2)
	OPINFO_DECL(lload_3)
	OPINFO_DECL(fload_0)
	OPINFO_DECL(fload_1)
	OPINFO_DECL(fload_2)
	OPINFO_DECL(fload_3)
	OPINFO_DECL(dload_0)
	OPINFO_DECL(dload_1)
	OPINFO_DECL(dload_2)
	OPINFO_DECL(dload_3)
	OPINFO_DECL(aload_0)
	OPINFO_DECL(aload_1)
	OPINFO_DECL(aload_2)
	OPINFO_DECL(aload_3)
	OPINFO_DECL(iaload)
	OPINFO_DECL(laload)
	OPINFO_DECL(faload)
	OPINFO_DECL(daload)
	OPINFO_DECL(aaload)
	OPINFO_DECL(baload)
	OPINFO_DECL(caload)
	OPINFO_DECL(saload)

	//Stores 0x36,54 -> 0x56,86
	class OPINFOistore : public InstructionInfo {
	public:
		u1 index; ///< Index to the local variable

		OPINFO_PARTIAL_DECL_OVERRIDE(istore)
	};

	class OPINFOlstore : public InstructionInfo {
	public:
		u1 index; ///< Index to the local variable

		OPINFO_PARTIAL_DECL_OVERRIDE(lstore)
	};

	class OPINFOfstore : public InstructionInfo {
	public:
		u1 index; ///< Index of the local float variable

		OPINFO_PARTIAL_DECL_OVERRIDE(fstore)
	};

	class OPINFOdstore : public InstructionInfo {
	public:
		u1 index; ///< Index to the local double variable

		OPINFO_PARTIAL_DECL_OVERRIDE(dstore)
	};

	class OPINFOastore : public InstructionInfo {
	public:
		u1 index; ///< Index of the local variable that will store the reference

		OPINFO_PARTIAL_DECL_OVERRIDE(astore)
	};

	OPINFO_DECL(istore_0)
	OPINFO_DECL(istore_1)
	OPINFO_DECL(istore_2)
	OPINFO_DECL(istore_3)
	OPINFO_DECL(lstore_0)
	OPINFO_DECL(lstore_1)
	OPINFO_DECL(lstore_2)
	OPINFO_DECL(lstore_3)
	OPINFO_DECL(fstore_0)
	OPINFO_DECL(fstore_1)
	OPINFO_DECL(fstore_2)
	OPINFO_DECL(fstore_3)
	OPINFO_DECL(dstore_0)
	OPINFO_DECL(dstore_1)
	OPINFO_DECL(dstore_2)
	OPINFO_DECL(dstore_3)
	OPINFO_DECL(astore_0)
	OPINFO_DECL(astore_1)
	OPINFO_DECL(astore_2)
	OPINFO_DECL(astore_3)
	OPINFO_DECL(iastore)
	OPINFO_DECL(lastore)
	OPINFO_DECL(fastore)
	OPINFO_DECL(dastore)
	OPINFO_DECL(aastore)
	OPINFO_DECL(bastore)
	OPINFO_DECL(castore)
	OPINFO_DECL(sastore)

	// Stack 0x57,87 -> 0x5F,95
	OPINFO_DECL(pop)
	OPINFO_DECL(pop2)
	OPINFO_DECL(dup)
	OPINFO_DECL(dup_x1)
	OPINFO_DECL(dup_x2)
	OPINFO_DECL(dup2)
	OPINFO_DECL(dup2_x1)
	OPINFO_DECL(dup2_x2)
	OPINFO_DECL(swap)

	// Math 0x60,96 -> 0x84,132
	OPINFO_DECL(iadd)
	OPINFO_DECL(ladd)
	OPINFO_DECL(fadd)
	OPINFO_DECL(dadd)
	OPINFO_DECL(isub)
	OPINFO_DECL(lsub)
	OPINFO_DECL(fsub)
	OPINFO_DECL(dsub)
	OPINFO_DECL(imul)
	OPINFO_DECL(lmul)
	OPINFO_DECL(fmul)
	OPINFO_DECL(dmul)
	OPINFO_DECL(idiv)
	OPINFO_DECL(ldiv)
	OPINFO_DECL(fdiv)
	OPINFO_DECL(ddiv)
	OPINFO_DECL(irem)
	OPINFO_DECL(lrem)
	OPINFO_DECL(frem)
	OPINFO_DECL(drem)
	OPINFO_DECL(ineg)
	OPINFO_DECL(lneg)
	OPINFO_DECL(fneg)
	OPINFO_DECL(dneg)
	OPINFO_DECL(ishl)
	OPINFO_DECL(lshl)
	OPINFO_DECL(ishr)
	OPINFO_DECL(lshr)
	OPINFO_DECL(iushr)
	OPINFO_DECL(lushr)
	OPINFO_DECL(iand)
	OPINFO_DECL(land)
	OPINFO_DECL(ior)
	OPINFO_DECL(lor)
	OPINFO_DECL(ixor)
	OPINFO_DECL(lxor)

	class OPINFOiinc : public InstructionInfo {
	public:
		u1 index;       ///< Index of the local variable
		i1 constant;    ///< Value to be incremented to the local variable

		OPINFO_PARTIAL_DECL_OVERRIDE(iinc)
	};

	//Conversations 0x85,133 -> 0x93,147
	OPINFO_DECL(i2l)
	OPINFO_DECL(i2f)
	OPINFO_DECL(i2d)
	OPINFO_DECL(l2i)
	OPINFO_DECL(l2f)
	OPINFO_DECL(l2d)
	OPINFO_DECL(f2i)
	OPINFO_DECL(f2l)
	OPINFO_DECL(f2d)
	OPINFO_DECL(d2i)
	OPINFO_DECL(d2l)
	OPINFO_DECL(d2f)
	OPINFO_DECL(i2b)
	OPINFO_DECL(i2c)
	OPINFO_DECL(i2s)

	// Comparisons 0x94,148 -> 0xA6,166
	OPINFO_DECL(lcmp)
	OPINFO_DECL(fcmpl)
	OPINFO_DECL(fcmpg)
	OPINFO_DECL(dcmpl)
	OPINFO_DECL(dcmpg)

	class OPINFOifeq : public InstructionInfo {
	public:
		i2 branchoffset; ///< Offset to the next instruction

		OPINFO_PARTIAL_DECL_OVERRIDE(ifeq)
	};

	class OPINFOifne : public InstructionInfo {
	public:
		i2 branchoffset; ///< Offset to the next instruction

		OPINFO_PARTIAL_DECL_OVERRIDE(ifne)
	};

	class OPINFOiflt : public InstructionInfo {
	public:
		i2 branchoffset; ///< Offset to the next instruction

		OPINFO_PARTIAL_DECL_OVERRIDE(iflt)
	};

	class OPINFOifge : public InstructionInfo {
	public:
		i2 branchoffset; ///< Offset to the next instruction

		OPINFO_PARTIAL_DECL_OVERRIDE(ifge)
	};

	class OPINFOifgt : public InstructionInfo {
	public:
		i2 branchoffset; ///< Offset to the next instruction

		OPINFO_PARTIAL_DECL_OVERRIDE(ifgt)
	};

	class OPINFOifle : public InstructionInfo {
	public:
		i2 branchoffset; ///< Offset to the next instruction

		OPINFO_PARTIAL_DECL_OVERRIDE(ifle)
	};

	class OPINFOif_icmpeq : public InstructionInfo {
	public:
		i2 branchoffset; ///< Offset to the next instruction

		OPINFO_PARTIAL_DECL_OVERRIDE(if_icmpeq)
	};

	class OPINFOif_icmpne : public InstructionInfo {
	public:
		i2 branchoffset; ///< Offset to the next instruction

		OPINFO_PARTIAL_DECL_OVERRIDE(if_icmpne)
	};

	class OPINFOif_icmplt : public InstructionInfo {
	public:
		i2 branchoffset; ///< Offset to the next instruction

		OPINFO_PARTIAL_DECL_OVERRIDE(if_icmplt)
	};

	class OPINFOif_icmpge : public InstructionInfo {
	public:
		i2 branchoffset; ///< Offset to the next instruction

		OPINFO_PARTIAL_DECL_OVERRIDE(if_icmpge)
	};

	class OPINFOif_icmpgt : public InstructionInfo {
	public:
		i2 branchoffset; ///< Offset to the next instruction

		OPINFO_PARTIAL_DECL_OVERRIDE(if_icmpgt)
	};

	class OPINFOif_icmple : public InstructionInfo {
	public:
		i2 branchoffset; ///< Offset to the next instruction

		OPINFO_PARTIAL_DECL_OVERRIDE(if_icmple)
	};

	class OPINFOif_acmpeq : public InstructionInfo {
	public:
		i2 branchoffset; ///< Offset to the next instruction

		OPINFO_PARTIAL_DECL_OVERRIDE(if_acmpeq)
	};

	class OPINFOif_acmpne : public InstructionInfo {
	public:
		i2 branchoffset; ///< Offset to the next instruction

		OPINFO_PARTIAL_DECL_OVERRIDE(if_acmpne)
	};

	//Control 0xA7,167 -> 0xB1,177
	class OPINFOgoto : public InstructionInfo {
	public:
		i2 branchoffset; ///< Offset to the next instruction

		OPINFO_PARTIAL_DECL_OVERRIDE(goto)
	};

	class OPINFOjsr : public InstructionInfo {
	public:
		i2 branchoffset; ///< Offset to a subroutine

		OPINFO_PARTIAL_DECL_OVERRIDE(jsr)
	};

	class OPINFOret : public InstructionInfo {
	public:
		u1 index; ///< Index to the local variable

		OPINFO_PARTIAL_DECL_OVERRIDE(ret)
	};

	class OPINFOtableswitch : public InstructionInfo {
	public:
		i4 defaultbyte;              //> default
		i4 low;                      //> low
		i4 high;                     //> high
		std::vector<i4> jumpOffsets; //> Jump Offsets

		OPINFO_PARTIAL_DECL_OVERRIDE(tableswitch)
	};

	class OPINFOlookupswitch : public InstructionInfo {
	public:
		i4 defaultbyte;         //> default
		i4 npairs;              //> qtd of pairs
		std::map<i4, i4> pairs; //> Jump Offsets

		OPINFO_PARTIAL_DECL_OVERRIDE(lookupswitch)
	};

	OPINFO_DECL(ireturn)
	OPINFO_DECL(lreturn)
	OPINFO_DECL(freturn)
	OPINFO_DECL(dreturn)
	OPINFO_DECL(areturn)
	OPINFO_DECL(return)

	//References 0xB2,178 -> 0xC3,195
	class OPINFOgetstatic : public InstructionInfo {
	public:
		u2 index; ///< Index to the field reference in the constant pool

		OPINFO_PARTIAL_DECL_OVERRIDE(getstatic)
	};

	class OPINFOputstatic : public InstructionInfo {
	public:
		u2 index; ///< Index in the constant pool to the field reference

		OPINFO_PARTIAL_DECL_OVERRIDE(putstatic)
	};

	class OPINFOgetfield : public InstructionInfo {
	public:
		u2 index; ///< Index to the field reference in the constant pool

		OPINFO_PARTIAL_DECL_OVERRIDE(getfield)
	};

	class OPINFOputfield : public InstructionInfo {
	public:
		u2 index; ///< Index in the constant pool to the field reference

		OPINFO_PARTIAL_DECL_OVERRIDE(putfield)
	};

	class OPINFOinvokevirtual : public InstructionInfo {
	public:
		u2 index; ///< Index in the constant pool to the method reference

		OPINFO_PARTIAL_DECL_OVERRIDE(invokevirtual)
	};

	class OPINFOinvokespecial : public InstructionInfo {
	public:
		u2 index; ///< Index in the constant pool to the method referenc

		OPINFO_PARTIAL_DECL_OVERRIDE(invokespecial)
	};

	class OPINFOinvokestatic : public InstructionInfo {
	public:
		u2 index; ///< Index in the constant pool to the method reference

		OPINFO_PARTIAL_DECL_OVERRIDE(invokestatic)
	};

	class OPINFOinvokeinterface : public InstructionInfo {
	public:
		u2 index;  ///< Index in the constant pool to the interface method
		u1 count;  ///< Count operand that must not be zero

		OPINFO_PARTIAL_DECL_OVERRIDE(invokeinterface)
	};

	class OPINFOinvokedynamic : public InstructionInfo {
	public:
		u2 index; ///< Index in the constant pool

		OPINFO_PARTIAL_DECL_OVERRIDE(invokedynamic)
	};

	class OPINFOnew : public InstructionInfo {
	public:
		u2 index; ///< Index in the constant pool to the class reference

		OPINFO_PARTIAL_DECL_OVERRIDE(new)
	};

	class OPINFOnewarray : public InstructionInfo {
	public:
		u1 atype; ///< Code that indicates the type of array to create

		OPINFO_PARTIAL_DECL_OVERRIDE(newarray)
	};

	class OPINFOanewarray : public InstructionInfo {
	public:
		u2 index; ///< index of the reference to the class that identifies the component type

		OPINFO_PARTIAL_DECL_OVERRIDE(anewarray)
	};

	OPINFO_DECL(arraylength)
	OPINFO_DECL(athrow)

	class OPINFOcheckcast : public InstructionInfo {
	public:
		u2 index; ///< Index of the class reference in the constant pool

		OPINFO_PARTIAL_DECL_OVERRIDE(checkcast)
	};

	class OPINFOinstanceof : public InstructionInfo {
	public:
		u2 index; ///< Index to the class reference in the constant pool

		OPINFO_PARTIAL_DECL_OVERRIDE(instanceof)
	};

	OPINFO_DECL(monitorenter)
	OPINFO_DECL(monitorexit)

	//Extended 0xC4,196 -> 0xC9,201
	class OPINFOwide : public InstructionInfo {
	public:
		u1 targetOpcode; //> the opcode to execute wide
		u2 index;        //> index
		u2 countbyte;    //> count byte

		OPINFO_PARTIAL_DECL_OVERRIDE(wide)
	};

	class OPINFOmultianewarray : public InstructionInfo {
	public:
		u2 index;      ///> Index in the constant pool
		u1 dimensions; ///> Number of dimensions of the array to be created, must be greater than or equal to 1

		OPINFO_PARTIAL_DECL_OVERRIDE(multianewarray)
	};

	class OPINFOifnull : public InstructionInfo {
	public:
		i2 branchoffset; ///< Offset to the next instruction

		OPINFO_PARTIAL_DECL_OVERRIDE(ifnull)
	};

	class OPINFOifnonnull : public InstructionInfo {
	public:
		i2 branchoffset; ///< Offset to the next instruction

		OPINFO_PARTIAL_DECL_OVERRIDE(ifnonnull)
	};

	class OPINFOgoto_w : public InstructionInfo {
	public:
		i4 branchoffset; ///< Offset to the next instruction

		OPINFO_PARTIAL_DECL_OVERRIDE(goto_w)
	};

	class OPINFOjsr_w : public InstructionInfo {
	public:
		i4 branchoffset; ///< Offset to a subroutine

		OPINFO_PARTIAL_DECL_OVERRIDE(jsr_w)
	};


	//Reserved 0xca,202 -> 0xff,255
	/**
	 * This opcode have been reserved and may be used only inside a
	 * Java Virtual Machine implementation. It cannot appear in
	 * valid class files. In this case, we didn't implemented this
	 * opcode.
	 */
	OPINFO_DECL(breakpoint)
	/**
	 * This opcode have been reserved and may be used only inside a
	 * Java Virtual Machine implementation. It cannot appear in
	 * valid class files. In this case, we didn't implemented this
	 * opcode.
	 */
	OPINFO_DECL(impdep1)
	/**
	 * This opcode have been reserved and may be used only inside a
	 * Java Virtual Machine implementation. It cannot appear in
	 * valid class files. In this case, we didn't implemented this
	 * opcode.
	 */
	OPINFO_DECL(impdep2)
};
