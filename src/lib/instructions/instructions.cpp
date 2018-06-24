#include <string>
#include <iostream>
#include "instructions/instructions.hpp"

namespace jvm {

	// OpCode

	void OpCode::fill(Reader &reader) {

	}

	void OpCode::printToStream(std::ostream &os, std::string &prefix) {
		auto newPrefix = prefix + "\t";

		os << prefix << "Opcodes:" << std::endl;

		for (std::shared_ptr<Instruction>& ptr : *this) {
			auto instr = ptr.get();

			if (instr != nullptr) {
				instr->printToStream(os, newPrefix);
			}
		}
	}


	// nop

	nop::nop() {

	}

	void nop::execute() {

	}

	void nop::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string nop::getName () {
		return "nop";
	}


	// aconst_null

	aconst_null::aconst_null() {

	}

	void aconst_null::execute() {

	}

	void aconst_null::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string aconst_null::getName () {
		return "aconst_null";
	}


	// iconst_m1

	iconst_m1::iconst_m1() {

	}

	void iconst_m1::execute() {

	}

	void iconst_m1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string iconst_m1::getName () {
		return "iconst_m1";
	}


	// iconst_0

	iconst_0::iconst_0() {

	}

	void iconst_0::execute() {

	}

	void iconst_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string iconst_0::getName () {
		return "iconst_0";
	}


	// iconst_1

	iconst_1::iconst_1() {

	}

	void iconst_1::execute() {

	}

	void iconst_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string iconst_1::getName () {
		return "iconst_1";
	}


	// iconst_2

	iconst_2::iconst_2() {

	}

	void iconst_2::execute() {

	}

	void iconst_2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string iconst_2::getName () {
		return "iconst_2";
	}


	// iconst_3

	iconst_3::iconst_3() {

	}

	void iconst_3::execute() {

	}

	void iconst_3::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string iconst_3::getName () {
		return "iconst_3";
	}


	// iconst_4

	iconst_4::iconst_4() {

	}

	void iconst_4::execute() {

	}

	void iconst_4::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string iconst_4::getName () {
		return "iconst_4";
	}


	// iconst_5

	iconst_5::iconst_5() {

	}

	void iconst_5::execute() {

	}

	void iconst_5::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string iconst_5::getName () {
		return "iconst_5";
	}


	// lconst_0

	lconst_0::lconst_0() {

	}

	void lconst_0::execute() {

	}

	void lconst_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string lconst_0::getName () {
		return "lconst_0";
	}


	// lconst_1

	lconst_1::lconst_1() {

	}

	void lconst_1::execute() {

	}

	void lconst_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string lconst_1::getName () {
		return "lconst_1";
	}


	// fconst_0

	fconst_0::fconst_0() {

	}

	void fconst_0::execute() {

	}

	void fconst_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string fconst_0::getName () {
		return "fconst_0";
	}


	// fconst_1

	fconst_1::fconst_1() {

	}

	void fconst_1::execute() {

	}

	void fconst_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string fconst_1::getName () {
		return "fconst_1";
	}


	// fconst_2

	fconst_2::fconst_2() {

	}

	void fconst_2::execute() {

	}

	void fconst_2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string fconst_2::getName () {
		return "fconst_2";
	}


	// dconst_0

	dconst_0::dconst_0() {

	}

	void dconst_0::execute() {

	}

	void dconst_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string dconst_0::getName () {
		return "dconst_0";
	}


	// dconst_1

	dconst_1::dconst_1() {

	}

	void dconst_1::execute() {

	}

	void dconst_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string dconst_1::getName () {
		return "dconst_1";
	}


	// bipush

	bipush::bipush() {

	}

	void bipush::execute() {

	}

	void bipush::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string bipush::getName () {
		return "bipush";
	}


	// sipush

	sipush::sipush() {

	}

	void sipush::execute() {

	}

	void sipush::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string sipush::getName () {
		return "sipush";
	}


	// ldc

	ldc::ldc() {

	}

	void ldc::execute() {

	}

	void ldc::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string ldc::getName () {
		return "ldc";
	}


	// ldc_w

	ldc_w::ldc_w() {

	}

	void ldc_w::execute() {

	}

	void ldc_w::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string ldc_w::getName () {
		return "ldc_w";
	}


	// ldc2_w

	ldc2_w::ldc2_w() {

	}

	void ldc2_w::execute() {

	}

