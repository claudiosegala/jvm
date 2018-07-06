#pragma once

#include "base.hpp"
#include "frames_stack.hpp"
#include "class_loader/class_loader.hpp"

namespace jvm {

	struct ClassAndMethod {
		ClassLoader& classLoader;
		MethodInfo& method;
		ClassAndMethod(ClassLoader& classLoader, MethodInfo& method) : classLoader(classLoader), method(method) {}
	};

	class Engine;

	typedef void (Engine::*Execution) (InstructionInfo *);

	/**
	 * Class that run a single thread virtual machine
	 */
	class Engine {
	public:
		/**
		 * Constructor
		 * @params address to the main .classes
		 */
		Engine(ClassLoader&);

		/**
		 * Engine Execution.
		 * @see execute()
		 */
		void execute();

	private:

		std::vector<Execution> exec;	///> The set of instantiators to the instruction

		std::unordered_map<std::string, ClassLoader> JavaClasses;	///> Reference to .class that will be executed first

		std::string Entry_class_name;	///> Name of .class that will be executed first

		FramesStack fs;	///> Frame Stack

		std::vector<void*> mem;	///> Engine heap mem

		//> Method Area
		// TODO: understand

		/**
		 * Given an opcode, it will get the right instruction
		 * @params u1 The opcode
		 * @return the shared pointer to the instruction
		 */
		Execution getExecutor(u1);

		/**
		 * Run the clinit method
		 */
		void run_clinit();

		/**
		 * Run the init method
		 */
		void run_init();

		ClassAndMethod findMethod(CP_Methodref &ref);

		ClassLoader& findClass(CP_Class &classInfo);

		/**
		 * Get the arguments of a method based on a descriptor
		 * @return the arguments
		 */
		u4 getArgumentsSize(std::string);

		/**
		 * Nothing
		 */
		void exec_nop (InstructionInfo *);

		/**
		 * Push the null object reference onto the operand stack.
		 */
		void exec_aconst_null (InstructionInfo *);

		/**
		 *Push the int constant <i> (-1, 0, 1, 2, 3, 4 or 5) onto the operand stack.
		 */
		void exec_iconst_m1 (InstructionInfo *);

		/**
		 * Push the int constant <i> (-1, 0, 1, 2, 3, 4 or 5) onto the operand stack.
		 */
		void exec_iconst_0 (InstructionInfo *);

		/**
		 * Push the int constant <i> (-1, 0, 1, 2, 3, 4 or 5) onto the operand stack.
		 */
		void exec_iconst_1 (InstructionInfo *);

		/**
		 * Push the int constant <i> (-1, 0, 1, 2, 3, 4 or 5) onto the operand stack.
		 */
		void exec_iconst_2 (InstructionInfo *);

		/**
		 *  Push the int constant <i> (-1, 0, 1, 2, 3, 4 or 5) onto the operand stack.
		 */
		void exec_iconst_3 (InstructionInfo *);

		/**
		 * Push the int constant <i> (-1, 0, 1, 2, 3, 4 or 5) onto the operand stack.
		 */
		void exec_iconst_4 (InstructionInfo *);

		/**
		 * Push the int constant <i> (-1, 0, 1, 2, 3, 4 or 5) onto the operand stack.
		 */
		void exec_iconst_5 (InstructionInfo *);

		/**
		 * Push the long constant <l> (0 or 1) onto the operand stack.
		 */
		void exec_lconst_0 (InstructionInfo *);

		/**
		 *Push the long constant <l> (0 or 1) onto the operand stack.
		 */
		void exec_lconst_1 (InstructionInfo *);

		/**
		 * Push the float constant <f> (0.0, 1.0, or 2.0) onto the operand stack.
		 */
		void exec_fconst_0 (InstructionInfo *);

		/**
		 * Push the float constant <f> (0.0, 1.0, or 2.0) onto the operand stack.
		 */
		void exec_fconst_1 (InstructionInfo *);

		/**
		 * Push the float constant <f> (0.0, 1.0, or 2.0) onto the operand stack.
		 */
		void exec_fconst_2 (InstructionInfo *);

		/**
		 * Push the double constant <d> (0.0 or 1.0) onto the operand stack.
		 */
		void exec_dconst_0 (InstructionInfo *);

