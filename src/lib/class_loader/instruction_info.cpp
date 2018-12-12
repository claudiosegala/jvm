#include "class_loader/instruction_info.hpp"
#include "util/JvmException.hpp"

#define OPINFO_CTOR(code, name, jump)\
OPINFO ## name::OPINFO ## name () \
	: InstructionInfo(code, #name, jump) \
{}

namespace jvm {

    InstructionInfo::InstructionInfo(u1 code, std::string _name, std::uint32_t _jmp)
        : opcode(code), name(_name), jmp(_jmp)
    {}

    void InstructionInfo::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
        os << prefix << this->name << std::endl;
    }

    uint32_t InstructionInfo::fillParams(uint32_t idx, std::vector<u1>& data) {
        return 0;
    }

	// nop
	OPINFO_CTOR(0, nop, 0)

	// aconst_null
	OPINFO_CTOR(1, aconst_null, 0)

	// iconst_m1
	OPINFO_CTOR(2, iconst_m1, 0)

	// iconst_0
	OPINFO_CTOR(3, iconst_0, 0)

	// iconst_1
	OPINFO_CTOR(4, iconst_1, 0)

	// iconst_2
	OPINFO_CTOR(5, iconst_2, 0)

	// iconst_3
	OPINFO_CTOR(6, iconst_3, 0)

	// iconst_4
	OPINFO_CTOR(7, iconst_4, 0)

	// iconst_5
	OPINFO_CTOR(8, iconst_5, 0)

	// lconst_0
	OPINFO_CTOR(9, lconst_0, 0)

	// lconst_1
	OPINFO_CTOR(10, lconst_1, 0)

	// fconst_0
	OPINFO_CTOR(11, fconst_0, 0)

	// fconst_1
	OPINFO_CTOR(12, fconst_1, 0)

	// fconst_2
	OPINFO_CTOR(13, fconst_2, 0)

	// dconst_0
	OPINFO_CTOR(14, dconst_0, 0)

	// dconst_1
	OPINFO_CTOR(15, dconst_1, 0)

	// bipush
	OPINFO_CTOR(16, bipush, 1)

	void OPINFObipush::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << +byte << std::endl;
	}

	uint32_t OPINFObipush::fillParams (uint32_t idx, std::vector<u1>& data) {
		byte = Converter::to_i1(data[idx+1]);
		return 1;
	}

	// sipush
	OPINFO_CTOR(17, sipush, 2)

	void OPINFOsipush::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << value << std::endl;
	}

	uint32_t OPINFOsipush::fillParams (uint32_t idx, std::vector<u1>& data) {
		value = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}

	// ldc
	OPINFO_CTOR(18, ldc, 1)

	void OPINFOldc::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << +index << std::endl;
	}

	uint32_t OPINFOldc::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = data[idx+1];
		return 1;
	}

	// ldc_w
	OPINFO_CTOR(19, ldc_w, 2)

	void OPINFOldc_w::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << index << std::endl;
	}

	uint32_t OPINFOldc_w::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}

	// ldc2_w
	OPINFO_CTOR(20, ldc2_w, 2)

	void OPINFOldc2_w::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << index << std::endl;
	}

	uint32_t OPINFOldc2_w::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}

	// iload
	OPINFO_CTOR(21, iload, 1)

	void OPINFOiload::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << +index << std::endl;
	}

	uint32_t OPINFOiload::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = data[idx+1];
		return 1;
	}

	// lload
	OPINFO_CTOR(22, lload, 1)

	void OPINFOlload::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << +index << std::endl;
	}

	uint32_t OPINFOlload::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = data[idx+1];
		return 1;
	}

	// fload
	OPINFO_CTOR(23, fload, 1)

	void OPINFOfload::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << +index << std::endl;
	}

	uint32_t OPINFOfload::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = data[idx+1];
		return 1;
	}

	// dload
	OPINFO_CTOR(24, dload, 1)

	void OPINFOdload::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << +index << std::endl;
	}

	uint32_t OPINFOdload::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = data[idx+1];
		return 1;
	}

	// aload
	OPINFO_CTOR(25, aload, 1)

	void OPINFOaload::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << +index << std::endl;
	}

	uint32_t OPINFOaload::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = data[idx+1];
		return 1;
	}

	// iload_0
	OPINFO_CTOR(26, iload_0, 0)

	// iload_1
	OPINFO_CTOR(27, iload_1, 0)

	// iload_2
	OPINFO_CTOR(28, iload_2, 0)

	// iload_3
	OPINFO_CTOR(29, iload_3, 0)

	// lload_0
	OPINFO_CTOR(30, lload_0, 0)

	// lload_1
	OPINFO_CTOR(31, lload_1, 0)

	// lload_2
	OPINFO_CTOR(32, lload_2, 0)

	// lload_3
	OPINFO_CTOR(33, lload_3, 0)

	// fload_0
	OPINFO_CTOR(34, fload_0, 0)

	// fload_1
	OPINFO_CTOR(35, fload_1, 0)

	// fload_2
	OPINFO_CTOR(36, fload_2, 0)

	// fload_3
	OPINFO_CTOR(37, fload_3, 0)

	// dload_0
	OPINFO_CTOR(38, dload_0, 0)

	// dload_1
	OPINFO_CTOR(39, dload_1, 0)

	// dload_2
	OPINFO_CTOR(40, dload_2, 0)

	// dload_3
	OPINFO_CTOR(41, dload_3, 0)

	// aload_0
	OPINFO_CTOR(42, aload_0, 0)

	// aload_1
	OPINFO_CTOR(43, aload_1, 0)

	// aload_2
	OPINFO_CTOR(44, aload_2, 0)

	// aload_3
	OPINFO_CTOR(45, aload_3, 0)

	// iaload
	OPINFO_CTOR(46, iaload, 0)

	// laload
	OPINFO_CTOR(47, laload, 0)

	// faload
	OPINFO_CTOR(48, faload, 0)

	// daload
	OPINFO_CTOR(49, daload, 0)

	// aaload
	OPINFO_CTOR(50, aaload, 0)

	// baload
	OPINFO_CTOR(51, baload, 0)

	// caload
	OPINFO_CTOR(52, caload, 0)

	// saload
	OPINFO_CTOR(53, saload, 0)

	// istore
	OPINFO_CTOR(54, istore, 1)

	void OPINFOistore::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << +index << std::endl;
	}

	uint32_t OPINFOistore::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = data[idx+1];
		return 1;
	}

	// lstore
	OPINFO_CTOR(55, lstore, 1)

	void OPINFOlstore::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << +index << std::endl;
	}

	uint32_t OPINFOlstore::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = data[idx+1];
		return 1;
	}

	// fstore
	OPINFO_CTOR(56, fstore, 1)

	void OPINFOfstore::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << +index << std::endl;
	}

	uint32_t OPINFOfstore::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = data[idx+1];
		return 1;
	}

	// dstore
	OPINFO_CTOR(57, dstore, 1)

	void OPINFOdstore::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << +index << std::endl;
	}

	uint32_t OPINFOdstore::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = data[idx+1];
		return 1;
	}

	// astore
	OPINFO_CTOR(58, astore, 1)

	void OPINFOastore::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << +index << std::endl;
	}

	uint32_t OPINFOastore::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = data[idx+1];
		return 1;
	}

	// istore_0
	OPINFO_CTOR(59, istore_0, 0)

	// istore_1
	OPINFO_CTOR(60, istore_1, 0)

	// istore_2
	OPINFO_CTOR(61, istore_2, 0)

	// istore_3
	OPINFO_CTOR(62, istore_3, 0)

	// lstore_0
	OPINFO_CTOR(63, lstore_0, 0)

	// lstore_1
	OPINFO_CTOR(64, lstore_1, 0)

	// lstore_2
	OPINFO_CTOR(65, lstore_2, 0)

	// lstore_3
	OPINFO_CTOR(66, lstore_3, 0)

	// fstore_0
	OPINFO_CTOR(67, fstore_0, 0)

	// fstore_1
	OPINFO_CTOR(68, fstore_1, 0)

	// fstore_2
	OPINFO_CTOR(69, fstore_2, 0)

	// fstore_3
	OPINFO_CTOR(70, fstore_3, 0)

	// dstore_0
	OPINFO_CTOR(71, dstore_0, 0)

	// dstore_1
	OPINFO_CTOR(72, dstore_1, 0)

	// dstore_2
	OPINFO_CTOR(73, dstore_2, 0)

	// dstore_3
	OPINFO_CTOR(74, dstore_3, 0)

	// astore_0
	OPINFO_CTOR(75, astore_0, 0)

	// astore_1
	OPINFO_CTOR(76, astore_1, 0)

	// astore_2
	OPINFO_CTOR(77, astore_2, 0)

	// astore_3
	OPINFO_CTOR(78, astore_3, 0)

	// iastore
	OPINFO_CTOR(79, iastore, 0)

	// lastore
	OPINFO_CTOR(80, lastore, 0)

	// fastore
	OPINFO_CTOR(81, fastore, 0)

	// dastore
	OPINFO_CTOR(82, dastore, 0)

	// aastore
	OPINFO_CTOR(83, aastore, 0)

	// bastore
	OPINFO_CTOR(84, bastore, 0)

	// castore
	OPINFO_CTOR(85, castore, 0)

	// sastore
	OPINFO_CTOR(86, sastore, 0)

	// pop
	OPINFO_CTOR(87, pop, 0)

	// pop2
	OPINFO_CTOR(88, pop2, 0)

	// dup
	OPINFO_CTOR(89, dup, 0)

	// dup_x1
	OPINFO_CTOR(90, dup_x1, 0)

	// dup_x2
	OPINFO_CTOR(91, dup_x2, 0)

	// dup2
	OPINFO_CTOR(92, dup2, 0)

	// dup2_x1
	OPINFO_CTOR(93, dup2_x1, 0)

	// dup2_x2
	OPINFO_CTOR(94, dup2_x2, 0)

	// swap
	OPINFO_CTOR(95, swap, 0)

	// iadd
	OPINFO_CTOR(96, iadd, 0)

	// ladd
	OPINFO_CTOR(97, ladd, 0)

	// fadd
	OPINFO_CTOR(98, fadd, 0)

	// dadd
	OPINFO_CTOR(99, dadd, 0)

	// isub
	OPINFO_CTOR(100, isub, 0)

	// lsub
	OPINFO_CTOR(101, lsub, 0)

	// fsub
	OPINFO_CTOR(102, fsub, 0)

	// dsub
	OPINFO_CTOR(103, dsub, 0)

	// imul
	OPINFO_CTOR(104, imul, 0)

	// lmul
	OPINFO_CTOR(105, lmul, 0)

	// fmul
	OPINFO_CTOR(106, fmul, 0)

	// dmul
	OPINFO_CTOR(107, dmul, 0)

	// idiv
	OPINFO_CTOR(108, idiv, 0)

	// ldiv
	OPINFO_CTOR(109, ldiv, 0)

	// fdiv
	OPINFO_CTOR(110, fdiv, 0)

	// ddiv
	OPINFO_CTOR(111, ddiv, 0)

	// irem
	OPINFO_CTOR(112, irem, 0)

	// lrem
	OPINFO_CTOR(113, lrem, 0)

	// frem
	OPINFO_CTOR(114, frem, 0)

	// drem
	OPINFO_CTOR(115, drem, 0)

	// ineg
	OPINFO_CTOR(116, ineg, 0)

	// lneg
	OPINFO_CTOR(117, lneg, 0)

	// fneg
	OPINFO_CTOR(118, fneg, 0)

	// dneg
	OPINFO_CTOR(119, dneg, 0)

	// ishl
	OPINFO_CTOR(120, ishl, 0)

	// lshl
	OPINFO_CTOR(121, lshl, 0)

	// ishr
	OPINFO_CTOR(122, ishr, 0)

	// lshr
	OPINFO_CTOR(123, lshr, 0)

	// iushr
	OPINFO_CTOR(124, iushr, 0)

	// lushr
	OPINFO_CTOR(125, lushr, 0)

	// iand
	OPINFO_CTOR(126, iand, 0)

	// land
	OPINFO_CTOR(127, land, 0)

	// ior
	OPINFO_CTOR(128, ior, 0)

	// lor
	OPINFO_CTOR(129, lor, 0)

	// ixor
	OPINFO_CTOR(130, ixor, 0)

	// lxor
	OPINFO_CTOR(131, lxor, 0)

	// iinc
	OPINFO_CTOR(132, iinc, 2)

	void OPINFOiinc::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << +index << " " << +constant << std::endl;
	}

	uint32_t OPINFOiinc::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = data[idx+1];
		constant = Converter::to_i1(data[idx+2]);
		return 2;
	}

	// i2l
	OPINFO_CTOR(133, i2l, 0)

	// i2f
	OPINFO_CTOR(134, i2f, 0)

	// i2d
	OPINFO_CTOR(135, i2d, 0)

	// l2i
	OPINFO_CTOR(136, l2i, 0)

	// l2f
	OPINFO_CTOR(137, l2f, 0)

	// l2d
	OPINFO_CTOR(138, l2d, 0)

	// f2i
	OPINFO_CTOR(139, f2i, 0)

	// f2l
	OPINFO_CTOR(140, f2l, 0)

	// f2d
	OPINFO_CTOR(141, f2d, 0)

	// d2i
	OPINFO_CTOR(142, d2i, 0)

	// d2l
	OPINFO_CTOR(143, d2l, 0)

	// d2f
	OPINFO_CTOR(144, d2f, 0)

	// i2b
	OPINFO_CTOR(145, i2b, 0)

	// i2c
	OPINFO_CTOR(146, i2c, 0)

	// i2s
	OPINFO_CTOR(147, i2s, 0)

	// lcmp
	OPINFO_CTOR(148, lcmp, 0)

	// fcmpl
	OPINFO_CTOR(149, fcmpl, 0)

	// fcmpg
	OPINFO_CTOR(150, fcmpg, 0)

	// dcmpl
	OPINFO_CTOR(151, dcmpl, 0)

	// dcmpg
	OPINFO_CTOR(152, dcmpg, 0)

	// ifeq
	OPINFO_CTOR(153, ifeq, 2)

	void OPINFOifeq::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << branchoffset << std::endl;
	}

	uint32_t OPINFOifeq::fillParams (uint32_t idx, std::vector<u1>& data) {
		branchoffset = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}

	// ifne
	OPINFO_CTOR(154, ifne, 2)

	void OPINFOifne::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << branchoffset << std::endl;
	}

	uint32_t OPINFOifne::fillParams (uint32_t idx, std::vector<u1>& data) {
		branchoffset = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}

	// iflt
	OPINFO_CTOR(155, iflt, 2)

	void OPINFOiflt::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << branchoffset << std::endl;
	}

	uint32_t OPINFOiflt::fillParams (uint32_t idx, std::vector<u1>& data) {
		branchoffset = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}

	// ifge
	OPINFO_CTOR(156, ifge, 2)

	void OPINFOifge::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << branchoffset << std::endl;
	}

	uint32_t OPINFOifge::fillParams (uint32_t idx, std::vector<u1>& data) {
		branchoffset = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}

	// ifgt
	OPINFO_CTOR(157, ifgt, 2)

	void OPINFOifgt::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << branchoffset << std::endl;
	}

	uint32_t OPINFOifgt::fillParams (uint32_t idx, std::vector<u1>& data) {
		branchoffset = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}

	// ifle
	OPINFO_CTOR(158, ifle, 2)

	void OPINFOifle::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << branchoffset << std::endl;
	}

	uint32_t OPINFOifle::fillParams (uint32_t idx, std::vector<u1>& data) {
		branchoffset = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}

	// if_icmpeq
	OPINFO_CTOR(159, if_icmpeq, 2)

	void OPINFOif_icmpeq::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << branchoffset << std::endl;
	}

	uint32_t OPINFOif_icmpeq::fillParams (uint32_t idx, std::vector<u1>& data) {
		branchoffset = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}

	// if_icmpne
	OPINFO_CTOR(160, if_icmpne, 2)

	void OPINFOif_icmpne::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << branchoffset << std::endl;
	}

	uint32_t OPINFOif_icmpne::fillParams (uint32_t idx, std::vector<u1>& data) {
		branchoffset = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}

	// if_icmplt
	OPINFO_CTOR(161, if_icmplt, 2)
	void OPINFOif_icmplt::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << branchoffset << std::endl;
	}

	uint32_t OPINFOif_icmplt::fillParams (uint32_t idx, std::vector<u1>& data) {
		branchoffset = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}

	// if_icmpge
	OPINFO_CTOR(162, if_icmpge, 2)

	void OPINFOif_icmpge::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << branchoffset << std::endl;
	}

	uint32_t OPINFOif_icmpge::fillParams (uint32_t idx, std::vector<u1>& data) {
		branchoffset = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}

	// if_icmpgt
	OPINFO_CTOR(163, if_icmpgt, 2)

	void OPINFOif_icmpgt::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << branchoffset << std::endl;
	}

	uint32_t OPINFOif_icmpgt::fillParams (uint32_t idx, std::vector<u1>& data) {
		branchoffset = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}

	// if_icmple
	OPINFO_CTOR(164, if_icmple, 2)

	void OPINFOif_icmple::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << branchoffset << std::endl;
	}

	uint32_t OPINFOif_icmple::fillParams (uint32_t idx, std::vector<u1>& data) {
		branchoffset = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}

	// if_acmpeq
	OPINFO_CTOR(165, if_acmpeq, 2)

	void OPINFOif_acmpeq::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << branchoffset << std::endl;
	}

	uint32_t OPINFOif_acmpeq::fillParams (uint32_t idx, std::vector<u1>& data) {
		branchoffset = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}

	// if_acmpne
	OPINFO_CTOR(166, if_acmpne, 2)

	void OPINFOif_acmpne::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << branchoffset << std::endl;
	}

	uint32_t OPINFOif_acmpne::fillParams (uint32_t idx, std::vector<u1>& data) {
		branchoffset = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}

	// goto
	OPINFO_CTOR(167, goto, 2)

	void OPINFOgoto::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << branchoffset << std::endl;
	}

	uint32_t OPINFOgoto::fillParams (uint32_t idx, std::vector<u1>& data) {
		branchoffset = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}