	void ldc2_w::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string ldc2_w::getName () {
		return "ldc2_w";
	}


	// iload

	iload::iload() {

	}

	void iload::execute() {

	}

	void iload::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string iload::getName () {
		return "iload";
	}


	// lload

	lload::lload() {

	}

	void lload::execute() {

	}

	void lload::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string lload::getName () {
		return "lload";
	}


	// fload

	fload::fload() {

	}

	void fload::execute() {

	}

	void fload::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string fload::getName () {
		return "fload";
	}


	// dload

	dload::dload() {

	}

	void dload::execute() {

	}

	void dload::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string dload::getName () {
		return "dload";
	}


	// aload

	aload::aload() {

	}

	void aload::execute() {

	}

	void aload::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string aload::getName () {
		return "aload";
	}


	// iload_0

	iload_0::iload_0() {

	}

	void iload_0::execute() {

	}

	void iload_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string iload_0::getName () {
		return "iload_0";
	}


	// iload_1

	iload_1::iload_1() {

	}

	void iload_1::execute() {

	}

	void iload_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string iload_1::getName () {
		return "iload_1";
	}


	// iload_2

	iload_2::iload_2() {

	}

	void iload_2::execute() {

	}

	void iload_2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string iload_2::getName () {
		return "iload_2";
	}


	// iload_3

	iload_3::iload_3() {

	}

	void iload_3::execute() {

	}

	void iload_3::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string iload_3::getName () {
		return "iload_3";
	}


	// lload_0

	lload_0::lload_0() {

	}

	void lload_0::execute() {

	}

	void lload_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string lload_0::getName () {
		return "lload_0";
	}


	// lload_1

	lload_1::lload_1() {

	}

	void lload_1::execute() {

	}

	void lload_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string lload_1::getName () {
		return "lload_1";
	}


	// lload_2

	lload_2::lload_2() {

	}

	void lload_2::execute() {

	}

	void lload_2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string lload_2::getName () {
		return "lload_2";
	}


	// lload_3

	lload_3::lload_3() {

	}

	void lload_3::execute() {

	}

	void lload_3::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string lload_3::getName () {
		return "lload_3";
	}


	// fload_0

	fload_0::fload_0() {

	}

	void fload_0::execute() {

	}

	void fload_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string fload_0::getName () {
		return "fload_0";
	}


	// fload_1

	fload_1::fload_1() {

	}

	void fload_1::execute() {

	}

	void fload_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string fload_1::getName () {
		return "fload_1";
	}


	// fload_2

	fload_2::fload_2() {

	}

	void fload_2::execute() {

	}

	void fload_2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string fload_2::getName () {
		return "fload_2";
	}


	// fload_3

	fload_3::fload_3() {

	}

	void fload_3::execute() {

	}

	void fload_3::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string fload_3::getName () {
		return "fload_3";
	}


	// dload_0

	dload_0::dload_0() {

	}

	void dload_0::execute() {

	}

	void dload_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string dload_0::getName () {
		return "dload_0";
	}


	// dload_1

	dload_1::dload_1() {

	}

	void dload_1::execute() {

	}

	void dload_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string dload_1::getName () {
		return "dload_1";
	}


	// dload_2

	dload_2::dload_2() {

	}

	void dload_2::execute() {

	}

	void dload_2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string dload_2::getName () {
		return "dload_2";
	}


	// dload_3

	dload_3::dload_3() {

	}

	void dload_3::execute() {

	}

	void dload_3::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string dload_3::getName () {
		return "dload_3";
	}


	// aload_0

	aload_0::aload_0() {

	}

	void aload_0::execute() {

	}

	void aload_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string aload_0::getName () {
		return "aload_0";
	}


	// aload_1

	aload_1::aload_1() {

	}

	void aload_1::execute() {

	}

	void aload_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string aload_1::getName () {
		return "aload_1";
	}


	// aload_2

	aload_2::aload_2() {

	}

	void aload_2::execute() {

	}

	void aload_2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string aload_2::getName () {
		return "aload_2";
	}


	// aload_3

	aload_3::aload_3() {

	}

	void aload_3::execute() {

	}

	void aload_3::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string aload_3::getName () {
		return "aload_3";
	}


	// iaload

	iaload::iaload() {

	}

	void iaload::execute() {

	}

	void iaload::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string iaload::getName () {
		return "iaload";
	}


	// laload

	laload::laload() {

	}