		/**
		 * Push the double constant <d> (0.0 or 1.0) onto the operand stack.
		 */
		void exec_dconst_1 (InstructionInfo *);

		/**
		 * Push byte
		 */
		void exec_bipush (InstructionInfo *);

		/**
		 * Push short
		 */
		void exec_sipush (InstructionInfo *);

		/**
		 * Push item from run-time constant pool
		 */
		void exec_ldc (InstructionInfo *);

		/**
		 * Push item from run-time constant pool (wide index) (byte1 <<8 | byte2) são juntos em 16 bits para 1 index so
		 */
		void exec_ldc_w (InstructionInfo *);

		/**
		 * Push long or double from run-time constant pool (wide index)
		 */
		void exec_ldc2_w (InstructionInfo *);

		/**
		 * Load int from local variable push to stack
		 */
		void exec_iload (InstructionInfo *);

		/**
		 * Load long from local variable
		 */
		void exec_lload (InstructionInfo *);

		/**
		 * Load float from local variable
		 */
		void exec_fload (InstructionInfo *);

		/**
		 * Load double from local variable
		 */
		void exec_dload (InstructionInfo *);

		/**
		 * Load reference from local variable
		 */
		void exec_aload (InstructionInfo *);

		/**
		 * Load int from local variable index 1
		 */
		void exec_iload_0 (InstructionInfo *);

		/**
		 * Load int from local variable index 2
		 */
		void exec_iload_1 (InstructionInfo *);

		/**
		 * Load int from local variable index 3
		 */
		void exec_iload_2 (InstructionInfo *);

		/**
		 * Load int from local variable index 4
		 */
		void exec_iload_3 (InstructionInfo *);

		/**
		 * Load long from local variable from index 1
		 */
		void exec_lload_0 (InstructionInfo *);

		/**
		 * Load long from local variable from index 2
		 */
		void exec_lload_1 (InstructionInfo *);

		/**
		 * Load long from local variable from index 3
		 */
		void exec_lload_2 (InstructionInfo *);

		/**
		 * Load long from local variable from index 4
		 */
		void exec_lload_3 (InstructionInfo *);

		/**
		 * Load float from local variable index 1
		 */
		void exec_fload_0 (InstructionInfo *);

		/**
		 * Load float from local variable index 2
		 */
		void exec_fload_1 (InstructionInfo *);

		/**
		 * Load float from local variable index 3
		 */
		void exec_fload_2 (InstructionInfo *);

		/**
		 * Load float from local variable index 4
		 */
		void exec_fload_3 (InstructionInfo *);

		/**
		 * Load float from local variable index 1
		 */
		void exec_dload_0 (InstructionInfo *);

		/**
		 * Load float from local variable index 2
		 */
		void exec_dload_1 (InstructionInfo *);

		/**
		 * Load float from local variable index 3
		 */
		void exec_dload_2 (InstructionInfo *);

		/**
		 * Load float from local variable index 4
		 */
		void exec_dload_3 (InstructionInfo *);

		/**
		 * The execution of this instruction
		 */
		void exec_aload_0 (InstructionInfo *);

		/**
		 * The execution of this instruction
		 */
		void exec_aload_1 (InstructionInfo *);

		/**
		 * The execution of this instruction
		 */
		void exec_aload_2 (InstructionInfo *);

		/**
		 * The execution of this instruction
		 */
		void exec_aload_3 (InstructionInfo *);

		/**
		 * The execution of this instruction
		 */
		void exec_iaload (InstructionInfo *);

		/**
		 * The execution of this instruction
		 */
		void exec_laload (InstructionInfo *);

		/**
		 * Load float from array ,arrayref and index poped from stack acquired value is pushed onto the stack
		 */
		void exec_faload (InstructionInfo *);

		/**
		 * Load double from array arrayref,index
		 */
		void exec_daload (InstructionInfo *);

		/**
		 * Load reference from array arrayref,index type reference
		 */
		void exec_aaload (InstructionInfo *);

		/**
		 * Load byte or boolean from array ,arrayref,index
		 */
		void exec_baload (InstructionInfo *);

		/**
		 * Load char from array ,arrayref,index
		 */
		void exec_caload (InstructionInfo *);

		/**
		 * Load short from array arrayref,index
		 */
		void exec_saload (InstructionInfo *);

