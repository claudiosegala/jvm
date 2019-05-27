#include "class_loader/instruction_info.hpp"
#include "util/JvmException.hpp"

namespace jvm {

	// nop
	OPINFOnop::OPINFOnop () {
		jmp = 0;
	}

	void OPINFOnop::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOnop::getName () {
		return "nop";
	}

	u1 OPINFOnop::getOpCode() {
		return 0;
	}

	uint32_t OPINFOnop::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// aconst_null
	OPINFOaconst_null::OPINFOaconst_null () {
		jmp = 0;
	}

	void OPINFOaconst_null::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOaconst_null::getName () {
		return "aconst_null";
	}

	u1 OPINFOaconst_null::getOpCode() {
		return 1;
	}

	uint32_t OPINFOaconst_null::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// iconst_m1
	OPINFOiconst_m1::OPINFOiconst_m1 () {
		jmp = 0;
	}

	void OPINFOiconst_m1::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOiconst_m1::getName () {
		return "iconst_m1";
	}

	u1 OPINFOiconst_m1::getOpCode() {
		return 2;
	}

	uint32_t OPINFOiconst_m1::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// iconst_0
	OPINFOiconst_0::OPINFOiconst_0 () {
		jmp = 0;
	}

	void OPINFOiconst_0::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOiconst_0::getName () {
		return "iconst_0";
	}

	u1 OPINFOiconst_0::getOpCode() {
		return 3;
	}

	uint32_t OPINFOiconst_0::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// iconst_1
	OPINFOiconst_1::OPINFOiconst_1 () {
		jmp = 0;
	}

	void OPINFOiconst_1::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOiconst_1::getName () {
		return "iconst_1";
	}

	u1 OPINFOiconst_1::getOpCode() {
		return 4;
	}

	uint32_t OPINFOiconst_1::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// iconst_2
	OPINFOiconst_2::OPINFOiconst_2 () {
		jmp = 0;
	}

	void OPINFOiconst_2::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOiconst_2::getName () {
		return "iconst_2";
	}

	u1 OPINFOiconst_2::getOpCode() {
		return 5;
	}

	uint32_t OPINFOiconst_2::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// iconst_3
	OPINFOiconst_3::OPINFOiconst_3 () {
		jmp = 0;
	}

	void OPINFOiconst_3::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOiconst_3::getName () {
		return "iconst_3";
	}

	u1 OPINFOiconst_3::getOpCode() {
		return 6;
	}

	uint32_t OPINFOiconst_3::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// iconst_4
	OPINFOiconst_4::OPINFOiconst_4 () {
		jmp = 0;
	}

	void OPINFOiconst_4::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOiconst_4::getName () {
		return "iconst_4";
	}

	u1 OPINFOiconst_4::getOpCode() {
		return 7;
	}

	uint32_t OPINFOiconst_4::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// iconst_5
	OPINFOiconst_5::OPINFOiconst_5 () {
		jmp = 0;
	}

	void OPINFOiconst_5::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOiconst_5::getName () {
		return "iconst_5";
	}

	u1 OPINFOiconst_5::getOpCode() {
		return 8;
	}

	uint32_t OPINFOiconst_5::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// lconst_0
	OPINFOlconst_0::OPINFOlconst_0 () {
		jmp = 0;
	}

	void OPINFOlconst_0::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOlconst_0::getName () {
		return "lconst_0";
	}

	u1 OPINFOlconst_0::getOpCode() {
		return 9;
	}

	uint32_t OPINFOlconst_0::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// lconst_1
	OPINFOlconst_1::OPINFOlconst_1 () {
		jmp = 0;
	}

	void OPINFOlconst_1::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOlconst_1::getName () {
		return "lconst_1";
	}

	u1 OPINFOlconst_1::getOpCode() {
		return 10;
	}

	uint32_t OPINFOlconst_1::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// fconst_0
	OPINFOfconst_0::OPINFOfconst_0 () {
		jmp = 0;
	}

	void OPINFOfconst_0::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOfconst_0::getName () {
		return "fconst_0";
	}

	u1 OPINFOfconst_0::getOpCode() {
		return 11;
	}

	uint32_t OPINFOfconst_0::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// fconst_1
	OPINFOfconst_1::OPINFOfconst_1 () {
		jmp = 0;
	}

	void OPINFOfconst_1::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOfconst_1::getName () {
		return "fconst_1";
	}

	u1 OPINFOfconst_1::getOpCode() {
		return 12;
	}

	uint32_t OPINFOfconst_1::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// fconst_2
	OPINFOfconst_2::OPINFOfconst_2 () {
		jmp = 0;
	}

	void OPINFOfconst_2::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOfconst_2::getName () {
		return "fconst_2";
	}

	u1 OPINFOfconst_2::getOpCode() {
		return 13;
	}

	uint32_t OPINFOfconst_2::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// dconst_0
	OPINFOdconst_0::OPINFOdconst_0 () {
		jmp = 0;
	}

	void OPINFOdconst_0::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOdconst_0::getName () {
		return "dconst_0";
	}

	u1 OPINFOdconst_0::getOpCode() {
		return 14;
	}

	uint32_t OPINFOdconst_0::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// dconst_1
	OPINFOdconst_1::OPINFOdconst_1 () {
		jmp = 0;
	}

	void OPINFOdconst_1::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOdconst_1::getName () {
		return "dconst_1";
	}

	u1 OPINFOdconst_1::getOpCode() {
		return 15;
	}

	uint32_t OPINFOdconst_1::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// bipush
	OPINFObipush::OPINFObipush () {
		jmp = 1;
	}