	void laload::execute() {

	}

	void laload::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string laload::getName () {
		return "laload";
	}


	// faload

	faload::faload() {

	}

	void faload::execute() {

	}

	void faload::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string faload::getName () {
		return "faload";
	}


	// daload

	daload::daload() {

	}

	void daload::execute() {

	}

	void daload::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string daload::getName () {
		return "daload";
	}


	// aaload

	aaload::aaload() {

	}

	void aaload::execute() {

	}

	void aaload::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string aaload::getName () {
		return "aaload";
	}


	// baload

	baload::baload() {

	}

	void baload::execute() {

	}

	void baload::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string baload::getName () {
		return "baload";
	}


	// caload

	caload::caload() {

	}

	void caload::execute() {

	}

	void caload::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string caload::getName () {
		return "caload";
	}


	// saload

	saload::saload() {

	}

	void saload::execute() {

	}

	void saload::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string saload::getName () {
		return "saload";
	}


	// istore

	istore::istore() {

	}

	void istore::execute() {

	}

	void istore::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string istore::getName () {
		return "istore";
	}


	// lstore

	lstore::lstore() {

	}

	void lstore::execute() {

	}

	void lstore::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string lstore::getName () {
		return "lstore";
	}


	// fstore

	fstore::fstore() {

	}

	void fstore::execute() {

	}

	void fstore::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string fstore::getName () {
		return "fstore";
	}


	// dstore

	dstore::dstore() {

	}

	void dstore::execute() {

	}

	void dstore::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string dstore::getName () {
		return "dstore";
	}


	// astore

	astore::astore() {

	}

	void astore::execute() {

	}

	void astore::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string astore::getName () {
		return "astore";
	}


	// istore_0

	istore_0::istore_0() {

	}

	void istore_0::execute() {

	}

	void istore_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string istore_0::getName () {
		return "istore_0";
	}


	// istore_1

	istore_1::istore_1() {

	}

	void istore_1::execute() {

	}

	void istore_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string istore_1::getName () {
		return "istore_1";
	}


	// istore_2

	istore_2::istore_2() {

	}

	void istore_2::execute() {

	}

	void istore_2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string istore_2::getName () {
		return "istore_2";
	}


	// istore_3

	istore_3::istore_3() {

	}

	void istore_3::execute() {

	}

	void istore_3::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string istore_3::getName () {
		return "istore_3";
	}


	// lstore_0

	lstore_0::lstore_0() {

	}

	void lstore_0::execute() {

	}

	void lstore_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string lstore_0::getName () {
		return "lstore_0";
	}


	// lstore_1

	lstore_1::lstore_1() {

	}

	void lstore_1::execute() {

	}

	void lstore_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string lstore_1::getName () {
		return "lstore_1";
	}


	// lstore_2

	lstore_2::lstore_2() {

	}

	void lstore_2::execute() {

	}

	void lstore_2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string lstore_2::getName () {
		return "lstore_2";
	}


	// lstore_3

	lstore_3::lstore_3() {

	}

	void lstore_3::execute() {

	}

	void lstore_3::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string lstore_3::getName () {
		return "lstore_3";
	}


	// fstore_0

	fstore_0::fstore_0() {

	}

	void fstore_0::execute() {

	}

	void fstore_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string fstore_0::getName () {
		return "fstore_0";
	}


	// fstore_1

	fstore_1::fstore_1() {

	}

	void fstore_1::execute() {

	}

	void fstore_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string fstore_1::getName () {
		return "fstore_1";
	}


	// fstore_2

	fstore_2::fstore_2() {

	}

	void fstore_2::execute() {

	}

	void fstore_2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string fstore_2::getName () {
		return "fstore_2";
	}


	// fstore_3

	fstore_3::fstore_3() {

	}

	void fstore_3::execute() {

	}

	void fstore_3::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string fstore_3::getName () {
		return "fstore_3";
	}


	// dstore_0

	dstore_0::dstore_0() {

	}

	void dstore_0::execute() {

	}

	void dstore_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string dstore_0::getName () {
		return "dstore_0";
	}


	// dstore_1

	dstore_1::dstore_1() {

	}

	void dstore_1::execute() {

	}

	void dstore_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string dstore_1::getName () {
		return "dstore_1";
	}


	// dstore_2

	dstore_2::dstore_2() {

	}

	void dstore_2::execute() {

	}