		/**
		 * Store int into local variable pop from stack
		 */
		void exec_istore (InstructionInfo *);

		/**
		 * Store long into local variable
		 */
		void exec_lstore (InstructionInfo *);

		/**
		 * Store float into local variable
		 */
		void exec_fstore (InstructionInfo *);

		/**
		 * Store double into local variable
		 */
		void exec_dstore (InstructionInfo *);

		/**
		 * Store reference into local variable
		 */
		void exec_astore (InstructionInfo *);

		/**
		 * Store int into local variable index 1
		 */
		void exec_istore_0 (InstructionInfo *);

		/**
		 * Store int into local variable index 2
		 */
		void exec_istore_1 (InstructionInfo *);

		/**
		 * Store int into local variable index 3
		 */
		void exec_istore_2 (InstructionInfo *);

		/**
		 * Store int into local variable index 4
		 */
		void exec_istore_3 (InstructionInfo *);

		/**
		 * Store long into local variable index 1
		 */
		void exec_lstore_0 (InstructionInfo *);

		/**
		 * Store long into local variable index 2
		 */
		void exec_lstore_1 (InstructionInfo *);

		/**
		 * Store long into local variable index 3
		 */
		void exec_lstore_2 (InstructionInfo *);

		/**
		 * Store long into local variable index 4
		 */
		void exec_lstore_3 (InstructionInfo *);

		/**
		 * Store float into local variable index 1
		 */
		void exec_fstore_0 (InstructionInfo *);

		/**
		 * Store float into local variable index 2
		 */
		void exec_fstore_1 (InstructionInfo *);

		/**
		 * Store float into local variable index 3
		 */
		void exec_fstore_2 (InstructionInfo *);

		/**
		 * Store float into local variable index 4
		 */
		void exec_fstore_3 (InstructionInfo *);

		/**
		 * Store double into local variable index 1
		 */
		void exec_dstore_0 (InstructionInfo *);

		/**
		 * Store double into local variable index 2
		 */
		void exec_dstore_1 (InstructionInfo *);

		/**
		 * Store double into local variable index 3
		 */
		void exec_dstore_2 (InstructionInfo *);

		/**
		 * Store double into local variable index 4
		 */
		void exec_dstore_3 (InstructionInfo *);

		/**
		 * Store reference into local variable index 1
		 */
		void exec_astore_0 (InstructionInfo *);

		/**
		 * Store reference into local variable index 2
		 */
		void exec_astore_1 (InstructionInfo *);

		/**
		 * Store reference into local variable index 3
		 */
		void exec_astore_2 (InstructionInfo *);

		/**
		 * Store reference into local variable index 4
		 */
		void exec_astore_3 (InstructionInfo *);

		/**
		 * Store into int array opstack -> arrayref,index,value
		 */
		void exec_iastore (InstructionInfo *);

		/**
		 * Store into long array ,The arrayref must be of type reference and must refer to an array whose components are of type long. The index must be of type int
		 */
		void exec_lastore (InstructionInfo *);

		/**
		 * Store into float array arrayref, index, value →
		 */
		void exec_fastore (InstructionInfo *);

		/**
		 * Store into double array  arrayref, index, value →
		 */
		void exec_dastore (InstructionInfo *);

		/**
		 * Store into reference array  arrayref, index, value →
		 */
		void exec_aastore (InstructionInfo *);

		/**
		 * Store into byte or boolean array , arrayref, index, value →
		 */
		void exec_bastore (InstructionInfo *);

		/**
		 * Store into char array ,The arrayref must be of type reference and must refer to an array whose components are of type char. The index and the value must both be of type int
		 */
		void exec_castore (InstructionInfo *);

		/**
		 * Store into short array
		 */
		void exec_sastore (InstructionInfo *);

		/**
		 * Pop the top operand stack value
		 */
		void exec_pop (InstructionInfo *);

		/**
		 * Pop the top one or two operand stack values
		 */
		void exec_pop2 (InstructionInfo *);

		/**
		 * Duplicate the top operand stack value
		 */
		void exec_dup (InstructionInfo *);

		/**
		 * Duplicate the top operand stack value and insert two values down ,..., value2, value1 → ..., value1, value2, value1
		 */
		void exec_dup_x1 (InstructionInfo *);