	void OPINFObipush::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << " " << +byte << std::endl;
	}

	std::string OPINFObipush::getName () {
		return "bipush";
	}

	u1 OPINFObipush::getOpCode() {
		return 16;
	}

	uint32_t OPINFObipush::fillParams (uint32_t idx, std::vector<u1>& data) {
		byte = Converter::to_i1(data[idx+1]);
		return 1;
	}


	// sipush
	OPINFOsipush::OPINFOsipush () {
		jmp = 2;
	}

	void OPINFOsipush::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << " " << value << std::endl;
	}

	std::string OPINFOsipush::getName () {
		return "sipush";
	}

	u1 OPINFOsipush::getOpCode() {
		return 17;
	}

	uint32_t OPINFOsipush::fillParams (uint32_t idx, std::vector<u1>& data) {
		value = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}


	// ldc
	OPINFOldc::OPINFOldc () {
		jmp = 1;
	}

	void OPINFOldc::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << " " << +index << std::endl;
	}

	std::string OPINFOldc::getName () {
		return "ldc";
	}

	u1 OPINFOldc::getOpCode() {
		return 18;
	}

	uint32_t OPINFOldc::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = data[idx+1];
		return 1;
	}


	// ldc_w
	OPINFOldc_w::OPINFOldc_w () {
		jmp = 2;
	}

	void OPINFOldc_w::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << " " << index << std::endl;
	}

	std::string OPINFOldc_w::getName () {
		return "ldc_w";
	}

	u1 OPINFOldc_w::getOpCode() {
		return 19;
	}

	uint32_t OPINFOldc_w::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}


	// ldc2_w
	OPINFOldc2_w::OPINFOldc2_w () {
		jmp = 2;
	}

	void OPINFOldc2_w::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << " " << index << std::endl;
	}

	std::string OPINFOldc2_w::getName () {
		return "ldc2_w";
	}

	u1 OPINFOldc2_w::getOpCode() {
		return 20;
	}

	uint32_t OPINFOldc2_w::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}


	// iload
	OPINFOiload::OPINFOiload () {
		jmp = 1;
	}

	void OPINFOiload::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << " " << +index << std::endl;
	}

	std::string OPINFOiload::getName () {
		return "iload";
	}

	u1 OPINFOiload::getOpCode() {
		return 21;
	}

	uint32_t OPINFOiload::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = data[idx+1];
		return 1;
	}


	// lload
	OPINFOlload::OPINFOlload () {
		jmp = 1;
	}

	void OPINFOlload::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << " " << +index << std::endl;
	}

	std::string OPINFOlload::getName () {
		return "lload";
	}

	u1 OPINFOlload::getOpCode() {
		return 22;
	}

	uint32_t OPINFOlload::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = data[idx+1];
		return 1;
	}


	// fload
	OPINFOfload::OPINFOfload () {
		jmp = 1;
	}

	void OPINFOfload::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << " " << +index << std::endl;
	}

	std::string OPINFOfload::getName () {
		return "fload";
	}

	u1 OPINFOfload::getOpCode() {
		return 23;
	}

	uint32_t OPINFOfload::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = data[idx+1];
		return 1;
	}


	// dload
	OPINFOdload::OPINFOdload () {
		jmp = 1;
	}

	void OPINFOdload::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << " " << +index << std::endl;
	}

	std::string OPINFOdload::getName () {
		return "dload";
	}

	u1 OPINFOdload::getOpCode() {
		return 24;
	}

	uint32_t OPINFOdload::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = data[idx+1];
		return 1;
	}


	// aload
	OPINFOaload::OPINFOaload () {
		jmp = 1;
	}

	void OPINFOaload::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << " " << +index << std::endl;
	}

	std::string OPINFOaload::getName () {
		return "aload";
	}

	u1 OPINFOaload::getOpCode() {
		return 25;
	}

	uint32_t OPINFOaload::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = data[idx+1];
		return 1;
	}


	// iload_0
	OPINFOiload_0::OPINFOiload_0 () {
		jmp = 0;
	}

	void OPINFOiload_0::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOiload_0::getName () {
		return "iload_0";
	}

	u1 OPINFOiload_0::getOpCode() {
		return 26;
	}

	uint32_t OPINFOiload_0::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// iload_1
	OPINFOiload_1::OPINFOiload_1 () {
		jmp = 0;
	}

	void OPINFOiload_1::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOiload_1::getName () {
		return "iload_1";
	}

	u1 OPINFOiload_1::getOpCode() {
		return 27;
	}

	uint32_t OPINFOiload_1::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// iload_2
	OPINFOiload_2::OPINFOiload_2 () {
		jmp = 0;
	}

	void OPINFOiload_2::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOiload_2::getName () {
		return "iload_2";
	}

	u1 OPINFOiload_2::getOpCode() {
		return 28;
	}

	uint32_t OPINFOiload_2::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// iload_3
	OPINFOiload_3::OPINFOiload_3 () {
		jmp = 0;
	}

	void OPINFOiload_3::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOiload_3::getName () {
		return "iload_3";
	}

	u1 OPINFOiload_3::getOpCode() {
		return 29;
	}

	uint32_t OPINFOiload_3::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// lload_0
	OPINFOlload_0::OPINFOlload_0 () {
		jmp = 0;
	}

	void OPINFOlload_0::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOlload_0::getName () {
		return "lload_0";
	}

	u1 OPINFOlload_0::getOpCode() {
		return 30;
	}

	uint32_t OPINFOlload_0::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// lload_1
	OPINFOlload_1::OPINFOlload_1 () {
		jmp = 0;
	}

	void OPINFOlload_1::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOlload_1::getName () {
		return "lload_1";
	}

	u1 OPINFOlload_1::getOpCode() {
		return 31;
	}

	uint32_t OPINFOlload_1::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// lload_2
	OPINFOlload_2::OPINFOlload_2 () {
		jmp = 0;
	}

	void OPINFOlload_2::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOlload_2::getName () {
		return "lload_2";
	}

	u1 OPINFOlload_2::getOpCode() {
		return 32;
	}

	uint32_t OPINFOlload_2::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// lload_3
	OPINFOlload_3::OPINFOlload_3 () {
		jmp = 0;
	}

	void OPINFOlload_3::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOlload_3::getName () {
		return "lload_3";
	}

	u1 OPINFOlload_3::getOpCode() {
		return 33;
	}

	uint32_t OPINFOlload_3::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// fload_0
	OPINFOfload_0::OPINFOfload_0 () {
		jmp = 0;
	}

	void OPINFOfload_0::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOfload_0::getName () {
		return "fload_0";
	}

	u1 OPINFOfload_0::getOpCode() {
		return 34;
	}

	uint32_t OPINFOfload_0::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// fload_1
	OPINFOfload_1::OPINFOfload_1 () {
		jmp = 0;
	}

	void OPINFOfload_1::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOfload_1::getName () {
		return "fload_1";
	}

	u1 OPINFOfload_1::getOpCode() {
		return 35;
	}

	uint32_t OPINFOfload_1::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// fload_2
	OPINFOfload_2::OPINFOfload_2 () {
		jmp = 0;
	}

	void OPINFOfload_2::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOfload_2::getName () {
		return "fload_2";
	}

	u1 OPINFOfload_2::getOpCode() {
		return 36;
	}

	uint32_t OPINFOfload_2::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// fload_3
	OPINFOfload_3::OPINFOfload_3 () {
		jmp = 0;
	}

	void OPINFOfload_3::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOfload_3::getName () {
		return "fload_3";
	}

	u1 OPINFOfload_3::getOpCode() {
		return 37;
	}

	uint32_t OPINFOfload_3::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// dload_0
	OPINFOdload_0::OPINFOdload_0 () {
		jmp = 0;
	}

	void OPINFOdload_0::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOdload_0::getName () {
		return "dload_0";
	}

	u1 OPINFOdload_0::getOpCode() {
		return 38;
	}

	uint32_t OPINFOdload_0::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// dload_1
	OPINFOdload_1::OPINFOdload_1 () {
		jmp = 0;
	}

	void OPINFOdload_1::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOdload_1::getName () {
		return "dload_1";
	}

	u1 OPINFOdload_1::getOpCode() {
		return 39;
	}

	uint32_t OPINFOdload_1::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// dload_2
	OPINFOdload_2::OPINFOdload_2 () {
		jmp = 0;
	}

	void OPINFOdload_2::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOdload_2::getName () {
		return "dload_2";
	}

	u1 OPINFOdload_2::getOpCode() {
		return 40;
	}

	uint32_t OPINFOdload_2::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// dload_3
	OPINFOdload_3::OPINFOdload_3 () {
		jmp = 0;
	}

	void OPINFOdload_3::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOdload_3::getName () {
		return "dload_3";
	}

	u1 OPINFOdload_3::getOpCode() {
		return 41;
	}

	uint32_t OPINFOdload_3::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// aload_0
	OPINFOaload_0::OPINFOaload_0 () {
		jmp = 0;
	}

	void OPINFOaload_0::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOaload_0::getName () {
		return "aload_0";
	}

	u1 OPINFOaload_0::getOpCode() {
		return 42;
	}

	uint32_t OPINFOaload_0::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// aload_1
	OPINFOaload_1::OPINFOaload_1 () {
		jmp = 0;
	}

	void OPINFOaload_1::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOaload_1::getName () {
		return "aload_1";
	}

	u1 OPINFOaload_1::getOpCode() {
		return 43;
	}

	uint32_t OPINFOaload_1::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// aload_2
	OPINFOaload_2::OPINFOaload_2 () {
		jmp = 0;
	}

	void OPINFOaload_2::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOaload_2::getName () {
		return "aload_2";
	}

	u1 OPINFOaload_2::getOpCode() {
		return 44;
	}

	uint32_t OPINFOaload_2::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// aload_3
	OPINFOaload_3::OPINFOaload_3 () {
		jmp = 0;
	}

	void OPINFOaload_3::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOaload_3::getName () {
		return "aload_3";
	}

	u1 OPINFOaload_3::getOpCode() {
		return 45;
	}

	uint32_t OPINFOaload_3::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// iaload
	OPINFOiaload::OPINFOiaload () {
		jmp = 0;
	}

	void OPINFOiaload::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOiaload::getName () {
		return "iaload";
	}

	u1 OPINFOiaload::getOpCode() {
		return 46;
	}

	uint32_t OPINFOiaload::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// laload
	OPINFOlaload::OPINFOlaload () {
		jmp = 0;
	}

	void OPINFOlaload::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOlaload::getName () {
		return "laload";
	}

	u1 OPINFOlaload::getOpCode() {
		return 47;
	}

	uint32_t OPINFOlaload::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// faload
	OPINFOfaload::OPINFOfaload () {
		jmp = 0;
	}

	void OPINFOfaload::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOfaload::getName () {
		return "faload";
	}

	u1 OPINFOfaload::getOpCode() {
		return 48;
	}

	uint32_t OPINFOfaload::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// daload
	OPINFOdaload::OPINFOdaload () {
		jmp = 0;
	}

	void OPINFOdaload::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOdaload::getName () {
		return "daload";
	}

	u1 OPINFOdaload::getOpCode() {
		return 49;
	}

	uint32_t OPINFOdaload::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// aaload
	OPINFOaaload::OPINFOaaload () {
		jmp = 0;
	}

	void OPINFOaaload::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOaaload::getName () {
		return "aaload";
	}

	u1 OPINFOaaload::getOpCode() {
		return 50;
	}

	uint32_t OPINFOaaload::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// baload
	OPINFObaload::OPINFObaload () {
		jmp = 0;
	}

	void OPINFObaload::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFObaload::getName () {
		return "baload";
	}

	u1 OPINFObaload::getOpCode() {
		return 51;
	}

	uint32_t OPINFObaload::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// caload
	OPINFOcaload::OPINFOcaload () {
		jmp = 0;
	}

	void OPINFOcaload::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOcaload::getName () {
		return "caload";
	}

	u1 OPINFOcaload::getOpCode() {
		return 52;
	}

	uint32_t OPINFOcaload::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// saload
	OPINFOsaload::OPINFOsaload () {
		jmp = 0;
	}

	void OPINFOsaload::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOsaload::getName () {
		return "saload";
	}

	u1 OPINFOsaload::getOpCode() {
		return 53;
	}

	uint32_t OPINFOsaload::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// istore
	OPINFOistore::OPINFOistore () {
		jmp = 1;
	}

	void OPINFOistore::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << " " << +index << std::endl;
	}

	std::string OPINFOistore::getName () {
		return "istore";
	}

	u1 OPINFOistore::getOpCode() {
		return 54;
	}

	uint32_t OPINFOistore::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = data[idx+1];
		return 1;
	}


	// lstore
	OPINFOlstore::OPINFOlstore () {
		jmp = 1;
	}

	void OPINFOlstore::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << " " << +index << std::endl;
	}

	std::string OPINFOlstore::getName () {
		return "lstore";
	}

	u1 OPINFOlstore::getOpCode() {
		return 55;
	}

	uint32_t OPINFOlstore::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = data[idx+1];
		return 1;
	}


	// fstore
	OPINFOfstore::OPINFOfstore () {
		jmp = 1;
	}

	void OPINFOfstore::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << " " << +index << std::endl;
	}

	std::string OPINFOfstore::getName () {
		return "fstore";
	}

	u1 OPINFOfstore::getOpCode() {
		return 56;
	}

	uint32_t OPINFOfstore::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = data[idx+1];
		return 1;
	}


	// dstore
	OPINFOdstore::OPINFOdstore () {
		jmp = 1;
	}

	void OPINFOdstore::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << " " << +index << std::endl;
	}

	std::string OPINFOdstore::getName () {
		return "dstore";
	}

	u1 OPINFOdstore::getOpCode() {
		return 57;
	}

	uint32_t OPINFOdstore::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = data[idx+1];
		return 1;
	}


	// astore
	OPINFOastore::OPINFOastore () {
		jmp = 1;
	}

	void OPINFOastore::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << " " << +index << std::endl;
	}

	std::string OPINFOastore::getName () {
		return "astore";
	}

	u1 OPINFOastore::getOpCode() {
		return 58;
	}

	uint32_t OPINFOastore::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = data[idx+1];
		return 1;
	}


	// istore_0
	OPINFOistore_0::OPINFOistore_0 () {
		jmp = 0;
	}

	void OPINFOistore_0::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOistore_0::getName () {
		return "istore_0";
	}

	u1 OPINFOistore_0::getOpCode() {
		return 59;
	}

	uint32_t OPINFOistore_0::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// istore_1
	OPINFOistore_1::OPINFOistore_1 () {
		jmp = 0;
	}

	void OPINFOistore_1::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOistore_1::getName () {
		return "istore_1";
	}

	u1 OPINFOistore_1::getOpCode() {
		return 60;
	}

	uint32_t OPINFOistore_1::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// istore_2
	OPINFOistore_2::OPINFOistore_2 () {
		jmp = 0;
	}

	void OPINFOistore_2::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOistore_2::getName () {
		return "istore_2";
	}

	u1 OPINFOistore_2::getOpCode() {
		return 61;
	}

	uint32_t OPINFOistore_2::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// istore_3
	OPINFOistore_3::OPINFOistore_3 () {
		jmp = 0;
	}

	void OPINFOistore_3::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOistore_3::getName () {
		return "istore_3";
	}

	u1 OPINFOistore_3::getOpCode() {
		return 62;
	}

	uint32_t OPINFOistore_3::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// lstore_0
	OPINFOlstore_0::OPINFOlstore_0 () {
		jmp = 0;
	}

	void OPINFOlstore_0::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOlstore_0::getName () {
		return "lstore_0";
	}

	u1 OPINFOlstore_0::getOpCode() {
		return 63;
	}

	uint32_t OPINFOlstore_0::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// lstore_1
	OPINFOlstore_1::OPINFOlstore_1 () {
		jmp = 0;
	}

	void OPINFOlstore_1::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOlstore_1::getName () {
		return "lstore_1";
	}

	u1 OPINFOlstore_1::getOpCode() {
		return 64;
	}

	uint32_t OPINFOlstore_1::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// lstore_2
	OPINFOlstore_2::OPINFOlstore_2 () {
		jmp = 0;
	}

	void OPINFOlstore_2::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOlstore_2::getName () {
		return "lstore_2";
	}

	u1 OPINFOlstore_2::getOpCode() {
		return 65;
	}

	uint32_t OPINFOlstore_2::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// lstore_3
	OPINFOlstore_3::OPINFOlstore_3 () {
		jmp = 0;
	}

	void OPINFOlstore_3::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOlstore_3::getName () {
		return "lstore_3";
	}

	u1 OPINFOlstore_3::getOpCode() {
		return 66;
	}

	uint32_t OPINFOlstore_3::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// fstore_0
	OPINFOfstore_0::OPINFOfstore_0 () {
		jmp = 0;
	}

	void OPINFOfstore_0::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOfstore_0::getName () {
		return "fstore_0";
	}

	u1 OPINFOfstore_0::getOpCode() {
		return 67;
	}

	uint32_t OPINFOfstore_0::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// fstore_1
	OPINFOfstore_1::OPINFOfstore_1 () {
		jmp = 0;
	}

	void OPINFOfstore_1::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOfstore_1::getName () {
		return "fstore_1";
	}

	u1 OPINFOfstore_1::getOpCode() {
		return 68;
	}

	uint32_t OPINFOfstore_1::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// fstore_2
	OPINFOfstore_2::OPINFOfstore_2 () {
		jmp = 0;
	}

	void OPINFOfstore_2::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOfstore_2::getName () {
		return "fstore_2";
	}

	u1 OPINFOfstore_2::getOpCode() {
		return 69;
	}

	uint32_t OPINFOfstore_2::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// fstore_3
	OPINFOfstore_3::OPINFOfstore_3 () {
		jmp = 0;
	}

	void OPINFOfstore_3::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOfstore_3::getName () {
		return "fstore_3";
	}

	u1 OPINFOfstore_3::getOpCode() {
		return 70;
	}

	uint32_t OPINFOfstore_3::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// dstore_0
	OPINFOdstore_0::OPINFOdstore_0 () {
		jmp = 0;
	}

	void OPINFOdstore_0::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOdstore_0::getName () {
		return "dstore_0";
	}

	u1 OPINFOdstore_0::getOpCode() {
		return 71;
	}

	uint32_t OPINFOdstore_0::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// dstore_1
	OPINFOdstore_1::OPINFOdstore_1 () {
		jmp = 0;
	}

	void OPINFOdstore_1::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOdstore_1::getName () {
		return "dstore_1";
	}

	u1 OPINFOdstore_1::getOpCode() {
		return 72;
	}

	uint32_t OPINFOdstore_1::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// dstore_2
	OPINFOdstore_2::OPINFOdstore_2 () {
		jmp = 0;
	}

	void OPINFOdstore_2::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOdstore_2::getName () {
		return "dstore_2";
	}

	u1 OPINFOdstore_2::getOpCode() {
		return 73;
	}

	uint32_t OPINFOdstore_2::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// dstore_3
	OPINFOdstore_3::OPINFOdstore_3 () {
		jmp = 0;
	}

	void OPINFOdstore_3::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOdstore_3::getName () {
		return "dstore_3";
	}

	u1 OPINFOdstore_3::getOpCode() {
		return 74;
	}

	uint32_t OPINFOdstore_3::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// astore_0
	OPINFOastore_0::OPINFOastore_0 () {
		jmp = 0;
	}

	void OPINFOastore_0::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOastore_0::getName () {
		return "astore_0";
	}

	u1 OPINFOastore_0::getOpCode() {
		return 75;
	}

	uint32_t OPINFOastore_0::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// astore_1
	OPINFOastore_1::OPINFOastore_1 () {
		jmp = 0;
	}

	void OPINFOastore_1::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOastore_1::getName () {
		return "astore_1";
	}

	u1 OPINFOastore_1::getOpCode() {
		return 76;
	}

	uint32_t OPINFOastore_1::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// astore_2
	OPINFOastore_2::OPINFOastore_2 () {
		jmp = 0;
	}

	void OPINFOastore_2::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOastore_2::getName () {
		return "astore_2";
	}

	u1 OPINFOastore_2::getOpCode() {
		return 77;
	}

	uint32_t OPINFOastore_2::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// astore_3
	OPINFOastore_3::OPINFOastore_3 () {
		jmp = 0;
	}

	void OPINFOastore_3::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOastore_3::getName () {
		return "astore_3";
	}

	u1 OPINFOastore_3::getOpCode() {
		return 78;
	}

	uint32_t OPINFOastore_3::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// iastore
	OPINFOiastore::OPINFOiastore () {
		jmp = 0;
	}

	void OPINFOiastore::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOiastore::getName () {
		return "iastore";
	}

	u1 OPINFOiastore::getOpCode() {
		return 79;
	}

	uint32_t OPINFOiastore::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// lastore
	OPINFOlastore::OPINFOlastore () {
		jmp = 0;
	}

	void OPINFOlastore::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOlastore::getName () {
		return "lastore";
	}

	u1 OPINFOlastore::getOpCode() {
		return 80;
	}

	uint32_t OPINFOlastore::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// fastore
	OPINFOfastore::OPINFOfastore () {
		jmp = 0;
	}

	void OPINFOfastore::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOfastore::getName () {
		return "fastore";
	}

	u1 OPINFOfastore::getOpCode() {
		return 81;
	}

	uint32_t OPINFOfastore::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// dastore
	OPINFOdastore::OPINFOdastore () {
		jmp = 0;
	}

	void OPINFOdastore::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOdastore::getName () {
		return "dastore";
	}

	u1 OPINFOdastore::getOpCode() {
		return 82;
	}

	uint32_t OPINFOdastore::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// aastore
	OPINFOaastore::OPINFOaastore () {
		jmp = 0;
	}

	void OPINFOaastore::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOaastore::getName () {
		return "aastore";
	}

	u1 OPINFOaastore::getOpCode() {
		return 83;
	}

	uint32_t OPINFOaastore::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// bastore
	OPINFObastore::OPINFObastore () {
		jmp = 0;
	}

	void OPINFObastore::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFObastore::getName () {
		return "bastore";
	}

	u1 OPINFObastore::getOpCode() {
		return 84;
	}

	uint32_t OPINFObastore::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// castore
	OPINFOcastore::OPINFOcastore () {
		jmp = 0;
	}

	void OPINFOcastore::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOcastore::getName () {
		return "castore";
	}

	u1 OPINFOcastore::getOpCode() {
		return 85;
	}

	uint32_t OPINFOcastore::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// sastore
	OPINFOsastore::OPINFOsastore () {
		jmp = 0;
	}

	void OPINFOsastore::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOsastore::getName () {
		return "sastore";
	}

	u1 OPINFOsastore::getOpCode() {
		return 86;
	}

	uint32_t OPINFOsastore::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// pop
	OPINFOpop::OPINFOpop () {
		jmp = 0;
	}

	void OPINFOpop::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOpop::getName () {
		return "pop";
	}

	u1 OPINFOpop::getOpCode() {
		return 87;
	}

	uint32_t OPINFOpop::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// pop2
	OPINFOpop2::OPINFOpop2 () {
		jmp = 0;
	}

	void OPINFOpop2::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOpop2::getName () {
		return "pop2";
	}

	u1 OPINFOpop2::getOpCode() {
		return 88;
	}

	uint32_t OPINFOpop2::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// dup
	OPINFOdup::OPINFOdup () {
		jmp = 0;
	}

	void OPINFOdup::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOdup::getName () {
		return "dup";
	}

	u1 OPINFOdup::getOpCode() {
		return 89;
	}

	uint32_t OPINFOdup::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// dup_x1
	OPINFOdup_x1::OPINFOdup_x1 () {
		jmp = 0;
	}

	void OPINFOdup_x1::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOdup_x1::getName () {
		return "dup_x1";
	}

	u1 OPINFOdup_x1::getOpCode() {
		return 90;
	}

	uint32_t OPINFOdup_x1::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// dup_x2
	OPINFOdup_x2::OPINFOdup_x2 () {
		jmp = 0;
	}

	void OPINFOdup_x2::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOdup_x2::getName () {
		return "dup_x2";
	}

	u1 OPINFOdup_x2::getOpCode() {
		return 91;
	}

	uint32_t OPINFOdup_x2::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// dup2
	OPINFOdup2::OPINFOdup2 () {
		jmp = 0;
	}

	void OPINFOdup2::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOdup2::getName () {
		return "dup2";
	}

	u1 OPINFOdup2::getOpCode() {
		return 92;
	}

	uint32_t OPINFOdup2::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// dup2_x1
	OPINFOdup2_x1::OPINFOdup2_x1 () {
		jmp = 0;
	}

	void OPINFOdup2_x1::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOdup2_x1::getName () {
		return "dup2_x1";
	}

	u1 OPINFOdup2_x1::getOpCode() {
		return 93;
	}

	uint32_t OPINFOdup2_x1::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// dup2_x2
	OPINFOdup2_x2::OPINFOdup2_x2 () {
		jmp = 0;
	}

	void OPINFOdup2_x2::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOdup2_x2::getName () {
		return "dup2_x2";
	}

	u1 OPINFOdup2_x2::getOpCode() {
		return 94;
	}

	uint32_t OPINFOdup2_x2::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// swap
	OPINFOswap::OPINFOswap () {
		jmp = 0;
	}

	void OPINFOswap::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOswap::getName () {
		return "swap";
	}

	u1 OPINFOswap::getOpCode() {
		return 95;
	}

	uint32_t OPINFOswap::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// iadd
	OPINFOiadd::OPINFOiadd () {
		jmp = 0;
	}

	void OPINFOiadd::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOiadd::getName () {
		return "iadd";
	}

	u1 OPINFOiadd::getOpCode() {
		return 96;
	}

	uint32_t OPINFOiadd::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// ladd
	OPINFOladd::OPINFOladd () {
		jmp = 0;
	}

	void OPINFOladd::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOladd::getName () {
		return "ladd";
	}

	u1 OPINFOladd::getOpCode() {
		return 97;
	}

	uint32_t OPINFOladd::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// fadd
	OPINFOfadd::OPINFOfadd () {
		jmp = 0;
	}

	void OPINFOfadd::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOfadd::getName () {
		return "fadd";
	}

	u1 OPINFOfadd::getOpCode() {
		return 98;
	}

	uint32_t OPINFOfadd::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// dadd
	OPINFOdadd::OPINFOdadd () {
		jmp = 0;
	}

	void OPINFOdadd::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOdadd::getName () {
		return "dadd";
	}

	u1 OPINFOdadd::getOpCode() {
		return 99;
	}

	uint32_t OPINFOdadd::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// isub
	OPINFOisub::OPINFOisub () {
		jmp = 0;
	}

	void OPINFOisub::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOisub::getName () {
		return "isub";
	}

	u1 OPINFOisub::getOpCode() {
		return 100;
	}

	uint32_t OPINFOisub::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// lsub
	OPINFOlsub::OPINFOlsub () {
		jmp = 0;
	}

	void OPINFOlsub::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOlsub::getName () {
		return "lsub";
	}

	u1 OPINFOlsub::getOpCode() {
		return 101;
	}

	uint32_t OPINFOlsub::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// fsub
	OPINFOfsub::OPINFOfsub () {
		jmp = 0;
	}

	void OPINFOfsub::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOfsub::getName () {
		return "fsub";
	}

	u1 OPINFOfsub::getOpCode() {
		return 102;
	}

	uint32_t OPINFOfsub::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// dsub
	OPINFOdsub::OPINFOdsub () {
		jmp = 0;
	}

	void OPINFOdsub::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOdsub::getName () {
		return "dsub";
	}

	u1 OPINFOdsub::getOpCode() {
		return 103;
	}

	uint32_t OPINFOdsub::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// imul
	OPINFOimul::OPINFOimul () {
		jmp = 0;
	}

	void OPINFOimul::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOimul::getName () {
		return "imul";
	}

	u1 OPINFOimul::getOpCode() {
		return 104;
	}

	uint32_t OPINFOimul::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// lmul
	OPINFOlmul::OPINFOlmul () {
		jmp = 0;
	}

	void OPINFOlmul::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOlmul::getName () {
		return "lmul";
	}

	u1 OPINFOlmul::getOpCode() {
		return 105;
	}

	uint32_t OPINFOlmul::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// fmul
	OPINFOfmul::OPINFOfmul () {
		jmp = 0;
	}

	void OPINFOfmul::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOfmul::getName () {
		return "fmul";
	}

	u1 OPINFOfmul::getOpCode() {
		return 106;
	}

	uint32_t OPINFOfmul::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// dmul
	OPINFOdmul::OPINFOdmul () {
		jmp = 0;
	}

	void OPINFOdmul::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOdmul::getName () {
		return "dmul";
	}

	u1 OPINFOdmul::getOpCode() {
		return 107;
	}

	uint32_t OPINFOdmul::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// idiv
	OPINFOidiv::OPINFOidiv () {
		jmp = 0;
	}

	void OPINFOidiv::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOidiv::getName () {
		return "idiv";
	}

	u1 OPINFOidiv::getOpCode() {
		return 108;
	}

	uint32_t OPINFOidiv::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// ldiv
	OPINFOldiv::OPINFOldiv () {
		jmp = 0;
	}

	void OPINFOldiv::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOldiv::getName () {
		return "ldiv";
	}

	u1 OPINFOldiv::getOpCode() {
		return 109;
	}

	uint32_t OPINFOldiv::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// fdiv
	OPINFOfdiv::OPINFOfdiv () {
		jmp = 0;
	}

	void OPINFOfdiv::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOfdiv::getName () {
		return "fdiv";
	}

	u1 OPINFOfdiv::getOpCode() {
		return 110;
	}

	uint32_t OPINFOfdiv::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// ddiv
	OPINFOddiv::OPINFOddiv () {
		jmp = 0;
	}

	void OPINFOddiv::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOddiv::getName () {
		return "ddiv";
	}

	u1 OPINFOddiv::getOpCode() {
		return 111;
	}

	uint32_t OPINFOddiv::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// irem
	OPINFOirem::OPINFOirem () {
		jmp = 0;
	}

	void OPINFOirem::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOirem::getName () {
		return "irem";
	}

	u1 OPINFOirem::getOpCode() {
		return 112;
	}

	uint32_t OPINFOirem::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// lrem
	OPINFOlrem::OPINFOlrem () {
		jmp = 0;
	}

	void OPINFOlrem::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOlrem::getName () {
		return "lrem";
	}

	u1 OPINFOlrem::getOpCode() {
		return 113;
	}

	uint32_t OPINFOlrem::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// frem
	OPINFOfrem::OPINFOfrem () {
		jmp = 0;
	}

	void OPINFOfrem::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOfrem::getName () {
		return "frem";
	}

	u1 OPINFOfrem::getOpCode() {
		return 114;
	}

	uint32_t OPINFOfrem::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// drem
	OPINFOdrem::OPINFOdrem () {
		jmp = 0;
	}

	void OPINFOdrem::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOdrem::getName () {
		return "drem";
	}

	u1 OPINFOdrem::getOpCode() {
		return 115;
	}

	uint32_t OPINFOdrem::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// ineg
	OPINFOineg::OPINFOineg () {
		jmp = 0;
	}

	void OPINFOineg::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOineg::getName () {
		return "ineg";
	}

	u1 OPINFOineg::getOpCode() {
		return 116;
	}

	uint32_t OPINFOineg::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// lneg
	OPINFOlneg::OPINFOlneg () {
		jmp = 0;
	}

	void OPINFOlneg::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOlneg::getName () {
		return "lneg";
	}

	u1 OPINFOlneg::getOpCode() {
		return 117;
	}

	uint32_t OPINFOlneg::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// fneg
	OPINFOfneg::OPINFOfneg () {
		jmp = 0;
	}

	void OPINFOfneg::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOfneg::getName () {
		return "fneg";
	}

	u1 OPINFOfneg::getOpCode() {
		return 118;
	}

	uint32_t OPINFOfneg::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// dneg
	OPINFOdneg::OPINFOdneg () {
		jmp = 0;
	}

	void OPINFOdneg::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOdneg::getName () {
		return "dneg";
	}

	u1 OPINFOdneg::getOpCode() {
		return 119;
	}

	uint32_t OPINFOdneg::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// ishl
	OPINFOishl::OPINFOishl () {
		jmp = 0;
	}

	void OPINFOishl::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOishl::getName () {
		return "ishl";
	}

	u1 OPINFOishl::getOpCode() {
		return 120;
	}

	uint32_t OPINFOishl::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// lshl
	OPINFOlshl::OPINFOlshl () {
		jmp = 0;
	}

	void OPINFOlshl::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOlshl::getName () {
		return "lshl";
	}

	u1 OPINFOlshl::getOpCode() {
		return 121;
	}

	uint32_t OPINFOlshl::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// ishr
	OPINFOishr::OPINFOishr () {
		jmp = 0;
	}

	void OPINFOishr::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOishr::getName () {
		return "ishr";
	}

	u1 OPINFOishr::getOpCode() {
		return 122;
	}

	uint32_t OPINFOishr::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// lshr
	OPINFOlshr::OPINFOlshr () {
		jmp = 0;
	}

	void OPINFOlshr::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOlshr::getName () {
		return "lshr";
	}

	u1 OPINFOlshr::getOpCode() {
		return 123;
	}

	uint32_t OPINFOlshr::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// iushr
	OPINFOiushr::OPINFOiushr () {
		jmp = 0;
	}

	void OPINFOiushr::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOiushr::getName () {
		return "iushr";
	}

	u1 OPINFOiushr::getOpCode() {
		return 124;
	}

	uint32_t OPINFOiushr::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// lushr
	OPINFOlushr::OPINFOlushr () {
		jmp = 0;
	}

	void OPINFOlushr::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOlushr::getName () {
		return "lushr";
	}

	u1 OPINFOlushr::getOpCode() {
		return 125;
	}

	uint32_t OPINFOlushr::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// iand
	OPINFOiand::OPINFOiand () {
		jmp = 0;
	}

	void OPINFOiand::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOiand::getName () {
		return "iand";
	}

	u1 OPINFOiand::getOpCode() {
		return 126;
	}

	uint32_t OPINFOiand::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// land
	OPINFOland::OPINFOland () {
		jmp = 0;
	}

	void OPINFOland::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOland::getName () {
		return "land";
	}

	u1 OPINFOland::getOpCode() {
		return 127;
	}

	uint32_t OPINFOland::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// ior
	OPINFOior::OPINFOior () {
		jmp = 0;
	}

	void OPINFOior::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOior::getName () {
		return "ior";
	}

	u1 OPINFOior::getOpCode() {
		return 128;
	}

	uint32_t OPINFOior::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// lor
	OPINFOlor::OPINFOlor () {
		jmp = 0;
	}

	void OPINFOlor::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOlor::getName () {
		return "lor";
	}

	u1 OPINFOlor::getOpCode() {
		return 129;
	}

	uint32_t OPINFOlor::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// ixor
	OPINFOixor::OPINFOixor () {
		jmp = 0;
	}

	void OPINFOixor::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOixor::getName () {
		return "ixor";
	}

	u1 OPINFOixor::getOpCode() {
		return 130;
	}

	uint32_t OPINFOixor::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// lxor
	OPINFOlxor::OPINFOlxor () {
		jmp = 0;
	}

	void OPINFOlxor::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOlxor::getName () {
		return "lxor";
	}

	u1 OPINFOlxor::getOpCode() {
		return 131;
	}

	uint32_t OPINFOlxor::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// iinc
	OPINFOiinc::OPINFOiinc () {
		jmp = 2;
	}

	void OPINFOiinc::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << " " << +index << " " << +constant << std::endl;
	}

	std::string OPINFOiinc::getName () {
		return "iinc";
	}

	u1 OPINFOiinc::getOpCode() {
		return 132;
	}

	uint32_t OPINFOiinc::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = data[idx+1];
		constant = Converter::to_i1(data[idx+2]);
		return 2;
	}


	// i2l
	OPINFOi2l::OPINFOi2l () {
		jmp = 0;
	}

	void OPINFOi2l::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOi2l::getName () {
		return "i2l";
	}

	u1 OPINFOi2l::getOpCode() {
		return 133;
	}

	uint32_t OPINFOi2l::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// i2f
	OPINFOi2f::OPINFOi2f () {
		jmp = 0;
	}

	void OPINFOi2f::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOi2f::getName () {
		return "i2f";
	}

	u1 OPINFOi2f::getOpCode() {
		return 134;
	}

	uint32_t OPINFOi2f::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// i2d
	OPINFOi2d::OPINFOi2d () {
		jmp = 0;
	}

	void OPINFOi2d::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOi2d::getName () {
		return "i2d";
	}

	u1 OPINFOi2d::getOpCode() {
		return 135;
	}

	uint32_t OPINFOi2d::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// l2i
	OPINFOl2i::OPINFOl2i () {
		jmp = 0;
	}

	void OPINFOl2i::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOl2i::getName () {
		return "l2i";
	}

	u1 OPINFOl2i::getOpCode() {
		return 136;
	}

	uint32_t OPINFOl2i::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// l2f
	OPINFOl2f::OPINFOl2f () {
		jmp = 0;
	}

	void OPINFOl2f::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOl2f::getName () {
		return "l2f";
	}

	u1 OPINFOl2f::getOpCode() {
		return 137;
	}

	uint32_t OPINFOl2f::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// l2d
	OPINFOl2d::OPINFOl2d () {
		jmp = 0;
	}

	void OPINFOl2d::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOl2d::getName () {
		return "l2d";
	}

	u1 OPINFOl2d::getOpCode() {
		return 138;
	}

	uint32_t OPINFOl2d::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// f2i
	OPINFOf2i::OPINFOf2i () {
		jmp = 0;
	}

	void OPINFOf2i::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOf2i::getName () {
		return "f2i";
	}

	u1 OPINFOf2i::getOpCode() {
		return 139;
	}

	uint32_t OPINFOf2i::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// f2l
	OPINFOf2l::OPINFOf2l () {
		jmp = 0;
	}

	void OPINFOf2l::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOf2l::getName () {
		return "f2l";
	}

	u1 OPINFOf2l::getOpCode() {
		return 140;
	}

	uint32_t OPINFOf2l::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// f2d
	OPINFOf2d::OPINFOf2d () {
		jmp = 0;
	}

	void OPINFOf2d::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOf2d::getName () {
		return "f2d";
	}

	u1 OPINFOf2d::getOpCode() {
		return 141;
	}

	uint32_t OPINFOf2d::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// d2i
	OPINFOd2i::OPINFOd2i () {
		jmp = 0;
	}

	void OPINFOd2i::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOd2i::getName () {
		return "d2i";
	}

	u1 OPINFOd2i::getOpCode() {
		return 142;
	}

	uint32_t OPINFOd2i::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// d2l
	OPINFOd2l::OPINFOd2l () {
		jmp = 0;
	}

	void OPINFOd2l::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOd2l::getName () {
		return "d2l";
	}

	u1 OPINFOd2l::getOpCode() {
		return 143;
	}

	uint32_t OPINFOd2l::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// d2f
	OPINFOd2f::OPINFOd2f () {
		jmp = 0;
	}

	void OPINFOd2f::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOd2f::getName () {
		return "d2f";
	}

	u1 OPINFOd2f::getOpCode() {
		return 144;
	}

	uint32_t OPINFOd2f::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// i2b
	OPINFOi2b::OPINFOi2b () {
		jmp = 0;
	}

	void OPINFOi2b::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOi2b::getName () {
		return "i2b";
	}

	u1 OPINFOi2b::getOpCode() {
		return 145;
	}

	uint32_t OPINFOi2b::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// i2c
	OPINFOi2c::OPINFOi2c () {
		jmp = 0;
	}

	void OPINFOi2c::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOi2c::getName () {
		return "i2c";
	}

	u1 OPINFOi2c::getOpCode() {
		return 146;
	}

	uint32_t OPINFOi2c::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// i2s
	OPINFOi2s::OPINFOi2s () {
		jmp = 0;
	}

	void OPINFOi2s::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOi2s::getName () {
		return "i2s";
	}

	u1 OPINFOi2s::getOpCode() {
		return 147;
	}

	uint32_t OPINFOi2s::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// lcmp
	OPINFOlcmp::OPINFOlcmp () {
		jmp = 0;
	}

	void OPINFOlcmp::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOlcmp::getName () {
		return "lcmp";
	}

	u1 OPINFOlcmp::getOpCode() {
		return 148;
	}

	uint32_t OPINFOlcmp::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// fcmpl
	OPINFOfcmpl::OPINFOfcmpl () {
		jmp = 0;
	}

	void OPINFOfcmpl::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOfcmpl::getName () {
		return "fcmpl";
	}

	u1 OPINFOfcmpl::getOpCode() {
		return 149;
	}

	uint32_t OPINFOfcmpl::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// fcmpg
	OPINFOfcmpg::OPINFOfcmpg () {
		jmp = 0;
	}

	void OPINFOfcmpg::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOfcmpg::getName () {
		return "fcmpg";
	}

	u1 OPINFOfcmpg::getOpCode() {
		return 150;
	}

	uint32_t OPINFOfcmpg::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// dcmpl
	OPINFOdcmpl::OPINFOdcmpl () {
		jmp = 0;
	}

	void OPINFOdcmpl::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOdcmpl::getName () {
		return "dcmpl";
	}

	u1 OPINFOdcmpl::getOpCode() {
		return 151;
	}

	uint32_t OPINFOdcmpl::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// dcmpg
	OPINFOdcmpg::OPINFOdcmpg () {
		jmp = 0;
	}

	void OPINFOdcmpg::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOdcmpg::getName () {
		return "dcmpg";
	}

	u1 OPINFOdcmpg::getOpCode() {
		return 152;
	}

	uint32_t OPINFOdcmpg::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// ifeq
	OPINFOifeq::OPINFOifeq () {
		jmp = 2;
	}

	void OPINFOifeq::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << " " << branchoffset << std::endl;
	}

	std::string OPINFOifeq::getName () {
		return "ifeq";
	}

	u1 OPINFOifeq::getOpCode() {
		return 153;
	}

	uint32_t OPINFOifeq::fillParams (uint32_t idx, std::vector<u1>& data) {
		branchoffset = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}


	// ifne
	OPINFOifne::OPINFOifne () {
		jmp = 2;
	}

	void OPINFOifne::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << " " << branchoffset << std::endl;
	}

	std::string OPINFOifne::getName () {
		return "ifne";
	}

	u1 OPINFOifne::getOpCode() {
		return 154;
	}

	uint32_t OPINFOifne::fillParams (uint32_t idx, std::vector<u1>& data) {
		branchoffset = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}


	// iflt
	OPINFOiflt::OPINFOiflt () {
		jmp = 2;
	}

	void OPINFOiflt::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << " " << branchoffset << std::endl;
	}

	std::string OPINFOiflt::getName () {
		return "iflt";
	}

	u1 OPINFOiflt::getOpCode() {
		return 155;
	}

	uint32_t OPINFOiflt::fillParams (uint32_t idx, std::vector<u1>& data) {
		branchoffset = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}


	// ifge
	OPINFOifge::OPINFOifge () {
		jmp = 2;
	}

	void OPINFOifge::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << " " << branchoffset << std::endl;
	}

	std::string OPINFOifge::getName () {
		return "ifge";
	}

	u1 OPINFOifge::getOpCode() {
		return 156;
	}

	uint32_t OPINFOifge::fillParams (uint32_t idx, std::vector<u1>& data) {
		branchoffset = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}


	// ifgt
	OPINFOifgt::OPINFOifgt () {
		jmp = 2;
	}

	void OPINFOifgt::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << " " << branchoffset << std::endl;
	}

	std::string OPINFOifgt::getName () {
		return "ifgt";
	}

	u1 OPINFOifgt::getOpCode() {
		return 157;
	}

	uint32_t OPINFOifgt::fillParams (uint32_t idx, std::vector<u1>& data) {
		branchoffset = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}


	// ifle
	OPINFOifle::OPINFOifle () {
		jmp = 2;
	}

	void OPINFOifle::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << " " << branchoffset << std::endl;
	}

	std::string OPINFOifle::getName () {
		return "ifle";
	}

	u1 OPINFOifle::getOpCode() {
		return 158;
	}

	uint32_t OPINFOifle::fillParams (uint32_t idx, std::vector<u1>& data) {
		branchoffset = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}


	// if_icmpeq
	OPINFOif_icmpeq::OPINFOif_icmpeq () {
		jmp = 2;
	}

	void OPINFOif_icmpeq::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << " " << branchoffset << std::endl;
	}

	std::string OPINFOif_icmpeq::getName () {
		return "if_icmpeq";
	}

	u1 OPINFOif_icmpeq::getOpCode() {
		return 159;
	}

	uint32_t OPINFOif_icmpeq::fillParams (uint32_t idx, std::vector<u1>& data) {
		branchoffset = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}


	// if_icmpne
	OPINFOif_icmpne::OPINFOif_icmpne () {
		jmp = 2;
	}

	void OPINFOif_icmpne::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << " " << branchoffset << std::endl;
	}

	std::string OPINFOif_icmpne::getName () {
		return "if_icmpne";
	}

	u1 OPINFOif_icmpne::getOpCode() {
		return 160;
	}

	uint32_t OPINFOif_icmpne::fillParams (uint32_t idx, std::vector<u1>& data) {
		branchoffset = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}


	// if_icmplt
	OPINFOif_icmplt::OPINFOif_icmplt () {
		jmp = 2;
	}

	void OPINFOif_icmplt::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << " " << branchoffset << std::endl;
	}

	std::string OPINFOif_icmplt::getName () {
		return "if_icmplt";
	}

	u1 OPINFOif_icmplt::getOpCode() {
		return 61;
	}

	uint32_t OPINFOif_icmplt::fillParams (uint32_t idx, std::vector<u1>& data) {
		branchoffset = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}


	// if_icmpge
	OPINFOif_icmpge::OPINFOif_icmpge () {
		jmp = 2;
	}

	void OPINFOif_icmpge::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << " " << branchoffset << std::endl;
	}

	std::string OPINFOif_icmpge::getName () {
		return "if_icmpge";
	}

	u1 OPINFOif_icmpge::getOpCode() {
		return 162;
	}

	uint32_t OPINFOif_icmpge::fillParams (uint32_t idx, std::vector<u1>& data) {
		branchoffset = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}


	// if_icmpgt
	OPINFOif_icmpgt::OPINFOif_icmpgt () {
		jmp = 2;
	}

	void OPINFOif_icmpgt::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << " " << branchoffset << std::endl;
	}

	std::string OPINFOif_icmpgt::getName () {
		return "if_icmpgt";
	}

	u1 OPINFOif_icmpgt::getOpCode() {
		return 163;
	}

	uint32_t OPINFOif_icmpgt::fillParams (uint32_t idx, std::vector<u1>& data) {
		branchoffset = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}


	// if_icmple
	OPINFOif_icmple::OPINFOif_icmple () {
		jmp = 2;
	}

	void OPINFOif_icmple::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << " " << branchoffset << std::endl;
	}

	std::string OPINFOif_icmple::getName () {
		return "if_icmple";
	}

	u1 OPINFOif_icmple::getOpCode() {
		return 164;
	}

	uint32_t OPINFOif_icmple::fillParams (uint32_t idx, std::vector<u1>& data) {
		branchoffset = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}


	// if_acmpeq
	OPINFOif_acmpeq::OPINFOif_acmpeq () {
		jmp = 2;
	}

	void OPINFOif_acmpeq::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << " " << branchoffset << std::endl;
	}

	std::string OPINFOif_acmpeq::getName () {
		return "if_acmpeq";
	}

	u1 OPINFOif_acmpeq::getOpCode() {
		return 165;
	}

	uint32_t OPINFOif_acmpeq::fillParams (uint32_t idx, std::vector<u1>& data) {
		branchoffset = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}


	// if_acmpne
	OPINFOif_acmpne::OPINFOif_acmpne () {
		jmp = 2;
	}

	void OPINFOif_acmpne::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << " " << branchoffset << std::endl;
	}

	std::string OPINFOif_acmpne::getName () {
		return "if_acmpne";
	}

	u1 OPINFOif_acmpne::getOpCode() {
		return 166;
	}

	uint32_t OPINFOif_acmpne::fillParams (uint32_t idx, std::vector<u1>& data) {
		branchoffset = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}


	// goto
	OPINFOgoto::OPINFOgoto () {
		jmp = 2;
	}

	void OPINFOgoto::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << " " << branchoffset << std::endl;
	}

	std::string OPINFOgoto::getName () {
		return "goto";
	}

	u1 OPINFOgoto::getOpCode() {
		return 167;
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
	OPINFOjsr::OPINFOjsr () {
		jmp = 2;
	}

	void OPINFOjsr::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << " " << branchoffset << std::endl;
	}

	std::string OPINFOjsr::getName () {
		return "jsr";
	}

	u1 OPINFOjsr::getOpCode() {
		return 168;
	}

	uint32_t OPINFOjsr::fillParams (uint32_t idx, std::vector<u1>& data) {
		branchoffset = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}


	// ret
	OPINFOret::OPINFOret () {
		jmp = 1;
	}

	void OPINFOret::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << " " << +index << std::endl;
	}

	std::string OPINFOret::getName () {
		return "ret";
	}

	u1 OPINFOret::getOpCode() {
		return 169;
	}

	uint32_t OPINFOret::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = data[idx+1];
		return 1;
	}


	// tableswitch
	OPINFOtableswitch::OPINFOtableswitch () {
		jmp = 16;
	}

	void OPINFOtableswitch::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << " " << defaultbyte << " " << low << " " << high; // TODO: << " " << jumpOffsets << std::endl;
	}

	std::string OPINFOtableswitch::getName () {
		return "tableswitch";
	}

	u1 OPINFOtableswitch::getOpCode() {
		return 170;
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
	OPINFOlookupswitch::OPINFOlookupswitch () {
		jmp = 8;
	}

	void OPINFOlookupswitch::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << " " << npairs << " ";

		for(auto& sm_pair : pairs)
			os << sm_pair.first << " ";

		os << defaultbyte << std::endl;
	}

	std::string OPINFOlookupswitch::getName () {
		return "lookupswitch";
	}

	u1 OPINFOlookupswitch::getOpCode() {
		return 171;
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
	OPINFOireturn::OPINFOireturn () {
		jmp = 0;
	}

	void OPINFOireturn::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOireturn::getName () {
		return "ireturn";
	}

	u1 OPINFOireturn::getOpCode() {
		return 172;
	}

	uint32_t OPINFOireturn::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// lreturn
	OPINFOlreturn::OPINFOlreturn () {
		jmp = 0;
	}

	void OPINFOlreturn::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOlreturn::getName () {
		return "lreturn";
	}

	u1 OPINFOlreturn::getOpCode() {
		return 173;
	}

	uint32_t OPINFOlreturn::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// freturn
	OPINFOfreturn::OPINFOfreturn () {
		jmp = 0;
	}

	void OPINFOfreturn::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOfreturn::getName () {
		return "freturn";
	}

	u1 OPINFOfreturn::getOpCode() {
		return 174;
	}

	uint32_t OPINFOfreturn::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// dreturn
	OPINFOdreturn::OPINFOdreturn () {
		jmp = 0;
	}

	void OPINFOdreturn::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOdreturn::getName () {
		return "dreturn";
	}

	u1 OPINFOdreturn::getOpCode() {
		return 175;
	}

	uint32_t OPINFOdreturn::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// areturn
	OPINFOareturn::OPINFOareturn () {
		jmp = 0;
	}

	void OPINFOareturn::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOareturn::getName () {
		return "areturn";
	}

	u1 OPINFOareturn::getOpCode() {
		return 176;
	}

	uint32_t OPINFOareturn::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// return
	OPINFOreturn::OPINFOreturn () {
		jmp = 0;
	}

	void OPINFOreturn::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOreturn::getName () {
		return "return";
	}

	u1 OPINFOreturn::getOpCode() {
		return 177;
	}

	uint32_t OPINFOreturn::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// getstatic
	OPINFOgetstatic::OPINFOgetstatic () {
		jmp = 2;
	}

	void OPINFOgetstatic::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << " " << index << std::endl;
	}

	std::string OPINFOgetstatic::getName () {
		return "getstatic";
	}

	u1 OPINFOgetstatic::getOpCode() {
		return 178;
	}

	uint32_t OPINFOgetstatic::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}


	// putstatic
	OPINFOputstatic::OPINFOputstatic () {
		jmp = 2;
	}

	void OPINFOputstatic::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << " " << index << std::endl;
	}

	std::string OPINFOputstatic::getName () {
		return "putstatic";
	}

	u1 OPINFOputstatic::getOpCode() {
		return 179;
	}

	uint32_t OPINFOputstatic::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}


	// getfield
	OPINFOgetfield::OPINFOgetfield () {
		jmp = 2;
	}

	void OPINFOgetfield::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << " " << index << std::endl;
	}

	std::string OPINFOgetfield::getName () {
		return "getfield";
	}

	u1 OPINFOgetfield::getOpCode() {
		return 180;
	}

	uint32_t OPINFOgetfield::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}


	// putfield
	OPINFOputfield::OPINFOputfield () {
		jmp = 2;
	}

	void OPINFOputfield::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << " " << index << std::endl;
	}

	std::string OPINFOputfield::getName () {
		return "putfield";
	}

	u1 OPINFOputfield::getOpCode() {
		return 181;
	}

	uint32_t OPINFOputfield::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}


	// invokevirtual
	OPINFOinvokevirtual::OPINFOinvokevirtual () {
		jmp = 2;
	}

	void OPINFOinvokevirtual::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << " " << index << std::endl;
	}

	std::string OPINFOinvokevirtual::getName () {
		return "invokevirtual";
	}

	u1 OPINFOinvokevirtual::getOpCode() {
		return 182;
	}

	uint32_t OPINFOinvokevirtual::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}


	// invokespecial
	OPINFOinvokespecial::OPINFOinvokespecial () {
		jmp = 2;
	}

	void OPINFOinvokespecial::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		auto Method_ref = (CP_Methodref*) cl[index];
		auto _class = (CP_Class*) cl[Method_ref->class_index];
		auto& class_name = cl[_class->name_index]->as<CP_Utf8>();
		auto name_and_type = (CP_NameAndType*) cl[Method_ref->name_and_type_index];
		auto& name = cl[name_and_type->name_index]->as<CP_Utf8>();
		auto& type = cl[name_and_type->descriptor_index]->as<CP_Utf8>();

		os << prefix << getName() << " " << index << " \"" << class_name << "/" << name << type << "\"" << std::endl;
	}

	std::string OPINFOinvokespecial::getName () {
		return "invokespecial";
	}

	u1 OPINFOinvokespecial::getOpCode() {
		return 183;
	}

	uint32_t OPINFOinvokespecial::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}


	// invokestatic
	OPINFOinvokestatic::OPINFOinvokestatic () {
		jmp = 2;
	}

	void OPINFOinvokestatic::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << " " << index << std::endl;
	}

	std::string OPINFOinvokestatic::getName () {
		return "invokestatic";
	}

	u1 OPINFOinvokestatic::getOpCode() {
		return 184;
	}

	uint32_t OPINFOinvokestatic::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}


	// invokeinterface
	OPINFOinvokeinterface::OPINFOinvokeinterface () {
		jmp = 4;
	}

	void OPINFOinvokeinterface::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << " " << index << " " << +count << std::endl;
	}

	std::string OPINFOinvokeinterface::getName () {
		return "invokeinterface";
	}

	u1 OPINFOinvokeinterface::getOpCode() {
		return 185;
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
	OPINFOinvokedynamic::OPINFOinvokedynamic () {
		jmp = 4;
	}

	void OPINFOinvokedynamic::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << " " << index << " 0 0" << std::endl;
	}

	std::string OPINFOinvokedynamic::getName () {
		return "invokedynamic";
	}

	u1 OPINFOinvokedynamic::getOpCode() {
		return 186;
	}

	uint32_t OPINFOinvokedynamic::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = Converter::to_u2(data[idx+1], data[idx+2]);
		if(!data[idx+3] || !data[idx+4]) {
			throw JvmException("Invalid invokedynamic: the value of the last 2 arguments must be zero");
		}
		return 4;
	}


	// new
	OPINFOnew::OPINFOnew () {
		jmp = 2;
	}

	void OPINFOnew::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << " " << index << std::endl;
	}

	std::string OPINFOnew::getName () {
		return "new";
	}

	u1 OPINFOnew::getOpCode() {
		return 187;
	}

	uint32_t OPINFOnew::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}


	// newarray
	OPINFOnewarray::OPINFOnewarray () {
		jmp = 1;
	}

	void OPINFOnewarray::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << " " << +atype << std::endl;
	}

	std::string OPINFOnewarray::getName () {
		return "newarray";
	}

	u1 OPINFOnewarray::getOpCode() {
		return 188;
	}

	uint32_t OPINFOnewarray::fillParams (uint32_t idx, std::vector<u1>& data) {
		atype = data[idx+1];
		return 1;
	}


	// anewarray
	OPINFOanewarray::OPINFOanewarray () {
		jmp = 2;
	}

	void OPINFOanewarray::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << " " << index << std::endl;
	}

	std::string OPINFOanewarray::getName () {
		return "anewarray";
	}

	u1 OPINFOanewarray::getOpCode() {
		return 189;
	}

	uint32_t OPINFOanewarray::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}


	// arraylength
	OPINFOarraylength::OPINFOarraylength () {
		jmp = 0;
	}

	void OPINFOarraylength::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOarraylength::getName () {
		return "arraylength";
	}

	u1 OPINFOarraylength::getOpCode() {
		return 190;
	}

	uint32_t OPINFOarraylength::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// athrow
	OPINFOathrow::OPINFOathrow () {
		jmp = 0;
	}

	void OPINFOathrow::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOathrow::getName () {
		return "athrow";
	}

	u1 OPINFOathrow::getOpCode() {
		return 191;
	}

	uint32_t OPINFOathrow::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// checkcast
	OPINFOcheckcast::OPINFOcheckcast () {
		jmp = 2;
	}

	void OPINFOcheckcast::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << " " << index << std::endl;
	}

	std::string OPINFOcheckcast::getName () {
		return "checkcast";
	}

	u1 OPINFOcheckcast::getOpCode() {
		return 192;
	}

	uint32_t OPINFOcheckcast::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}


	// instanceof
	OPINFOinstanceof::OPINFOinstanceof () {
		jmp = 2;
	}

	void OPINFOinstanceof::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << " " << index << std::endl;
	}

	std::string OPINFOinstanceof::getName () {
		return "instanceof";
	}

	u1 OPINFOinstanceof::getOpCode() {
		return 193;
	}

	uint32_t OPINFOinstanceof::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}


	// monitorenter
	OPINFOmonitorenter::OPINFOmonitorenter () {
		jmp = 0;
	}

	void OPINFOmonitorenter::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOmonitorenter::getName () {
		return "monitorenter";
	}

	u1 OPINFOmonitorenter::getOpCode() {
		return 194;
	}

	uint32_t OPINFOmonitorenter::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// monitorexit
	OPINFOmonitorexit::OPINFOmonitorexit () {
		jmp = 0;
	}

	void OPINFOmonitorexit::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOmonitorexit::getName () {
		return "monitorexit";
	}

	u1 OPINFOmonitorexit::getOpCode() {
		return 195;
	}

	uint32_t OPINFOmonitorexit::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// wide
	OPINFOwide::OPINFOwide () {
		jmp = 3;
	}

	void OPINFOwide::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << " " << +opcode << " " << index << " " << countbyte << std::endl;
	}

	std::string OPINFOwide::getName () {
		return "wide";
	}

	u1 OPINFOwide::getOpCode() {
		return 196;
	}

	uint32_t OPINFOwide::fillParams (uint32_t idx, std::vector<u1>& data) {
		OPINFOiinc iinc;

		opcode = data[idx + 1];

		index = Converter::to_u2(data[idx + 2], data[idx + 3]);

		if (opcode == iinc.getOpCode()) {
			countbyte = Converter::to_u2(data[idx + 4], data[idx + 5]);
			return jmp = 5;
		}

		return jmp = 3;
	}


	// multianewarray
	OPINFOmultianewarray::OPINFOmultianewarray () {
		jmp = 3;
	}

	void OPINFOmultianewarray::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << " " << +index << " " << cl[index]->toString(cl) << " dim " << +dimensions << std::endl;
	}

	std::string OPINFOmultianewarray::getName () {
		return "multianewarray";
	}

	u1 OPINFOmultianewarray::getOpCode() {
		return 197;
	}

	uint32_t OPINFOmultianewarray::fillParams (uint32_t idx, std::vector<u1>& data) {
		index = Converter::to_u2(data[idx+1], data[idx+2]);
		dimensions = data[idx+3];

		if(dimensions < 1u)
			throw JvmException("Invalid multianewarray: the number of dimensions of the array must be greater than or equal to 1");

		return 3;
	}


	// ifnull
	OPINFOifnull::OPINFOifnull () {
		jmp = 2;
	}

	void OPINFOifnull::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << " " << branchoffset << std::endl;
	}

	std::string OPINFOifnull::getName () {
		return "ifnull";
	}

	u1 OPINFOifnull::getOpCode() {
		return 198;
	}

	uint32_t OPINFOifnull::fillParams (uint32_t idx, std::vector<u1>& data) {
		branchoffset = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}


	// ifnonnull
	OPINFOifnonnull::OPINFOifnonnull () {
		jmp = 2;
	}

	void OPINFOifnonnull::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << " " << branchoffset << std::endl;
	}

	std::string OPINFOifnonnull::getName () {
		return "ifnonnull";
	}

	u1 OPINFOifnonnull::getOpCode() {
		return 199;
	}

	uint32_t OPINFOifnonnull::fillParams (uint32_t idx, std::vector<u1>& data) {
		branchoffset = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}


	// goto_w
	OPINFOgoto_w::OPINFOgoto_w () {
		jmp = 4;
	}

	void OPINFOgoto_w::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << " " << branchoffset << std::endl;
	}

	std::string OPINFOgoto_w::getName () {
		return "goto_w";
	}

	u1 OPINFOgoto_w::getOpCode() {
		return 200;
	}

	uint32_t OPINFOgoto_w::fillParams (uint32_t idx, std::vector<u1>& data) {
		branchoffset = Converter::to_i4(data[idx+1], data[idx+2], data[idx+3], data[idx+4]);
		return 4;
	}


	// jsr_w
	OPINFOjsr_w::OPINFOjsr_w () {
		jmp = 4;
	}

	void OPINFOjsr_w::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << " " << branchoffset << std::endl;
	}

	std::string OPINFOjsr_w::getName () {
		return "jsr_w";
	}

	u1 OPINFOjsr_w::getOpCode() {
		return 201;
	}

	uint32_t OPINFOjsr_w::fillParams (uint32_t idx, std::vector<u1>& data) {
		branchoffset = Converter::to_i4(data[idx+1], data[idx+2], data[idx+3], data[idx+4]);
		return 4;
	}


	// breakpoint
	OPINFObreakpoint::OPINFObreakpoint () {
		jmp = 0;
	}

	void OPINFObreakpoint::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFObreakpoint::getName () {
		return "breakpoint";
	}

	u1 OPINFObreakpoint::getOpCode() {
		return 202;
	}

	uint32_t OPINFObreakpoint::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// impdep1
	OPINFOimpdep1::OPINFOimpdep1 () {
		jmp = 0;
	}

	void OPINFOimpdep1::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOimpdep1::getName () {
		return "impdep1";
	}

	u1 OPINFOimpdep1::getOpCode() {
		return 254;
	}

	uint32_t OPINFOimpdep1::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}


	// impdep2
	OPINFOimpdep2::OPINFOimpdep2 () {
		jmp = 0;
	}

	void OPINFOimpdep2::printToStream(std::ostream& os, std::string& prefix, ConstantPool& cl) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOimpdep2::getName () {
		return "impdep2";
	}

	u1 OPINFOimpdep2::getOpCode() {
		return 255;
	}

	uint32_t OPINFOimpdep2::fillParams (uint32_t idx, std::vector<u1>& data) {
		return 0;
	}

};