	void dstore_2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string dstore_2::getName () {
		return "dstore_2";
	}


	// dstore_3

	dstore_3::dstore_3() {

	}

	void dstore_3::execute() {

	}

	void dstore_3::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string dstore_3::getName () {
		return "dstore_3";
	}


	// astore_0

	astore_0::astore_0() {

	}

	void astore_0::execute() {

	}

	void astore_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string astore_0::getName () {
		return "astore_0";
	}


	// astore_1

	astore_1::astore_1() {

	}

	void astore_1::execute() {

	}

	void astore_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string astore_1::getName () {
		return "astore_1";
	}


	// astore_2

	astore_2::astore_2() {

	}

	void astore_2::execute() {

	}

	void astore_2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string astore_2::getName () {
		return "astore_2";
	}


	// astore_3

	astore_3::astore_3() {

	}

	void astore_3::execute() {

	}

	void astore_3::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string astore_3::getName () {
		return "astore_3";
	}


	// iastore

	iastore::iastore() {

	}

	void iastore::execute() {

	}

	void iastore::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string iastore::getName () {
		return "iastore";
	}


	// lastore

	lastore::lastore() {

	}

	void lastore::execute() {

	}

	void lastore::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string lastore::getName () {
		return "lastore";
	}


	// fastore

	fastore::fastore() {

	}

	void fastore::execute() {

	}

	void fastore::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string fastore::getName () {
		return "fastore";
	}


	// dastore

	dastore::dastore() {

	}

	void dastore::execute() {

	}

	void dastore::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string dastore::getName () {
		return "dastore";
	}


	// aastore

	aastore::aastore() {

	}

	void aastore::execute() {

	}

	void aastore::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string aastore::getName () {
		return "aastore";
	}


	// bastore

	bastore::bastore() {

	}

	void bastore::execute() {

	}

	void bastore::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string bastore::getName () {
		return "bastore";
	}


	// castore

	castore::castore() {

	}

	void castore::execute() {

	}

	void castore::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string castore::getName () {
		return "castore";
	}


	// sastore

	sastore::sastore() {

	}

	void sastore::execute() {

	}

	void sastore::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string sastore::getName () {
		return "sastore";
	}


	// pop

	pop::pop() {

	}

	void pop::execute() {

	}

	void pop::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string pop::getName () {
		return "pop";
	}


	// pop2

	pop2::pop2() {

	}

	void pop2::execute() {

	}

	void pop2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string pop2::getName () {
		return "pop2";
	}


	// dup

	dup::dup() {

	}

	void dup::execute() {

	}

	void dup::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string dup::getName () {
		return "dup";
	}


	// dup_x1

	dup_x1::dup_x1() {

	}

	void dup_x1::execute() {

	}

	void dup_x1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string dup_x1::getName () {
		return "dup_x1";
	}


	// dup_x2

	dup_x2::dup_x2() {

	}

	void dup_x2::execute() {

	}

	void dup_x2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string dup_x2::getName () {
		return "dup_x2";
	}


	// dup2

	dup2::dup2() {

	}

	void dup2::execute() {

	}

	void dup2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string dup2::getName () {
		return "dup2";
	}


	// dup2_x1

	dup2_x1::dup2_x1() {

	}

	void dup2_x1::execute() {

	}

	void dup2_x1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string dup2_x1::getName () {
		return "dup2_x1";
	}


	// dup2_x2

	dup2_x2::dup2_x2() {

	}

	void dup2_x2::execute() {

	}

	void dup2_x2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string dup2_x2::getName () {
		return "dup2_x2";
	}


	// swap

	swap::swap() {

	}

	void swap::execute() {

	}

	void swap::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string swap::getName () {
		return "swap";
	}


	// iadd

	iadd::iadd() {

	}

	void iadd::execute() {

	}

	void iadd::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string iadd::getName () {
		return "iadd";
	}


	// ladd

	ladd::ladd() {

	}

	void ladd::execute() {

	}

	void ladd::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string ladd::getName () {
		return "ladd";
	}


	// fadd

	fadd::fadd() {

	}

	void fadd::execute() {

	}

	void fadd::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string fadd::getName () {
		return "fadd";
	}


	// dadd

	dadd::dadd() {

	}

	void dadd::execute() {

	}

	void dadd::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string dadd::getName () {
		return "dadd";
	}


	// isub

	isub::isub() {

	}

	void isub::execute() {

	}