		/**
		 * Duplicate the top operand stack value and insert two or three values down ..., value3, value2, value1 → ..., value1, value3, value2, value1
		 */
		void exec_dup_x2 (InstructionInfo *);

		/**
		 * Duplicate the top one or two operand stack values
		 */
		void exec_dup2 (InstructionInfo *);

		/**
		 * Duplicate the top one or two operand stack values and insert two or three values down
		 */
		void exec_dup2_x1 (InstructionInfo *);

		/**
		 * Duplicate the top one or two operand stack values and insert two, three, or four values down
		 */
		void exec_dup2_x2 (InstructionInfo *);

		/**
		 * Swap the top two operand stack values
		 */
		void exec_swap (InstructionInfo *);

		/**
		 * Swap the top two operand stack values
		 */
		void exec_iadd (InstructionInfo *);

		/**
		 * Add long
		 */
		void exec_ladd (InstructionInfo *);

		/**
		 * Add float
		 */
		void exec_fadd (InstructionInfo *);

		/**
		 * Add double
		 */
		void exec_dadd (InstructionInfo *);

		/**
		 * Subtract int
		 */
		void exec_isub (InstructionInfo *);

		/**
		 * Subtract long
		 */
		void exec_lsub (InstructionInfo *);

		/**
		 * Subtract float
		 */
		void exec_fsub (InstructionInfo *);

		/**
		 * Subtract double
		 */
		void exec_dsub (InstructionInfo *);

		/**
		 * Multiply int
		 */
		void exec_imul (InstructionInfo *);

		/**
		 * Multiply long
		 */
		void exec_lmul (InstructionInfo *);

		/**
		 * Multiply float
		 */
		void exec_fmul (InstructionInfo *);

		/**
		 * Multiply double
		 */
		void exec_dmul (InstructionInfo *);

		/**
		 * Divide int
		 */
		void exec_idiv (InstructionInfo *);

		/**
		 * Divide long
		 */
		void exec_ldiv (InstructionInfo *);

		/**
		 * Divide float
		 */
		void exec_fdiv (InstructionInfo *);

		/**
		 * Divide double
		 */
		void exec_ddiv (InstructionInfo *);

		/**
		 * Remainder int
		 */
		void exec_irem (InstructionInfo *);

		/**
		 * Remainder long
		 */
		void exec_lrem (InstructionInfo *);

		/**
		 * Remainder float
		 */
		void exec_frem (InstructionInfo *);

		/**
		 * Remainder double
		 */
		void exec_drem (InstructionInfo *);

		/**
		 * Negate int
		 */
		void exec_ineg (InstructionInfo *);

		/**
		 * Negate long
		 */
		void exec_lneg (InstructionInfo *);

		/**
		 * Negate float
		 */
		void exec_fneg (InstructionInfo *);

		/**
		 * Negate double
		 */
		void exec_dneg (InstructionInfo *);

		/**
		 * Shift left int  ,shift value1 by low 5 bits of value2
		 */
		void exec_ishl (InstructionInfo *);

		/**
		 * Shift left long ,shift value1 by low 5 bits of value2
		 */
		void exec_lshl (InstructionInfo *);

		/**
		 * Arithmetic shift right int,shift value1 by low 5 bits of value2
		 */
		void exec_ishr (InstructionInfo *);

		/**
		 * Arithmetic shift right long, shift value1 by low 5 bits of value2
		 */
		void exec_lshr (InstructionInfo *);

		/**
		 * Logical shift right int, shift value1 by low 5 bits of value2
		 */
		void exec_iushr (InstructionInfo *);

		/**
		 * Logical shift right long, shift value1 by low 6 bits of value2
		 */
		void exec_lushr (InstructionInfo *);

		/**
		 * Boolean AND int
		 */
		void exec_iand (InstructionInfo *);

		/**
		 * Boolean AND long
		 */
		void exec_land (InstructionInfo *);

		/**
		 *  Boolean OR int ,  ..., value1, value2 → ..., result
		 */
		void exec_ior (InstructionInfo *);

		/**
		 * Boolean OR long
		 */
		void exec_lor (InstructionInfo *);

		/**
		 * Boolean XOR int
		 */
		void exec_ixor (InstructionInfo *);

		/**
		 * Boolean XOR long
		 */
		void exec_lxor (InstructionInfo *);