// TODO: finish retrieve data in classes: continue implementation from iinc, see https://en.wikipedia.org/wiki/Java_bytecode_instruction_listings
// TODO: print the data retrieved
// TODO: implements variable arguments
// TODO: verify if the data is retrieveing correct

	// jsr
	OPINFO_CTOR(168, jsr, 2)

	void OPINFOjsr::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << branchoffset << std::endl;
	}

	uint32_t OPINFOjsr::fillParams (uint32_t idx, std::vector<u1>& data) {
		branchoffset = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}

	// ret
	OPINFO_CTOR(169, ret, 1)

	void OPINFOret::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << +index << std::endl;
	}

	uint32_t OPINFOret::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = data[idx+1];
		return 1;
	}

	// tableswitch
	OPINFO_CTOR(170, tableswitch, 16)

	void OPINFOtableswitch::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << defaultbyte << " " << low << " " << high; // TODO: << " " << jumpOffsets << std::endl;
	}

	// TODO: check later for correctness
	uint32_t OPINFOtableswitch::fillParams (uint32_t idx, std::vector<u1>& data) {
		uint32_t i = idx + 1;

		i += (i % 4); // this jump is needed! A tableswitch is a variable-length instruction. Immediately after the tableswitch opcode, between zero and three bytes must act as padding, such that defaultbyte1 begins at an address that is a multiple of four bytes from the start of the current method (the opcode of its first instruction).

		defaultbyte = Converter::to_i4(data[i], data[i+1], data[i+2], data[i+3]); i += 4;
		low         = Converter::to_i4(data[i], data[i+1], data[i+2], data[i+3]); i += 4;
		high        = Converter::to_i4(data[i], data[i+1], data[i+2], data[i+3]); i += 4;

		auto n = high - low + 1;

		if (low <= high) {
			throw JvmException("Invalid tableswitch");
		}

		jumpOffsets.resize(n);

		for (int j = 0; j < n; j++, i += 4) {
			jumpOffsets[j] = Converter::to_i4(data[i], data[i+1], data[i+2], data[i+3]);
		}

		return jmp = i - idx - 1; // 16+
	}

	// OPINFOlookupswitch
	OPINFO_CTOR(171, lookupswitch, 8)

	void OPINFOlookupswitch::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << npairs << " ";

		for(auto& sm_pair : pairs)
			os << sm_pair.first << " ";

		os << defaultbyte << std::endl;
	}

	// TODO: check later for correctness
	uint32_t OPINFOlookupswitch::fillParams (uint32_t idx, std::vector<u1>& data) {
		uint32_t i = idx + 1;

		i += (i % 4); // this jump is needed! A tableswitch is a variable-length instruction. Immediately after the tableswitch opcode, between zero and three bytes must act as padding, such that defaultbyte1 begins at an address that is a multiple of four bytes from the start of the current method (the opcode of its first instruction).

		defaultbyte = Converter::to_i4(data[i], data[i+1], data[i+2], data[i+3]); i += 4;
		npairs      = Converter::to_i4(data[i], data[i+1], data[i+2], data[i+3]); i += 4;

		if (npairs < 0) {
			throw JvmException("Invalid tableswitch");
		}

		for (int j = 0; j < npairs; j++, i += 4) {
			auto match  = Converter::to_i4(data[i], data[i+1], data[i+2], data[i+3]); i += 4;
			auto value  = Converter::to_i4(data[i], data[i+1], data[i+2], data[i+3]);

			pairs[match] = value;
		}

		return jmp = i - idx - 1; // 8+
	}

	// ireturn
	OPINFO_CTOR(172, ireturn, 0)

	// lreturn
	OPINFO_CTOR(173, lreturn, 0)

	// freturn
	OPINFO_CTOR(174, freturn, 0)

	// dreturn
	OPINFO_CTOR(175, dreturn, 0)

	// areturn
	OPINFO_CTOR(176, areturn, 0)

	// return
	OPINFO_CTOR(177, return, 0)

	// getstatic
	OPINFO_CTOR(178, getstatic, 2)

	void OPINFOgetstatic::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << index << std::endl;
	}

	uint32_t OPINFOgetstatic::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}

	// putstatic
	OPINFO_CTOR(179, putstatic, 2)
	void OPINFOputstatic::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << index << std::endl;
	}

	uint32_t OPINFOputstatic::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}

	// getfield
	OPINFO_CTOR(180, getfield, 2)

	void OPINFOgetfield::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << index << std::endl;
	}

	uint32_t OPINFOgetfield::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}

	// putfield
	OPINFO_CTOR(181, putfield, 2)

	void OPINFOputfield::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << index << std::endl;
	}

	uint32_t OPINFOputfield::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}

	// invokevirtual
	OPINFO_CTOR(182, invokevirtual, 2)

	void OPINFOinvokevirtual::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << index << std::endl;
	}

	uint32_t OPINFOinvokevirtual::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}

	// invokespecial
	OPINFO_CTOR(183, invokespecial, 2)

	void OPINFOinvokespecial::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << index << std::endl;
	}

	uint32_t OPINFOinvokespecial::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}

	// invokestatic
	OPINFO_CTOR(184, invokestatic, 2)

	void OPINFOinvokestatic::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << index << std::endl;
	}

	uint32_t OPINFOinvokestatic::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}

	// invokeinterface
	OPINFO_CTOR(185, invokeinterface, 4)

	void OPINFOinvokeinterface::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << index << " " << +count << std::endl;
	}

	uint32_t OPINFOinvokeinterface::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = Converter::to_u2(data[idx+1], data[idx+2]);
		count = data[idx+3];

		if(!count)
			throw JvmException("Invalid invokeinterface: the value of count must not be zero");

		if(!data[idx+4])
			throw JvmException("Invalid invokeinterface: the value of the last argument must be zero");

		return 4;
	}

	// invokedynamic
	OPINFO_CTOR(186, invokedynamic, 4)

	void OPINFOinvokedynamic::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << index << " 0 0" << std::endl;
	}

	uint32_t OPINFOinvokedynamic::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = Converter::to_u2(data[idx+1], data[idx+2]);
		if(!data[idx+3] || !data[idx+4]) {
			throw JvmException("Invalid invokedynamic: the value of the last 2 arguments must be zero");
		}
		return 4;
	}

	// new
	OPINFO_CTOR(187, new, 2)

	void OPINFOnew::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << index << std::endl;
	}

	uint32_t OPINFOnew::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}

	// newarray
	OPINFO_CTOR(188, newarray, 1)

	void OPINFOnewarray::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << +atype << std::endl;
	}

	uint32_t OPINFOnewarray::fillParams (uint32_t idx, std::vector<u1>& data) {
		atype = data[idx+1];
		return 1;
	}

	// anewarray
	OPINFO_CTOR(189, anewarray, 2)

	void OPINFOanewarray::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << index << std::endl;
	}

	uint32_t OPINFOanewarray::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}

	// arraylength
	OPINFO_CTOR(190, arraylength, 0)

	// athrow
	OPINFO_CTOR(191, athrow, 0)

	// checkcast
	OPINFO_CTOR(192, checkcast, 2)

	void OPINFOcheckcast::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << index << std::endl;
	}

	uint32_t OPINFOcheckcast::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}

	// instanceof
	OPINFO_CTOR(193, instanceof, 2)

	void OPINFOinstanceof::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << index << std::endl;
	}

	uint32_t OPINFOinstanceof::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}

	// monitorenter
	OPINFO_CTOR(194, monitorenter, 0)

	// monitorexit
	OPINFO_CTOR(195, monitorexit, 0)

	// wide
	OPINFO_CTOR(196, wide, 3)

	void OPINFOwide::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << +opcode << " " << index << " " << countbyte << std::endl;
	}

	uint32_t OPINFOwide::fillParams (uint32_t idx, std::vector<u1>& data) {
		OPINFOiinc iinc;

		targetOpcode = data[idx + 1];

		index = Converter::to_u2(data[idx + 2], data[idx + 3]);

		if (opcode == targetOpcode) {
			countbyte = Converter::to_u2(data[idx + 4], data[idx + 5]);
			return jmp = 5;
		}

		return jmp = 3;
	}

	// multianewarray
	OPINFO_CTOR(197, multianewarray, 3)

	void OPINFOmultianewarray::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << +index << " " << cl[index]->toString(cl) << " dim " << +dimensions << std::endl;
	}

	uint32_t OPINFOmultianewarray::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = Converter::to_u2(data[idx+1], data[idx+2]);
		dimensions = data[idx+3];

		if(dimensions < 1u)
			throw JvmException("Invalid multianewarray: the number of dimensions of the array must be greater than or equal to 1");

		return 3;
	}

	// ifnull
	OPINFO_CTOR(198, ifnull, 2)

	void OPINFOifnull::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << branchoffset << std::endl;
	}

	uint32_t OPINFOifnull::fillParams (uint32_t idx, std::vector<u1>& data) {
		branchoffset = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}

	// ifnonnull
	OPINFO_CTOR(199, ifnonnull, 2)

	void OPINFOifnonnull::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << branchoffset << std::endl;
	}

	uint32_t OPINFOifnonnull::fillParams (uint32_t idx, std::vector<u1>& data) {
		branchoffset = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}

	// goto_w
	OPINFO_CTOR(200, goto_w, 4)

	void OPINFOgoto_w::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << branchoffset << std::endl;
	}

	uint32_t OPINFOgoto_w::fillParams (uint32_t idx, std::vector<u1>& data) {
		branchoffset = Converter::to_i4(data[idx+1], data[idx+2], data[idx+3], data[idx+4]);
		return 4;
	}

	// jsr_w
	OPINFO_CTOR(201, jsr_w, 4)

	void OPINFOjsr_w::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) const {
		os << prefix << this->name << " " << branchoffset << std::endl;
	}

	uint32_t OPINFOjsr_w::fillParams (uint32_t idx, std::vector<u1>& data) {
		branchoffset = Converter::to_i4(data[idx+1], data[idx+2], data[idx+3], data[idx+4]);
		return 4;
	}

	// breakpoint
	OPINFO_CTOR(202, breakpoint, 0)

	// impdep1
	OPINFO_CTOR(254, impdep1, 0)

	// impdep2
	OPINFO_CTOR(255, impdep2, 0)
};