	void isub::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string isub::getName () {
		return "isub";
	}


	// lsub

	lsub::lsub() {

	}

	void lsub::execute() {

	}

	void lsub::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string lsub::getName () {
		return "lsub";
	}


	// fsub

	fsub::fsub() {

	}

	void fsub::execute() {

	}

	void fsub::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string fsub::getName () {
		return "fsub";
	}


	// dsub

	dsub::dsub() {

	}

	void dsub::execute() {

	}

	void dsub::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string dsub::getName () {
		return "dsub";
	}


	// imul

	imul::imul() {

	}

	void imul::execute() {

	}

	void imul::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string imul::getName () {
		return "imul";
	}


	// lmul

	lmul::lmul() {

	}

	void lmul::execute() {

	}

	void lmul::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string lmul::getName () {
		return "lmul";
	}


	// fmul

	fmul::fmul() {

	}

	void fmul::execute() {

	}

	void fmul::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string fmul::getName () {
		return "fmul";
	}


	// dmul

	dmul::dmul() {

	}

	void dmul::execute() {

	}

	void dmul::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string dmul::getName () {
		return "dmul";
	}


	// idiv

	idiv::idiv() {

	}

	void idiv::execute() {

	}

	void idiv::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string idiv::getName () {
		return "idiv";
	}


	// ldiv

	ldiv::ldiv() {

	}

	void ldiv::execute() {

	}

	void ldiv::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string ldiv::getName () {
		return "ldiv";
	}


	// fdiv

	fdiv::fdiv() {

	}

	void fdiv::execute() {

	}

	void fdiv::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string fdiv::getName () {
		return "fdiv";
	}


	// ddiv

	ddiv::ddiv() {

	}

	void ddiv::execute() {

	}

	void ddiv::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string ddiv::getName () {
		return "ddiv";
	}


	// irem

	irem::irem() {

	}

	void irem::execute() {

	}

	void irem::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string irem::getName () {
		return "irem";
	}


	// lrem

	lrem::lrem() {

	}

	void lrem::execute() {

	}

	void lrem::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string lrem::getName () {
		return "lrem";
	}


	// frem

	frem::frem() {

	}

	void frem::execute() {

	}

	void frem::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string frem::getName () {
		return "frem";
	}


	// drem

	drem::drem() {

	}

	void drem::execute() {

	}

	void drem::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string drem::getName () {
		return "drem";
	}


	// ineg

	ineg::ineg() {

	}

	void ineg::execute() {

	}

	void ineg::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string ineg::getName () {
		return "ineg";
	}


	// lneg

	lneg::lneg() {

	}

	void lneg::execute() {

	}

	void lneg::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string lneg::getName () {
		return "lneg";
	}


	// fneg

	fneg::fneg() {

	}

	void fneg::execute() {

	}

	void fneg::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string fneg::getName () {
		return "fneg";
	}


	// dneg

	dneg::dneg() {

	}

	void dneg::execute() {

	}

	void dneg::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string dneg::getName () {
		return "dneg";
	}


	// ishl

	ishl::ishl() {

	}

	void ishl::execute() {

	}

	void ishl::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string ishl::getName () {
		return "ishl";
	}


	// lshl

	lshl::lshl() {

	}

	void lshl::execute() {

	}

	void lshl::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string lshl::getName () {
		return "lshl";
	}


	// ishr

	ishr::ishr() {

	}

	void ishr::execute() {

	}

	void ishr::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string ishr::getName () {
		return "ishr";
	}


	// lshr

	lshr::lshr() {

	}

	void lshr::execute() {

	}

	void lshr::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string lshr::getName () {
		return "lshr";
	}


	// iushr

	iushr::iushr() {

	}

	void iushr::execute() {

	}

	void iushr::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string iushr::getName () {
		return "iushr";
	}


	// lushr

	lushr::lushr() {

	}

	void lushr::execute() {

	}

	void lushr::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string lushr::getName () {
		return "lushr";
	}


	// iand

	iand::iand() {

	}

	void iand::execute() {

	}

	void iand::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string iand::getName () {
		return "iand";
	}


	// land

	land::land() {

	}

	void land::execute() {

	}

	void land::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string land::getName () {
		return "land";
	}


	// ior

	ior::ior() {

	}

	void ior::execute() {

	}

	void ior::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string ior::getName () {
		return "ior";
	}


	// lor