		/**
		 * Increment local variable by constant
		 */
		void exec_iinc (InstructionInfo *);

		/**
		 * Convert int to long
		 */
		void exec_i2l (InstructionInfo *);

		/**
		 * Convert int to float
		 */
		void exec_i2f (InstructionInfo *);

		/**
		 * Convert int to double
		 */
		void exec_i2d (InstructionInfo *);

		/**
		 * Convert long to int
		 */
		void exec_l2i (InstructionInfo *);

		/**
		 * Convert long to float
		 */
		void exec_l2f (InstructionInfo *);

		/**
		 * Convert long to double
		 */
		void exec_l2d (InstructionInfo *);

		/**
		 * Convert float to int
		 */
		void exec_f2i (InstructionInfo *);

		/**
		 * Convert float to long
		 */
		void exec_f2l (InstructionInfo *);

		/**
		 * Convert float to double
		 */
		void exec_f2d (InstructionInfo *);

		/**
		 * Convert double to int
		 */
		void exec_d2i (InstructionInfo *);

		/**
		 * Convert double to long
		 */
		void exec_d2l (InstructionInfo *);

		/**
		 * Convert double to float
		 */
		void exec_d2f (InstructionInfo *);

		/**
		 * Convert int to byte
		 */
		void exec_i2b (InstructionInfo *);

		/**
		 * Convert int to char
		 */
		void exec_i2c (InstructionInfo *);

		/**
		 * Convert int to short
		 */
		void exec_i2s (InstructionInfo *);

		/**
		 * Compare long , if value1 > value2 push 1 , if value2 > value1 push -1 if value1 == value2 push 0
		 */
		void exec_lcmp (InstructionInfo *);

		/**
		 * Compare float, if value1 > value2 push 1 , if value2 > value1 push -1 if value1 == value2 push 0
		 */
		void exec_fcmpl (InstructionInfo *);

		/**
		 * Compare float, if value1 > value2 push 1 , if value2 > value1 push -1 if value1 == value2 push 0
		 */
		void exec_fcmpg (InstructionInfo *);

		/**
		 * Compare double , if value1 > value2 push 1 , if value2 > value1 push -1 if value1 == value2 push 0
		 */
		void exec_dcmpl (InstructionInfo *);

		/**
		 * Compare double ,if value1 > value2 push 1 , if value2 > value1 push -1 if value1 == value2 push 0
		 */
		void exec_dcmpg (InstructionInfo *);

		/**
		 * Branch if int comparison with zero succeeds , == 0
		 */
		void exec_ifeq (InstructionInfo *);

		/**
		 * Branch if int comparison with zero succeeds , != 0
		 */
		void exec_ifne (InstructionInfo *);

		/**
		 * Branch if int comparison with zero succeeds , < 0
		 */
		void exec_iflt (InstructionInfo *);

		/**
		 * Branch if int comparison with zero succeeds , >= 0
		 */
		void exec_ifge (InstructionInfo *);

		/**
		 * Branch if int comparison with zero succeeds , >0
		 */
		void exec_ifgt (InstructionInfo *);

		/**
		 * Branch if int comparison with zero succeeds , >= 0
		 */
		void exec_ifle (InstructionInfo *);

		/**
		 *  Branch if int comparison succeeds, value1 = value2
		 */
		void exec_if_icmpeq (InstructionInfo *);

		/**
		 * Branch if int comparison succeeds, value1 != value2
		 */
		void exec_if_icmpne (InstructionInfo *);

		/**
		 * Branch if int comparison succeeds, value1 < value2
		 */
		void exec_if_icmplt (InstructionInfo *);

		/**
		 * Branch if int comparison succeeds, value1 >= value2
		 */
		void exec_if_icmpge (InstructionInfo *);

		/**
		 * Branch if int comparison succeeds, value1 > value2
		 */
		void exec_if_icmpgt (InstructionInfo *);

		/**
		 * Branch if int comparison succeeds,value1 <= value2
		 */
		void exec_if_icmple (InstructionInfo *);

		/**
		 * Branch if reference comparison succeeds , value1 = value2, ref
		 */
		void exec_if_acmpeq (InstructionInfo *);

		/**
		 * Branch if reference comparison succeeds  value1 != value2, ref
		 */
		void exec_if_acmpne (InstructionInfo *);