	lor::lor() {

	}

	void lor::execute() {

	}

	void lor::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string lor::getName () {
		return "lor";
	}


	// ixor

	ixor::ixor() {

	}

	void ixor::execute() {

	}

	void ixor::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string ixor::getName () {
		return "ixor";
	}


	// lxor

	lxor::lxor() {

	}

	void lxor::execute() {

	}

	void lxor::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string lxor::getName () {
		return "lxor";
	}


	// iinc

	iinc::iinc() {

	}

	void iinc::execute() {

	}

	void iinc::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string iinc::getName () {
		return "iinc";
	}


	// i2l

	i2l::i2l() {

	}

	void i2l::execute() {

	}

	void i2l::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string i2l::getName () {
		return "i2l";
	}


	// i2f

	i2f::i2f() {

	}

	void i2f::execute() {

	}

	void i2f::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string i2f::getName () {
		return "i2f";
	}


	// i2d

	i2d::i2d() {

	}

	void i2d::execute() {

	}

	void i2d::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string i2d::getName () {
		return "i2d";
	}


	// l2i

	l2i::l2i() {

	}

	void l2i::execute() {

	}

	void l2i::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string l2i::getName () {
		return "l2i";
	}


	// l2f

	l2f::l2f() {

	}

	void l2f::execute() {

	}

	void l2f::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string l2f::getName () {
		return "l2f";
	}


	// l2d

	l2d::l2d() {

	}

	void l2d::execute() {

	}

	void l2d::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string l2d::getName () {
		return "l2d";
	}


	// f2i

	f2i::f2i() {

	}

	void f2i::execute() {

	}

	void f2i::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string f2i::getName () {
		return "f2i";
	}


	// f2l

	f2l::f2l() {

	}

	void f2l::execute() {

	}

	void f2l::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string f2l::getName () {
		return "f2l";
	}


	// f2d

	f2d::f2d() {

	}

	void f2d::execute() {

	}

	void f2d::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string f2d::getName () {
		return "f2d";
	}


	// d2i

	d2i::d2i() {

	}

	void d2i::execute() {

	}

	void d2i::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string d2i::getName () {
		return "d2i";
	}


	// d2l

	d2l::d2l() {

	}

	void d2l::execute() {

	}

	void d2l::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string d2l::getName () {
		return "d2l";
	}


	// d2f

	d2f::d2f() {

	}

	void d2f::execute() {

	}

	void d2f::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string d2f::getName () {
		return "d2f";
	}


	// i2b

	i2b::i2b() {

	}

	void i2b::execute() {

	}

	void i2b::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string i2b::getName () {
		return "i2b";
	}


	// i2c

	i2c::i2c() {

	}

	void i2c::execute() {

	}

	void i2c::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string i2c::getName () {
		return "i2c";
	}


	// i2s

	i2s::i2s() {

	}

	void i2s::execute() {

	}

	void i2s::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string i2s::getName () {
		return "i2s";
	}


	// lcmp

	lcmp::lcmp() {

	}

	void lcmp::execute() {

	}

	void lcmp::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string lcmp::getName () {
		return "lcmp";
	}


	// fcmpl

	fcmpl::fcmpl() {

	}

	void fcmpl::execute() {

	}

	void fcmpl::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string fcmpl::getName () {
		return "fcmpl";
	}


	// fcmpg

	fcmpg::fcmpg() {

	}

	void fcmpg::execute() {

	}

	void fcmpg::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string fcmpg::getName () {
		return "fcmpg";
	}


	// dcmpl

	dcmpl::dcmpl() {

	}

	void dcmpl::execute() {

	}

	void dcmpl::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string dcmpl::getName () {
		return "dcmpl";
	}


	// dcmpg

	dcmpg::dcmpg() {

	}

	void dcmpg::execute() {

	}

	void dcmpg::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string dcmpg::getName () {
		return "dcmpg";
	}


	// ifeq

	ifeq::ifeq() {

	}

	void ifeq::execute() {

	}

	void ifeq::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string ifeq::getName () {
		return "ifeq";
	}


	// ifne

	ifne::ifne() {

	}

	void ifne::execute() {

	}

	void ifne::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string ifne::getName () {
		return "ifne";
	}


	// iflt

	iflt::iflt() {

	}

	void iflt::execute() {

	}

	void iflt::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string iflt::getName () {
		return "iflt";
	}


	// ifge

	ifge::ifge() {

	}

	void ifge::execute() {

	}

	void ifge::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string ifge::getName () {
		return "ifge";
	}


	// ifgt

	ifgt::ifgt() {

	}

	void ifgt::execute() {

	}

	void ifgt::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string ifgt::getName () {
		return "ifgt";
	}


	// ifle

	ifle::ifle() {

	}

	void ifle::execute() {

	}

	void ifle::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string ifle::getName () {
		return "ifle";
	}


	// if_icmpeq

	if_icmpeq::if_icmpeq() {

	}

	void if_icmpeq::execute() {

	}

	void if_icmpeq::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string if_icmpeq::getName () {
		return "if_icmpeq";
	}


	// if_icmpne

	if_icmpne::if_icmpne() {

	}

	void if_icmpne::execute() {

	}

	void if_icmpne::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string if_icmpne::getName () {
		return "if_icmpne";
	}


	// if_icmplt

	if_icmplt::if_icmplt() {

	}

	void if_icmplt::execute() {

	}

	void if_icmplt::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string if_icmplt::getName () {
		return "if_icmplt";
	}


	// if_icmpge

	if_icmpge::if_icmpge() {

	}

	void if_icmpge::execute() {

	}

	void if_icmpge::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string if_icmpge::getName () {
		return "if_icmpge";
	}


	// if_icmpgt

	if_icmpgt::if_icmpgt() {

	}

	void if_icmpgt::execute() {

	}

	void if_icmpgt::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string if_icmpgt::getName () {
		return "if_icmpgt";
	}


	// if_icmple

	if_icmple::if_icmple() {

	}

	void if_icmple::execute() {

	}

	void if_icmple::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string if_icmple::getName () {
		return "if_icmple";
	}


	// if_acmpeq

	if_acmpeq::if_acmpeq() {

	}

	void if_acmpeq::execute() {

	}

	void if_acmpeq::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string if_acmpeq::getName () {
		return "if_acmpeq";
	}


	// if_acmpne

	if_acmpne::if_acmpne() {

	}

	void if_acmpne::execute() {

	}

	void if_acmpne::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string if_acmpne::getName () {
		return "if_acmpne";
	}


	// goto_jvm

	goto_jvm::goto_jvm() {

	}

	void goto_jvm::execute() {

	}

	void goto_jvm::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string goto_jvm::getName () {
		return "goto_jvm";
	}


	// jsr

	jsr::jsr() {

	}

	void jsr::execute() {

	}

	void jsr::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string jsr::getName () {
		return "jsr";
	}


	// ret

	ret::ret() {

	}

	void ret::execute() {

	}

	void ret::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string ret::getName () {
		return "ret";
	}


	// tableswitch

	tableswitch::tableswitch() {

	}

	void tableswitch::execute() {

	}

	void tableswitch::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string tableswitch::getName () {
		return "tableswitch";
	}


	// ireturn

	ireturn::ireturn() {

	}

	void ireturn::execute() {

	}

	void ireturn::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string ireturn::getName () {
		return "ireturn";
	}


	// lreturn

	lreturn::lreturn() {

	}

	void lreturn::execute() {

	}

	void lreturn::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string lreturn::getName () {
		return "lreturn";
	}


	// freturn

	freturn::freturn() {

	}

	void freturn::execute() {

	}

	void freturn::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string freturn::getName () {
		return "freturn";
	}


	// dreturn

	dreturn::dreturn() {

	}

	void dreturn::execute() {

	}

	void dreturn::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string dreturn::getName () {
		return "dreturn";
	}


	// areturn

	areturn::areturn() {

	}

	void areturn::execute() {

	}

	void areturn::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string areturn::getName () {
		return "areturn";
	}


	// return_jvm

	return_jvm::return_jvm() {

	}

	void return_jvm::execute() {

	}

	void return_jvm::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string return_jvm::getName () {
		return "return_jvm";
	}


	// getstatic

	getstatic::getstatic() {

	}

	void getstatic::execute() {

	}

	void getstatic::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string getstatic::getName () {
		return "getstatic";
	}


	// putstatic

	putstatic::putstatic() {

	}

	void putstatic::execute() {

	}

	void putstatic::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string putstatic::getName () {
		return "putstatic";
	}


	// getfield

	getfield::getfield() {

	}

	void getfield::execute() {

	}

	void getfield::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string getfield::getName () {
		return "getfield";
	}