		/**
		 * Branch always
		 */
		void exec_goto (InstructionInfo *);

		/**
		 * Jump subroutine
		 */
		void exec_jsr (InstructionInfo *);

		/**
		 * Return from subroutine
		 */
		void exec_ret (InstructionInfo *);

		/**
		 * Access jump table by index and jump
		 */
		void exec_tableswitch (InstructionInfo *);

		/**
		 * Access jump table by key match and jump
		 */
		void exec_lookupswitch (InstructionInfo *);

		/**
		 * Return int from method
		 */
		void exec_ireturn (InstructionInfo *);

		/**
		 * Return long from method
		 */
		void exec_lreturn (InstructionInfo *);

		/**
		 * Return long from method
		 */
		void exec_freturn (InstructionInfo *);

		/**
		 * Return double from method
		 */
		void exec_dreturn (InstructionInfo *);

		/**
		 * Return reference from method
		 */
		void exec_areturn (InstructionInfo *);

		/**
		 * Return void from method
		 */
		void exec_return (InstructionInfo *);

		/**
		 * Get static field from class
		 */
		void exec_getstatic (InstructionInfo *);

		/**
		 * Get static field from class
		 */
		void exec_putstatic (InstructionInfo *);

		/**
		 * Fetch field from object
		 */
		void exec_getfield (InstructionInfo *);

		/**
		 * Set field in object
		 */
		void exec_putfield (InstructionInfo *);

		/**
		 * Invoke instance method; dispatch based on class , constant pool
		 */
		void exec_invokevirtual (InstructionInfo *);

		/**
		 * Invoke instance method; special handling for superclass, private, and instance initialization method invocations
		 */
		void exec_invokespecial (InstructionInfo *);

		/**
		 * Invoke a class (static) method
		 */
		void exec_invokestatic (InstructionInfo *);

		/**
		 * Invoke interface method
		 */
		void exec_invokeinterface (InstructionInfo *);

		/**
		 * Invoke dynamic method , indexbyte1 + indexbyte2 , 0 , 0
		 */
		void exec_invokedynamic (InstructionInfo *);

		/**
		 * Create new object
		 */
		void exec_new (InstructionInfo *);

		/**
		 * Create new array , 4 = boolean, 5 = char ,6 = float , 7 = double, 8 = byte, 9 = short ,10 = int , 11 = long
		 */
		void exec_newarray (InstructionInfo *);

		/**
		 * Create new array of reference , constant pool
		 */
		void exec_anewarray (InstructionInfo *);

		/**
		 * Get length of array
		 */
		void exec_arraylength (InstructionInfo *);

		/**
		 * Throw exception or error
		 */
		void exec_athrow (InstructionInfo *);

		/**
		 * Check whether object is of given type
		 */
		void exec_checkcast (InstructionInfo *);

		/**
		 * Determine if object is of given type
		 */
		void exec_instanceof (InstructionInfo *);

		/**
		 * Enter monitor for object
		 */
		void exec_monitorenter (InstructionInfo *);

		/**
		 * Exit monitor for object
		 */
		void exec_monitorexit (InstructionInfo *);

		/**
		 * Extend local variable index by additional bytes
		 */
		void exec_wide (InstructionInfo *);

		/**
		 * Create new multidimensional array
		 */
		void exec_multianewarray (InstructionInfo *);

		/**
		 * Branch if reference is null
		 */
		void exec_ifnull (InstructionInfo *);

		/**
		 * Branch if reference not null
		 */
		void exec_ifnonnull (InstructionInfo *);

		/**
		 * Branch always (wide index)
		 */
		void exec_goto_w (InstructionInfo *);

		/**
		 * Jump subroutine (wide index)
		 */
		void exec_jsr_w (InstructionInfo *);

		/**
		 * mnemonic breakpoint and is intended to be used by debuggers to implement breakpoints.
		 */
		void exec_breakpoint (InstructionInfo *);

		/**
		 * These instructions are intended to provide "back doors" or traps to implementation-specific functionality implemented in software and hardware, respectively
		 */
		void exec_impdep1 (InstructionInfo *);

		/**
		 * These instructions are intended to provide "back doors" or traps to implementation-specific functionality implemented in software and hardware, respectively
		 */
		void exec_impdep2 (InstructionInfo *);
	};

}