	// putfield

	putfield::putfield() {

	}

	void putfield::execute() {

	}

	void putfield::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string putfield::getName () {
		return "putfield";
	}


	// invokevirtual

	invokevirtual::invokevirtual() {

	}

	void invokevirtual::execute() {

	}

	void invokevirtual::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string invokevirtual::getName () {
		return "invokevirtual";
	}


	// invokespecial

	invokespecial::invokespecial() {

	}

	void invokespecial::execute() {

	}

	void invokespecial::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string invokespecial::getName () {
		return "invokespecial";
	}


	// invokestatic

	invokestatic::invokestatic() {

	}

	void invokestatic::execute() {

	}

	void invokestatic::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string invokestatic::getName () {
		return "invokestatic";
	}


	// invokeinterface

	invokeinterface::invokeinterface() {

	}

	void invokeinterface::execute() {

	}

	void invokeinterface::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string invokeinterface::getName () {
		return "invokeinterface";
	}


	// invokedynamic

	invokedynamic::invokedynamic() {

	}

	void invokedynamic::execute() {

	}

	void invokedynamic::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string invokedynamic::getName () {
		return "invokedynamic";
	}


	// new_jvm

	new_jvm::new_jvm() {

	}

	void new_jvm::execute() {

	}

	void new_jvm::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string new_jvm::getName () {
		return "new_jvm";
	}


	// newarray

	newarray::newarray() {

	}

	void newarray::execute() {

	}

	void newarray::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string newarray::getName () {
		return "newarray";
	}


	// anewarray

	anewarray::anewarray() {

	}

	void anewarray::execute() {

	}

	void anewarray::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string anewarray::getName () {
		return "anewarray";
	}


	// arraylength

	arraylength::arraylength() {

	}

	void arraylength::execute() {

	}

	void arraylength::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string arraylength::getName () {
		return "arraylength";
	}


	// athrow

	athrow::athrow() {

	}

	void athrow::execute() {

	}

	void athrow::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string athrow::getName () {
		return "athrow";
	}


	// checkcast

	checkcast::checkcast() {

	}

	void checkcast::execute() {

	}

	void checkcast::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string checkcast::getName () {
		return "checkcast";
	}


	// instanceof

	instanceof::instanceof() {

	}

	void instanceof::execute() {

	}

	void instanceof::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string instanceof::getName () {
		return "instanceof";
	}


	// monitorenter

	monitorenter::monitorenter() {

	}

	void monitorenter::execute() {

	}

	void monitorenter::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string monitorenter::getName () {
		return "monitorenter";
	}


	// monitorexit

	monitorexit::monitorexit() {

	}

	void monitorexit::execute() {

	}

	void monitorexit::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string monitorexit::getName () {
		return "monitorexit";
	}


	// wide

	wide::wide() {

	}

	void wide::execute() {

	}

	void wide::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string wide::getName () {
		return "wide";
	}


	// multianewarray

	multianewarray::multianewarray() {

	}

	void multianewarray::execute() {

	}

	void multianewarray::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string multianewarray::getName () {
		return "multianewarray";
	}


	// ifnull

	ifnull::ifnull() {

	}

	void ifnull::execute() {

	}

	void ifnull::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string ifnull::getName () {
		return "ifnull";
	}


	// ifnonnull

	ifnonnull::ifnonnull() {

	}

	void ifnonnull::execute() {

	}

	void ifnonnull::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string ifnonnull::getName () {
		return "ifnonnull";
	}


	// goto_w

	goto_w::goto_w() {

	}

	void goto_w::execute() {

	}

	void goto_w::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string goto_w::getName () {
		return "goto_w";
	}


	// jsr_w

	jsr_w::jsr_w() {

	}

	void jsr_w::execute() {

	}

	void jsr_w::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string jsr_w::getName () {
		return "jsr_w";
	}


	// breakpoint

	breakpoint::breakpoint() {

	}

	void breakpoint::execute() {

	}

	void breakpoint::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string breakpoint::getName () {
		return "breakpoint";
	}


	// impdep1

	impdep1::impdep1() {

	}

	void impdep1::execute() {

	}

	void impdep1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string impdep1::getName () {
		return "impdep1";
	}


	// impdep2

	impdep2::impdep2() {

	}

	void impdep2::execute() {

	}

	void impdep2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string impdep2::getName () {
		return "impdep2";
	}

};