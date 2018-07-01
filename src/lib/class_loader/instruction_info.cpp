#include "class_loader/instruction_info.hpp"

namespace jvm {

	// nop
	OPINFOnop::OPINFOnop () {
		jpm = 0;
	}

	void OPINFOnop::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOnop::getName () {
		return "nop";
	}

	uint32_t OPINFOnop::getOpCode () {
		return 0;
	}

	uint32_t OPINFOnop::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// aconst_null
	OPINFOaconst_null::OPINFOaconst_null () {
		jpm = 0;
	}

	void OPINFOaconst_null::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOaconst_null::getName () {
		return "aconst_null";
	}

	uint32_t OPINFOaconst_null::getOpCode () {
		return 1;
	}

	uint32_t OPINFOaconst_null::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// iconst_m1
	OPINFOiconst_m1::OPINFOiconst_m1 () {
		jpm = 0;
	}

	void OPINFOiconst_m1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOiconst_m1::getName () {
		return "iconst_m1";
	}

	uint32_t OPINFOiconst_m1::getOpCode () {
		return 2;
	}

	uint32_t OPINFOiconst_m1::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// iconst_0
	OPINFOiconst_0::OPINFOiconst_0 () {
		jpm = 0;
	}

	void OPINFOiconst_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOiconst_0::getName () {
		return "iconst_0";
	}

	uint32_t OPINFOiconst_0::getOpCode () {
		return 3;
	}

	uint32_t OPINFOiconst_0::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// iconst_1
	OPINFOiconst_1::OPINFOiconst_1 () {
		jpm = 0;
	}

	void OPINFOiconst_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOiconst_1::getName () {
		return "iconst_1";
	}

	uint32_t OPINFOiconst_1::getOpCode () {
		return 4;
	}

	uint32_t OPINFOiconst_1::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// iconst_2
	OPINFOiconst_2::OPINFOiconst_2 () {
		jpm = 0;
	}

	void OPINFOiconst_2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOiconst_2::getName () {
		return "iconst_2";
	}

	uint32_t OPINFOiconst_2::getOpCode () {
		return 5;
	}

	uint32_t OPINFOiconst_2::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// iconst_3
	OPINFOiconst_3::OPINFOiconst_3 () {
		jpm = 0;
	}

	void OPINFOiconst_3::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOiconst_3::getName () {
		return "iconst_3";
	}

	uint32_t OPINFOiconst_3::getOpCode () {
		return 6;
	}

	uint32_t OPINFOiconst_3::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// iconst_4
	OPINFOiconst_4::OPINFOiconst_4 () {
		jpm = 0;
	}

	void OPINFOiconst_4::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOiconst_4::getName () {
		return "iconst_4";
	}

	uint32_t OPINFOiconst_4::getOpCode () {
		return 7;
	}

	uint32_t OPINFOiconst_4::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// iconst_5
	OPINFOiconst_5::OPINFOiconst_5 () {
		jpm = 0;
	}

	void OPINFOiconst_5::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOiconst_5::getName () {
		return "iconst_5";
	}

	uint32_t OPINFOiconst_5::getOpCode () {
		return 8;
	}

	uint32_t OPINFOiconst_5::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lconst_0
	OPINFOlconst_0::OPINFOlconst_0 () {
		jpm = 0;
	}

	void OPINFOlconst_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOlconst_0::getName () {
		return "lconst_0";
	}

	uint32_t OPINFOlconst_0::getOpCode () {
		return 9;
	}

	uint32_t OPINFOlconst_0::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lconst_1
	OPINFOlconst_1::OPINFOlconst_1 () {
		jpm = 0;
	}

	void OPINFOlconst_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOlconst_1::getName () {
		return "lconst_1";
	}

	uint32_t OPINFOlconst_1::getOpCode () {
		return 10;
	}

	uint32_t OPINFOlconst_1::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fconst_0
	OPINFOfconst_0::OPINFOfconst_0 () {
		jpm = 0;
	}

	void OPINFOfconst_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOfconst_0::getName () {
		return "fconst_0";
	}

	uint32_t OPINFOfconst_0::getOpCode () {
		return 11;
	}

	uint32_t OPINFOfconst_0::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fconst_1
	OPINFOfconst_1::OPINFOfconst_1 () {
		jpm = 0;
	}

	void OPINFOfconst_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOfconst_1::getName () {
		return "fconst_1";
	}

	uint32_t OPINFOfconst_1::getOpCode () {
		return 12;
	}

	uint32_t OPINFOfconst_1::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fconst_2
	OPINFOfconst_2::OPINFOfconst_2 () {
		jpm = 0;
	}

	void OPINFOfconst_2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOfconst_2::getName () {
		return "fconst_2";
	}

	uint32_t OPINFOfconst_2::getOpCode () {
		return 13;
	}

	uint32_t OPINFOfconst_2::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dconst_0
	OPINFOdconst_0::OPINFOdconst_0 () {
		jpm = 0;
	}

	void OPINFOdconst_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOdconst_0::getName () {
		return "dconst_0";
	}

	uint32_t OPINFOdconst_0::getOpCode () {
		return 14;
	}

	uint32_t OPINFOdconst_0::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dconst_1
	OPINFOdconst_1::OPINFOdconst_1 () {
		jpm = 0;
	}

	void OPINFOdconst_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOdconst_1::getName () {
		return "dconst_1";
	}

	uint32_t OPINFOdconst_1::getOpCode () {
		return 15;
	}

	uint32_t OPINFOdconst_1::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// bipush
	OPINFObipush::OPINFObipush () {
		jpm = 0;
	}

	void OPINFObipush::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << +byte << std::endl;
	}

	std::string OPINFObipush::getName () {
		return "bipush";
	}

	uint32_t OPINFObipush::getOpCode () {
		return 16;
	}

	uint32_t OPINFObipush::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		byte = Converter::to_i1(data[idx+1]);
		return 1;
	}


	// sipush
	OPINFOsipush::OPINFOsipush () {
		jpm = 0;
	}

	void OPINFOsipush::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << value << std::endl;
	}

	std::string OPINFOsipush::getName () {
		return "sipush";
	}

	uint32_t OPINFOsipush::getOpCode () {
		return 17;
	}

	uint32_t OPINFOsipush::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		value = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}


	// ldc
	OPINFOldc::OPINFOldc () {
		jpm = 0;
	}

	void OPINFOldc::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << +index << std::endl;
	}

	std::string OPINFOldc::getName () {
		return "ldc";
	}

	uint32_t OPINFOldc::getOpCode () {
		return 18;
	}

	uint32_t OPINFOldc::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		index = data[idx+1];
		return 1;
	}


	// ldc_w
	OPINFOldc_w::OPINFOldc_w () {
		jpm = 0;
	}

	void OPINFOldc_w::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << index << std::endl;
	}

	std::string OPINFOldc_w::getName () {
		return "ldc_w";
	}

	uint32_t OPINFOldc_w::getOpCode () {
		return 19;
	}

	uint32_t OPINFOldc_w::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		index = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}


	// ldc2_w
	OPINFOldc2_w::OPINFOldc2_w () {
		jpm = 0;
	}

	void OPINFOldc2_w::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << index << std::endl;
	}

	std::string OPINFOldc2_w::getName () {
		return "ldc2_w";
	}

	uint32_t OPINFOldc2_w::getOpCode () {
		return 20;
	}

	uint32_t OPINFOldc2_w::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		index = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}


	// iload
	OPINFOiload::OPINFOiload () {
		jpm = 0;
	}

	void OPINFOiload::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << +index << std::endl;
	}

	std::string OPINFOiload::getName () {
		return "iload";
	}

	uint32_t OPINFOiload::getOpCode () {
		return 21;
	}

	uint32_t OPINFOiload::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		index = data[idx+1];
		return 1;
	}


	// lload
	OPINFOlload::OPINFOlload () {
		jpm = 0;
	}

	void OPINFOlload::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << +index << std::endl;
	}

	std::string OPINFOlload::getName () {
		return "lload";
	}

	uint32_t OPINFOlload::getOpCode () {
		return 22;
	}

	uint32_t OPINFOlload::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		index = data[idx+1];
		return 0;
	}


	// fload
	OPINFOfload::OPINFOfload () {
		jpm = 0;
	}

	void OPINFOfload::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << +index << std::endl;
	}

	std::string OPINFOfload::getName () {
		return "fload";
	}

	uint32_t OPINFOfload::getOpCode () {
		return 23;
	}

	uint32_t OPINFOfload::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		index = data[idx+1];
		return 1;
	}


	// dload
	OPINFOdload::OPINFOdload () {
		jpm = 0;
	}

	void OPINFOdload::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << +index << std::endl;
	}

	std::string OPINFOdload::getName () {
		return "dload";
	}

	uint32_t OPINFOdload::getOpCode () {
		return 24;
	}

	uint32_t OPINFOdload::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		index = data[idx+1];
		return 1;
	}


	// aload
	OPINFOaload::OPINFOaload () {
		jpm = 0;
	}

	void OPINFOaload::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << +index << std::endl;
	}

	std::string OPINFOaload::getName () {
		return "aload";
	}

	uint32_t OPINFOaload::getOpCode () {
		return 25;
	}

	uint32_t OPINFOaload::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		index = data[idx+1];
		return 1;
	}


	// iload_0
	OPINFOiload_0::OPINFOiload_0 () {
		jpm = 0;
	}

	void OPINFOiload_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOiload_0::getName () {
		return "iload_0";
	}

	uint32_t OPINFOiload_0::getOpCode () {
		return 26;
	}

	uint32_t OPINFOiload_0::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// iload_1
	OPINFOiload_1::OPINFOiload_1 () {
		jpm = 0;
	}

	void OPINFOiload_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOiload_1::getName () {
		return "iload_1";
	}

	uint32_t OPINFOiload_1::getOpCode () {
		return 27;
	}

	uint32_t OPINFOiload_1::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// iload_2
	OPINFOiload_2::OPINFOiload_2 () {
		jpm = 0;
	}

	void OPINFOiload_2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOiload_2::getName () {
		return "iload_2";
	}

	uint32_t OPINFOiload_2::getOpCode () {
		return 28;
	}

	uint32_t OPINFOiload_2::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// iload_3
	OPINFOiload_3::OPINFOiload_3 () {
		jpm = 0;
	}

	void OPINFOiload_3::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOiload_3::getName () {
		return "iload_3";
	}

	uint32_t OPINFOiload_3::getOpCode () {
		return 29;
	}

	uint32_t OPINFOiload_3::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lload_0
	OPINFOlload_0::OPINFOlload_0 () {
		jpm = 0;
	}

	void OPINFOlload_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOlload_0::getName () {
		return "lload_0";
	}

	uint32_t OPINFOlload_0::getOpCode () {
		return 30;
	}

	uint32_t OPINFOlload_0::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lload_1
	OPINFOlload_1::OPINFOlload_1 () {
		jpm = 0;
	}

	void OPINFOlload_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOlload_1::getName () {
		return "lload_1";
	}

	uint32_t OPINFOlload_1::getOpCode () {
		return 31;
	}

	uint32_t OPINFOlload_1::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lload_2
	OPINFOlload_2::OPINFOlload_2 () {
		jpm = 0;
	}

	void OPINFOlload_2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOlload_2::getName () {
		return "lload_2";
	}

	uint32_t OPINFOlload_2::getOpCode () {
		return 32;
	}

	uint32_t OPINFOlload_2::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lload_3
	OPINFOlload_3::OPINFOlload_3 () {
		jpm = 0;
	}

	void OPINFOlload_3::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOlload_3::getName () {
		return "lload_3";
	}

	uint32_t OPINFOlload_3::getOpCode () {
		return 33;
	}

	uint32_t OPINFOlload_3::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fload_0
	OPINFOfload_0::OPINFOfload_0 () {
		jpm = 0;
	}

	void OPINFOfload_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOfload_0::getName () {
		return "fload_0";
	}

	uint32_t OPINFOfload_0::getOpCode () {
		return 34;
	}

	uint32_t OPINFOfload_0::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fload_1
	OPINFOfload_1::OPINFOfload_1 () {
		jpm = 0;
	}

	void OPINFOfload_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOfload_1::getName () {
		return "fload_1";
	}

	uint32_t OPINFOfload_1::getOpCode () {
		return 35;
	}

	uint32_t OPINFOfload_1::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fload_2
	OPINFOfload_2::OPINFOfload_2 () {
		jpm = 0;
	}

	void OPINFOfload_2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOfload_2::getName () {
		return "fload_2";
	}

	uint32_t OPINFOfload_2::getOpCode () {
		return 36;
	}

	uint32_t OPINFOfload_2::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fload_3
	OPINFOfload_3::OPINFOfload_3 () {
		jpm = 0;
	}

	void OPINFOfload_3::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOfload_3::getName () {
		return "fload_3";
	}

	uint32_t OPINFOfload_3::getOpCode () {
		return 37;
	}

	uint32_t OPINFOfload_3::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dload_0
	OPINFOdload_0::OPINFOdload_0 () {
		jpm = 0;
	}

	void OPINFOdload_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOdload_0::getName () {
		return "dload_0";
	}

	uint32_t OPINFOdload_0::getOpCode () {
		return 38;
	}

	uint32_t OPINFOdload_0::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dload_1
	OPINFOdload_1::OPINFOdload_1 () {
		jpm = 0;
	}

	void OPINFOdload_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOdload_1::getName () {
		return "dload_1";
	}

	uint32_t OPINFOdload_1::getOpCode () {
		return 39;
	}

	uint32_t OPINFOdload_1::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dload_2
	OPINFOdload_2::OPINFOdload_2 () {
		jpm = 0;
	}

	void OPINFOdload_2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOdload_2::getName () {
		return "dload_2";
	}

	uint32_t OPINFOdload_2::getOpCode () {
		return 40;
	}

	uint32_t OPINFOdload_2::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dload_3
	OPINFOdload_3::OPINFOdload_3 () {
		jpm = 0;
	}

	void OPINFOdload_3::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOdload_3::getName () {
		return "dload_3";
	}

	uint32_t OPINFOdload_3::getOpCode () {
		return 41;
	}

	uint32_t OPINFOdload_3::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// aload_0
	OPINFOaload_0::OPINFOaload_0 () {
		jpm = 0;
	}

	void OPINFOaload_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOaload_0::getName () {
		return "aload_0";
	}

	uint32_t OPINFOaload_0::getOpCode () {
		return 42;
	}

	uint32_t OPINFOaload_0::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// aload_1
	OPINFOaload_1::OPINFOaload_1 () {
		jpm = 0;
	}

	void OPINFOaload_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOaload_1::getName () {
		return "aload_1";
	}

	uint32_t OPINFOaload_1::getOpCode () {
		return 43;
	}

	uint32_t OPINFOaload_1::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// aload_2
	OPINFOaload_2::OPINFOaload_2 () {
		jpm = 0;
	}

	void OPINFOaload_2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOaload_2::getName () {
		return "aload_2";
	}

	uint32_t OPINFOaload_2::getOpCode () {
		return 44;
	}

	uint32_t OPINFOaload_2::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// aload_3
	OPINFOaload_3::OPINFOaload_3 () {
		jpm = 0;
	}

	void OPINFOaload_3::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOaload_3::getName () {
		return "aload_3";
	}

	uint32_t OPINFOaload_3::getOpCode () {
		return 45;
	}

	uint32_t OPINFOaload_3::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// iaload
	OPINFOiaload::OPINFOiaload () {
		jpm = 0;
	}

	void OPINFOiaload::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOiaload::getName () {
		return "iaload";
	}

	uint32_t OPINFOiaload::getOpCode () {
		return 46;
	}

	uint32_t OPINFOiaload::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// laload
	OPINFOlaload::OPINFOlaload () {
		jpm = 0;
	}

	void OPINFOlaload::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOlaload::getName () {
		return "laload";
	}

	uint32_t OPINFOlaload::getOpCode () {
		return 47;
	}

	uint32_t OPINFOlaload::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// faload
	OPINFOfaload::OPINFOfaload () {
		jpm = 0;
	}

	void OPINFOfaload::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOfaload::getName () {
		return "faload";
	}

	uint32_t OPINFOfaload::getOpCode () {
		return 48;
	}

	uint32_t OPINFOfaload::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// daload
	OPINFOdaload::OPINFOdaload () {
		jpm = 0;
	}

	void OPINFOdaload::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOdaload::getName () {
		return "daload";
	}

	uint32_t OPINFOdaload::getOpCode () {
		return 49;
	}

	uint32_t OPINFOdaload::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// aaload
	OPINFOaaload::OPINFOaaload () {
		jpm = 0;
	}

	void OPINFOaaload::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOaaload::getName () {
		return "aaload";
	}

	uint32_t OPINFOaaload::getOpCode () {
		return 50;
	}

	uint32_t OPINFOaaload::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// baload
	OPINFObaload::OPINFObaload () {
		jpm = 0;
	}

	void OPINFObaload::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFObaload::getName () {
		return "baload";
	}

	uint32_t OPINFObaload::getOpCode () {
		return 51;
	}

	uint32_t OPINFObaload::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// caload
	OPINFOcaload::OPINFOcaload () {
		jpm = 0;
	}

	void OPINFOcaload::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOcaload::getName () {
		return "caload";
	}

	uint32_t OPINFOcaload::getOpCode () {
		return 52;
	}

	uint32_t OPINFOcaload::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// saload
	OPINFOsaload::OPINFOsaload () {
		jpm = 0;
	}

	void OPINFOsaload::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOsaload::getName () {
		return "saload";
	}

	uint32_t OPINFOsaload::getOpCode () {
		return 53;
	}

	uint32_t OPINFOsaload::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// istore
	OPINFOistore::OPINFOistore () {
		jpm = 0;
	}

	void OPINFOistore::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << +index << std::endl;
	}

	std::string OPINFOistore::getName () {
		return "istore";
	}

	uint32_t OPINFOistore::getOpCode () {
		return 54;
	}

	uint32_t OPINFOistore::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		index = data[idx+1];
		return 1;
	}


	// lstore
	OPINFOlstore::OPINFOlstore () {
		jpm = 0;
	}

	void OPINFOlstore::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << +index << std::endl;
	}

	std::string OPINFOlstore::getName () {
		return "lstore";
	}

	uint32_t OPINFOlstore::getOpCode () {
		return 55;
	}

	uint32_t OPINFOlstore::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		index = data[idx+1];
		return 1;
	}


	// fstore
	OPINFOfstore::OPINFOfstore () {
		jpm = 0;
	}

	void OPINFOfstore::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << +index << std::endl;
	}

	std::string OPINFOfstore::getName () {
		return "fstore";
	}

	uint32_t OPINFOfstore::getOpCode () {
		return 56;
	}

	uint32_t OPINFOfstore::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		index = data[idx+1];
		return 1;
	}


	// dstore
	OPINFOdstore::OPINFOdstore () {
		jpm = 0;
	}

	void OPINFOdstore::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << +index << std::endl;
	}

	std::string OPINFOdstore::getName () {
		return "dstore";
	}

	uint32_t OPINFOdstore::getOpCode () {
		return 57;
	}

	uint32_t OPINFOdstore::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		index = data[idx+1];
		return 1;
	}


	// astore
	OPINFOastore::OPINFOastore () {
		jpm = 0;
	}

	void OPINFOastore::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << +index << std::endl;
	}

	std::string OPINFOastore::getName () {
		return "astore";
	}

	uint32_t OPINFOastore::getOpCode () {
		return 58;
	}

	uint32_t OPINFOastore::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		index = data[idx+1];
		return 1;
	}


	// istore_0
	OPINFOistore_0::OPINFOistore_0 () {
		jpm = 0;
	}

	void OPINFOistore_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOistore_0::getName () {
		return "istore_0";
	}

	uint32_t OPINFOistore_0::getOpCode () {
		return 59;
	}

	uint32_t OPINFOistore_0::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// istore_1
	OPINFOistore_1::OPINFOistore_1 () {
		jpm = 0;
	}

	void OPINFOistore_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOistore_1::getName () {
		return "istore_1";
	}

	uint32_t OPINFOistore_1::getOpCode () {
		return 60;
	}

	uint32_t OPINFOistore_1::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// istore_2
	OPINFOistore_2::OPINFOistore_2 () {
		jpm = 0;
	}

	void OPINFOistore_2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOistore_2::getName () {
		return "istore_2";
	}

	uint32_t OPINFOistore_2::getOpCode () {
		return 61;
	}

	uint32_t OPINFOistore_2::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// istore_3
	OPINFOistore_3::OPINFOistore_3 () {
		jpm = 0;
	}

	void OPINFOistore_3::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOistore_3::getName () {
		return "istore_3";
	}

	uint32_t OPINFOistore_3::getOpCode () {
		return 62;
	}

	uint32_t OPINFOistore_3::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lstore_0
	OPINFOlstore_0::OPINFOlstore_0 () {
		jpm = 0;
	}

	void OPINFOlstore_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOlstore_0::getName () {
		return "lstore_0";
	}

	uint32_t OPINFOlstore_0::getOpCode () {
		return 63;
	}

	uint32_t OPINFOlstore_0::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lstore_1
	OPINFOlstore_1::OPINFOlstore_1 () {
		jpm = 0;
	}

	void OPINFOlstore_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOlstore_1::getName () {
		return "lstore_1";
	}

	uint32_t OPINFOlstore_1::getOpCode () {
		return 64;
	}

	uint32_t OPINFOlstore_1::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lstore_2
	OPINFOlstore_2::OPINFOlstore_2 () {
		jpm = 0;
	}

	void OPINFOlstore_2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOlstore_2::getName () {
		return "lstore_2";
	}

	uint32_t OPINFOlstore_2::getOpCode () {
		return 65;
	}

	uint32_t OPINFOlstore_2::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lstore_3
	OPINFOlstore_3::OPINFOlstore_3 () {
		jpm = 0;
	}

	void OPINFOlstore_3::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOlstore_3::getName () {
		return "lstore_3";
	}

	uint32_t OPINFOlstore_3::getOpCode () {
		return 66;
	}

	uint32_t OPINFOlstore_3::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fstore_0
	OPINFOfstore_0::OPINFOfstore_0 () {
		jpm = 0;
	}

	void OPINFOfstore_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOfstore_0::getName () {
		return "fstore_0";
	}

	uint32_t OPINFOfstore_0::getOpCode () {
		return 67;
	}

	uint32_t OPINFOfstore_0::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fstore_1
	OPINFOfstore_1::OPINFOfstore_1 () {
		jpm = 0;
	}

	void OPINFOfstore_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOfstore_1::getName () {
		return "fstore_1";
	}

	uint32_t OPINFOfstore_1::getOpCode () {
		return 68;
	}

	uint32_t OPINFOfstore_1::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fstore_2
	OPINFOfstore_2::OPINFOfstore_2 () {
		jpm = 0;
	}

	void OPINFOfstore_2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOfstore_2::getName () {
		return "fstore_2";
	}

	uint32_t OPINFOfstore_2::getOpCode () {
		return 69;
	}

	uint32_t OPINFOfstore_2::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fstore_3
	OPINFOfstore_3::OPINFOfstore_3 () {
		jpm = 0;
	}

	void OPINFOfstore_3::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOfstore_3::getName () {
		return "fstore_3";
	}

	uint32_t OPINFOfstore_3::getOpCode () {
		return 70;
	}

	uint32_t OPINFOfstore_3::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dstore_0
	OPINFOdstore_0::OPINFOdstore_0 () {
		jpm = 0;
	}

	void OPINFOdstore_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOdstore_0::getName () {
		return "dstore_0";
	}

	uint32_t OPINFOdstore_0::getOpCode () {
		return 71;
	}

	uint32_t OPINFOdstore_0::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dstore_1
	OPINFOdstore_1::OPINFOdstore_1 () {
		jpm = 0;
	}

	void OPINFOdstore_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOdstore_1::getName () {
		return "dstore_1";
	}

	uint32_t OPINFOdstore_1::getOpCode () {
		return 72;
	}

	uint32_t OPINFOdstore_1::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dstore_2
	OPINFOdstore_2::OPINFOdstore_2 () {
		jpm = 0;
	}

	void OPINFOdstore_2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOdstore_2::getName () {
		return "dstore_2";
	}

	uint32_t OPINFOdstore_2::getOpCode () {
		return 73;
	}

	uint32_t OPINFOdstore_2::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dstore_3
	OPINFOdstore_3::OPINFOdstore_3 () {
		jpm = 0;
	}

	void OPINFOdstore_3::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOdstore_3::getName () {
		return "dstore_3";
	}

	uint32_t OPINFOdstore_3::getOpCode () {
		return 74;
	}

	uint32_t OPINFOdstore_3::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// astore_0
	OPINFOastore_0::OPINFOastore_0 () {
		jpm = 0;
	}

	void OPINFOastore_0::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOastore_0::getName () {
		return "astore_0";
	}

	uint32_t OPINFOastore_0::getOpCode () {
		return 75;
	}

	uint32_t OPINFOastore_0::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// astore_1
	OPINFOastore_1::OPINFOastore_1 () {
		jpm = 0;
	}

	void OPINFOastore_1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOastore_1::getName () {
		return "astore_1";
	}

	uint32_t OPINFOastore_1::getOpCode () {
		return 76;
	}

	uint32_t OPINFOastore_1::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// astore_2
	OPINFOastore_2::OPINFOastore_2 () {
		jpm = 0;
	}

	void OPINFOastore_2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOastore_2::getName () {
		return "astore_2";
	}

	uint32_t OPINFOastore_2::getOpCode () {
		return 77;
	}

	uint32_t OPINFOastore_2::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// astore_3
	OPINFOastore_3::OPINFOastore_3 () {
		jpm = 0;
	}

	void OPINFOastore_3::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOastore_3::getName () {
		return "astore_3";
	}

	uint32_t OPINFOastore_3::getOpCode () {
		return 78;
	}

	uint32_t OPINFOastore_3::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// iastore
	OPINFOiastore::OPINFOiastore () {
		jpm = 0;
	}

	void OPINFOiastore::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOiastore::getName () {
		return "iastore";
	}

	uint32_t OPINFOiastore::getOpCode () {
		return 79;
	}

	uint32_t OPINFOiastore::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lastore
	OPINFOlastore::OPINFOlastore () {
		jpm = 0;
	}

	void OPINFOlastore::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOlastore::getName () {
		return "lastore";
	}

	uint32_t OPINFOlastore::getOpCode () {
		return 80;
	}

	uint32_t OPINFOlastore::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fastore
	OPINFOfastore::OPINFOfastore () {
		jpm = 0;
	}

	void OPINFOfastore::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOfastore::getName () {
		return "fastore";
	}

	uint32_t OPINFOfastore::getOpCode () {
		return 81;
	}

	uint32_t OPINFOfastore::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dastore
	OPINFOdastore::OPINFOdastore () {
		jpm = 0;
	}

	void OPINFOdastore::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOdastore::getName () {
		return "dastore";
	}

	uint32_t OPINFOdastore::getOpCode () {
		return 82;
	}

	uint32_t OPINFOdastore::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// aastore
	OPINFOaastore::OPINFOaastore () {
		jpm = 0;
	}

	void OPINFOaastore::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOaastore::getName () {
		return "aastore";
	}

	uint32_t OPINFOaastore::getOpCode () {
		return 83;
	}

	uint32_t OPINFOaastore::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// bastore
	OPINFObastore::OPINFObastore () {
		jpm = 0;
	}

	void OPINFObastore::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFObastore::getName () {
		return "bastore";
	}

	uint32_t OPINFObastore::getOpCode () {
		return 84;
	}

	uint32_t OPINFObastore::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// castore
	OPINFOcastore::OPINFOcastore () {
		jpm = 0;
	}

	void OPINFOcastore::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOcastore::getName () {
		return "castore";
	}

	uint32_t OPINFOcastore::getOpCode () {
		return 85;
	}

	uint32_t OPINFOcastore::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// sastore
	OPINFOsastore::OPINFOsastore () {
		jpm = 0;
	}

	void OPINFOsastore::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOsastore::getName () {
		return "sastore";
	}

	uint32_t OPINFOsastore::getOpCode () {
		return 86;
	}

	uint32_t OPINFOsastore::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// pop
	OPINFOpop::OPINFOpop () {
		jpm = 0;
	}

	void OPINFOpop::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOpop::getName () {
		return "pop";
	}

	uint32_t OPINFOpop::getOpCode () {
		return 87;
	}

	uint32_t OPINFOpop::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// pop2
	OPINFOpop2::OPINFOpop2 () {
		jpm = 0;
	}

	void OPINFOpop2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOpop2::getName () {
		return "pop2";
	}

	uint32_t OPINFOpop2::getOpCode () {
		return 88;
	}

	uint32_t OPINFOpop2::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dup
	OPINFOdup::OPINFOdup () {
		jpm = 0;
	}

	void OPINFOdup::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOdup::getName () {
		return "dup";
	}

	uint32_t OPINFOdup::getOpCode () {
		return 89;
	}

	uint32_t OPINFOdup::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dup_x1
	OPINFOdup_x1::OPINFOdup_x1 () {
		jpm = 0;
	}

	void OPINFOdup_x1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOdup_x1::getName () {
		return "dup_x1";
	}

	uint32_t OPINFOdup_x1::getOpCode () {
		return 90;
	}

	uint32_t OPINFOdup_x1::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dup_x2
	OPINFOdup_x2::OPINFOdup_x2 () {
		jpm = 0;
	}

	void OPINFOdup_x2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOdup_x2::getName () {
		return "dup_x2";
	}

	uint32_t OPINFOdup_x2::getOpCode () {
		return 91;
	}

	uint32_t OPINFOdup_x2::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dup2
	OPINFOdup2::OPINFOdup2 () {
		jpm = 0;
	}

	void OPINFOdup2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOdup2::getName () {
		return "dup2";
	}

	uint32_t OPINFOdup2::getOpCode () {
		return 92;
	}

	uint32_t OPINFOdup2::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dup2_x1
	OPINFOdup2_x1::OPINFOdup2_x1 () {
		jpm = 0;
	}

	void OPINFOdup2_x1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOdup2_x1::getName () {
		return "dup2_x1";
	}

	uint32_t OPINFOdup2_x1::getOpCode () {
		return 93;
	}

	uint32_t OPINFOdup2_x1::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dup2_x2
	OPINFOdup2_x2::OPINFOdup2_x2 () {
		jpm = 0;
	}

	void OPINFOdup2_x2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOdup2_x2::getName () {
		return "dup2_x2";
	}

	uint32_t OPINFOdup2_x2::getOpCode () {
		return 94;
	}

	uint32_t OPINFOdup2_x2::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// swap
	OPINFOswap::OPINFOswap () {
		jpm = 0;
	}

	void OPINFOswap::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOswap::getName () {
		return "swap";
	}

	uint32_t OPINFOswap::getOpCode () {
		return 95;
	}

	uint32_t OPINFOswap::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// iadd
	OPINFOiadd::OPINFOiadd () {
		jpm = 0;
	}

	void OPINFOiadd::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOiadd::getName () {
		return "iadd";
	}

	uint32_t OPINFOiadd::getOpCode () {
		return 96;
	}

	uint32_t OPINFOiadd::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// ladd
	OPINFOladd::OPINFOladd () {
		jpm = 0;
	}

	void OPINFOladd::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOladd::getName () {
		return "ladd";
	}

	uint32_t OPINFOladd::getOpCode () {
		return 97;
	}

	uint32_t OPINFOladd::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fadd
	OPINFOfadd::OPINFOfadd () {
		jpm = 0;
	}

	void OPINFOfadd::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOfadd::getName () {
		return "fadd";
	}

	uint32_t OPINFOfadd::getOpCode () {
		return 98;
	}

	uint32_t OPINFOfadd::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dadd
	OPINFOdadd::OPINFOdadd () {
		jpm = 0;
	}

	void OPINFOdadd::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOdadd::getName () {
		return "dadd";
	}

	uint32_t OPINFOdadd::getOpCode () {
		return 99;
	}

	uint32_t OPINFOdadd::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// isub
	OPINFOisub::OPINFOisub () {
		jpm = 0;
	}

	void OPINFOisub::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOisub::getName () {
		return "isub";
	}

	uint32_t OPINFOisub::getOpCode () {
		return 100;
	}

	uint32_t OPINFOisub::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lsub
	OPINFOlsub::OPINFOlsub () {
		jpm = 0;
	}

	void OPINFOlsub::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOlsub::getName () {
		return "lsub";
	}

	uint32_t OPINFOlsub::getOpCode () {
		return 101;
	}

	uint32_t OPINFOlsub::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fsub
	OPINFOfsub::OPINFOfsub () {
		jpm = 0;
	}

	void OPINFOfsub::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOfsub::getName () {
		return "fsub";
	}

	uint32_t OPINFOfsub::getOpCode () {
		return 102;
	}

	uint32_t OPINFOfsub::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dsub
	OPINFOdsub::OPINFOdsub () {
		jpm = 0;
	}

	void OPINFOdsub::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOdsub::getName () {
		return "dsub";
	}

	uint32_t OPINFOdsub::getOpCode () {
		return 103;
	}

	uint32_t OPINFOdsub::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// imul
	OPINFOimul::OPINFOimul () {
		jpm = 0;
	}

	void OPINFOimul::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOimul::getName () {
		return "imul";
	}

	uint32_t OPINFOimul::getOpCode () {
		return 104;
	}

	uint32_t OPINFOimul::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lmul
	OPINFOlmul::OPINFOlmul () {
		jpm = 0;
	}

	void OPINFOlmul::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOlmul::getName () {
		return "lmul";
	}

	uint32_t OPINFOlmul::getOpCode () {
		return 105;
	}

	uint32_t OPINFOlmul::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fmul
	OPINFOfmul::OPINFOfmul () {
		jpm = 0;
	}

	void OPINFOfmul::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOfmul::getName () {
		return "fmul";
	}

	uint32_t OPINFOfmul::getOpCode () {
		return 106;
	}

	uint32_t OPINFOfmul::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dmul
	OPINFOdmul::OPINFOdmul () {
		jpm = 0;
	}

	void OPINFOdmul::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOdmul::getName () {
		return "dmul";
	}

	uint32_t OPINFOdmul::getOpCode () {
		return 107;
	}

	uint32_t OPINFOdmul::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// idiv
	OPINFOidiv::OPINFOidiv () {
		jpm = 0;
	}

	void OPINFOidiv::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOidiv::getName () {
		return "idiv";
	}

	uint32_t OPINFOidiv::getOpCode () {
		return 108;
	}

	uint32_t OPINFOidiv::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// ldiv
	OPINFOldiv::OPINFOldiv () {
		jpm = 0;
	}

	void OPINFOldiv::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOldiv::getName () {
		return "ldiv";
	}

	uint32_t OPINFOldiv::getOpCode () {
		return 109;
	}

	uint32_t OPINFOldiv::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fdiv
	OPINFOfdiv::OPINFOfdiv () {
		jpm = 0;
	}

	void OPINFOfdiv::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOfdiv::getName () {
		return "fdiv";
	}

	uint32_t OPINFOfdiv::getOpCode () {
		return 110;
	}

	uint32_t OPINFOfdiv::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// ddiv
	OPINFOddiv::OPINFOddiv () {
		jpm = 0;
	}

	void OPINFOddiv::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOddiv::getName () {
		return "ddiv";
	}

	uint32_t OPINFOddiv::getOpCode () {
		return 111;
	}

	uint32_t OPINFOddiv::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// irem
	OPINFOirem::OPINFOirem () {
		jpm = 0;
	}

	void OPINFOirem::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOirem::getName () {
		return "irem";
	}

	uint32_t OPINFOirem::getOpCode () {
		return 112;
	}

	uint32_t OPINFOirem::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lrem
	OPINFOlrem::OPINFOlrem () {
		jpm = 0;
	}

	void OPINFOlrem::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOlrem::getName () {
		return "lrem";
	}

	uint32_t OPINFOlrem::getOpCode () {
		return 113;
	}

	uint32_t OPINFOlrem::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// frem
	OPINFOfrem::OPINFOfrem () {
		jpm = 0;
	}

	void OPINFOfrem::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOfrem::getName () {
		return "frem";
	}

	uint32_t OPINFOfrem::getOpCode () {
		return 114;
	}

	uint32_t OPINFOfrem::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// drem
	OPINFOdrem::OPINFOdrem () {
		jpm = 0;
	}

	void OPINFOdrem::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOdrem::getName () {
		return "drem";
	}

	uint32_t OPINFOdrem::getOpCode () {
		return 115;
	}

	uint32_t OPINFOdrem::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// ineg
	OPINFOineg::OPINFOineg () {
		jpm = 0;
	}

	void OPINFOineg::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOineg::getName () {
		return "ineg";
	}

	uint32_t OPINFOineg::getOpCode () {
		return 116;
	}

	uint32_t OPINFOineg::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lneg
	OPINFOlneg::OPINFOlneg () {
		jpm = 0;
	}

	void OPINFOlneg::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOlneg::getName () {
		return "lneg";
	}

	uint32_t OPINFOlneg::getOpCode () {
		return 117;
	}

	uint32_t OPINFOlneg::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fneg
	OPINFOfneg::OPINFOfneg () {
		jpm = 0;
	}

	void OPINFOfneg::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOfneg::getName () {
		return "fneg";
	}

	uint32_t OPINFOfneg::getOpCode () {
		return 118;
	}

	uint32_t OPINFOfneg::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dneg
	OPINFOdneg::OPINFOdneg () {
		jpm = 0;
	}

	void OPINFOdneg::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOdneg::getName () {
		return "dneg";
	}

	uint32_t OPINFOdneg::getOpCode () {
		return 119;
	}

	uint32_t OPINFOdneg::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// ishl
	OPINFOishl::OPINFOishl () {
		jpm = 0;
	}

	void OPINFOishl::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOishl::getName () {
		return "ishl";
	}

	uint32_t OPINFOishl::getOpCode () {
		return 120;
	}

	uint32_t OPINFOishl::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lshl
	OPINFOlshl::OPINFOlshl () {
		jpm = 0;
	}

	void OPINFOlshl::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOlshl::getName () {
		return "lshl";
	}

	uint32_t OPINFOlshl::getOpCode () {
		return 121;
	}

	uint32_t OPINFOlshl::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// ishr
	OPINFOishr::OPINFOishr () {
		jpm = 0;
	}

	void OPINFOishr::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOishr::getName () {
		return "ishr";
	}

	uint32_t OPINFOishr::getOpCode () {
		return 122;
	}

	uint32_t OPINFOishr::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lshr
	OPINFOlshr::OPINFOlshr () {
		jpm = 0;
	}

	void OPINFOlshr::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOlshr::getName () {
		return "lshr";
	}

	uint32_t OPINFOlshr::getOpCode () {
		return 123;
	}

	uint32_t OPINFOlshr::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// iushr
	OPINFOiushr::OPINFOiushr () {
		jpm = 0;
	}

	void OPINFOiushr::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOiushr::getName () {
		return "iushr";
	}

	uint32_t OPINFOiushr::getOpCode () {
		return 124;
	}

	uint32_t OPINFOiushr::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lushr
	OPINFOlushr::OPINFOlushr () {
		jpm = 0;
	}

	void OPINFOlushr::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOlushr::getName () {
		return "lushr";
	}

	uint32_t OPINFOlushr::getOpCode () {
		return 125;
	}

	uint32_t OPINFOlushr::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// iand
	OPINFOiand::OPINFOiand () {
		jpm = 0;
	}

	void OPINFOiand::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOiand::getName () {
		return "iand";
	}

	uint32_t OPINFOiand::getOpCode () {
		return 126;
	}

	uint32_t OPINFOiand::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// land
	OPINFOland::OPINFOland () {
		jpm = 0;
	}

	void OPINFOland::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOland::getName () {
		return "land";
	}

	uint32_t OPINFOland::getOpCode () {
		return 127;
	}

	uint32_t OPINFOland::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// ior
	OPINFOior::OPINFOior () {
		jpm = 0;
	}

	void OPINFOior::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOior::getName () {
		return "ior";
	}

	uint32_t OPINFOior::getOpCode () {
		return 128;
	}

	uint32_t OPINFOior::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lor
	OPINFOlor::OPINFOlor () {
		jpm = 0;
	}

	void OPINFOlor::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOlor::getName () {
		return "lor";
	}

	uint32_t OPINFOlor::getOpCode () {
		return 29;
	}

	uint32_t OPINFOlor::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// ixor
	OPINFOixor::OPINFOixor () {
		jpm = 0;
	}

	void OPINFOixor::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOixor::getName () {
		return "ixor";
	}

	uint32_t OPINFOixor::getOpCode () {
		return 130;
	}

	uint32_t OPINFOixor::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lxor
	OPINFOlxor::OPINFOlxor () {
		jpm = 0;
	}

	void OPINFOlxor::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOlxor::getName () {
		return "lxor";
	}

	uint32_t OPINFOlxor::getOpCode () {
		return 131;
	}

	uint32_t OPINFOlxor::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// iinc
	OPINFOiinc::OPINFOiinc () {
		jpm = 0;
	}

	void OPINFOiinc::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << +index << " " << +constant << std::endl;
	}

	std::string OPINFOiinc::getName () {
		return "iinc";
	}

	uint32_t OPINFOiinc::getOpCode () {
		return 132;
	}

	uint32_t OPINFOiinc::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		index = data[idx+1];
		constant = Converter::to_i1(data[idx+2]);
		return 2;
	}


	// i2l
	OPINFOi2l::OPINFOi2l () {
		jpm = 0;
	}

	void OPINFOi2l::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOi2l::getName () {
		return "i2l";
	}

	uint32_t OPINFOi2l::getOpCode () {
		return 133;
	}

	uint32_t OPINFOi2l::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// i2f
	OPINFOi2f::OPINFOi2f () {
		jpm = 0;
	}

	void OPINFOi2f::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOi2f::getName () {
		return "i2f";
	}

	uint32_t OPINFOi2f::getOpCode () {
		return 134;
	}

	uint32_t OPINFOi2f::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// i2d
	OPINFOi2d::OPINFOi2d () {
		jpm = 0;
	}

	void OPINFOi2d::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOi2d::getName () {
		return "i2d";
	}

	uint32_t OPINFOi2d::getOpCode () {
		return 135;
	}

	uint32_t OPINFOi2d::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// l2i
	OPINFOl2i::OPINFOl2i () {
		jpm = 0;
	}

	void OPINFOl2i::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOl2i::getName () {
		return "l2i";
	}

	uint32_t OPINFOl2i::getOpCode () {
		return 136;
	}

	uint32_t OPINFOl2i::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// l2f
	OPINFOl2f::OPINFOl2f () {
		jpm = 0;
	}

	void OPINFOl2f::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOl2f::getName () {
		return "l2f";
	}

	uint32_t OPINFOl2f::getOpCode () {
		return 137;
	}

	uint32_t OPINFOl2f::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// l2d
	OPINFOl2d::OPINFOl2d () {
		jpm = 0;
	}

	void OPINFOl2d::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOl2d::getName () {
		return "l2d";
	}

	uint32_t OPINFOl2d::getOpCode () {
		return 138;
	}

	uint32_t OPINFOl2d::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// f2i
	OPINFOf2i::OPINFOf2i () {
		jpm = 0;
	}

	void OPINFOf2i::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOf2i::getName () {
		return "f2i";
	}

	uint32_t OPINFOf2i::getOpCode () {
		return 139;
	}

	uint32_t OPINFOf2i::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// f2l
	OPINFOf2l::OPINFOf2l () {
		jpm = 0;
	}

	void OPINFOf2l::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOf2l::getName () {
		return "f2l";
	}

	uint32_t OPINFOf2l::getOpCode () {
		return 140;
	}

	uint32_t OPINFOf2l::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// f2d
	OPINFOf2d::OPINFOf2d () {
		jpm = 0;
	}

	void OPINFOf2d::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOf2d::getName () {
		return "f2d";
	}

	uint32_t OPINFOf2d::getOpCode () {
		return 141;
	}

	uint32_t OPINFOf2d::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// d2i
	OPINFOd2i::OPINFOd2i () {
		jpm = 0;
	}

	void OPINFOd2i::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOd2i::getName () {
		return "d2i";
	}

	uint32_t OPINFOd2i::getOpCode () {
		return 142;
	}

	uint32_t OPINFOd2i::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// d2l
	OPINFOd2l::OPINFOd2l () {
		jpm = 0;
	}

	void OPINFOd2l::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOd2l::getName () {
		return "d2l";
	}

	uint32_t OPINFOd2l::getOpCode () {
		return 143;
	}

	uint32_t OPINFOd2l::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// d2f
	OPINFOd2f::OPINFOd2f () {
		jpm = 0;
	}

	void OPINFOd2f::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOd2f::getName () {
		return "d2f";
	}

	uint32_t OPINFOd2f::getOpCode () {
		return 144;
	}

	uint32_t OPINFOd2f::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// i2b
	OPINFOi2b::OPINFOi2b () {
		jpm = 0;
	}

	void OPINFOi2b::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOi2b::getName () {
		return "i2b";
	}

	uint32_t OPINFOi2b::getOpCode () {
		return 145;
	}

	uint32_t OPINFOi2b::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// i2c
	OPINFOi2c::OPINFOi2c () {
		jpm = 0;
	}

	void OPINFOi2c::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOi2c::getName () {
		return "i2c";
	}

	uint32_t OPINFOi2c::getOpCode () {
		return 146;
	}

	uint32_t OPINFOi2c::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// i2s
	OPINFOi2s::OPINFOi2s () {
		jpm = 0;
	}

	void OPINFOi2s::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOi2s::getName () {
		return "i2s";
	}

	uint32_t OPINFOi2s::getOpCode () {
		return 147;
	}

	uint32_t OPINFOi2s::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lcmp
	OPINFOlcmp::OPINFOlcmp () {
		jpm = 0;
	}

	void OPINFOlcmp::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOlcmp::getName () {
		return "lcmp";
	}

	uint32_t OPINFOlcmp::getOpCode () {
		return 148;
	}

	uint32_t OPINFOlcmp::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fcmpl
	OPINFOfcmpl::OPINFOfcmpl () {
		jpm = 0;
	}

	void OPINFOfcmpl::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOfcmpl::getName () {
		return "fcmpl";
	}

	uint32_t OPINFOfcmpl::getOpCode () {
		return 149;
	}

	uint32_t OPINFOfcmpl::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// fcmpg
	OPINFOfcmpg::OPINFOfcmpg () {
		jpm = 0;
	}

	void OPINFOfcmpg::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOfcmpg::getName () {
		return "fcmpg";
	}

	uint32_t OPINFOfcmpg::getOpCode () {
		return 150;
	}

	uint32_t OPINFOfcmpg::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dcmpl
	OPINFOdcmpl::OPINFOdcmpl () {
		jpm = 0;
	}

	void OPINFOdcmpl::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOdcmpl::getName () {
		return "dcmpl";
	}

	uint32_t OPINFOdcmpl::getOpCode () {
		return 151;
	}

	uint32_t OPINFOdcmpl::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dcmpg
	OPINFOdcmpg::OPINFOdcmpg () {
		jpm = 0;
	}

	void OPINFOdcmpg::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOdcmpg::getName () {
		return "dcmpg";
	}

	uint32_t OPINFOdcmpg::getOpCode () {
		return 152;
	}

	uint32_t OPINFOdcmpg::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// ifeq
	OPINFOifeq::OPINFOifeq () {
		jpm = 0;
	}

	void OPINFOifeq::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << branchoffset << std::endl;
	}

	std::string OPINFOifeq::getName () {
		return "ifeq";
	}

	uint32_t OPINFOifeq::getOpCode () {
		return 153;
	}

	uint32_t OPINFOifeq::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		branchoffset = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}


	// ifne
	OPINFOifne::OPINFOifne () {
		jpm = 0;
	}

	void OPINFOifne::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << branchoffset << std::endl;
	}

	std::string OPINFOifne::getName () {
		return "ifne";
	}

	uint32_t OPINFOifne::getOpCode () {
		return 154;
	}

	uint32_t OPINFOifne::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		branchoffset = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}


	// iflt
	OPINFOiflt::OPINFOiflt () {
		jpm = 0;
	}

	void OPINFOiflt::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << branchoffset << std::endl;
	}

	std::string OPINFOiflt::getName () {
		return "iflt";
	}

	uint32_t OPINFOiflt::getOpCode () {
		return 155;
	}

	uint32_t OPINFOiflt::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		branchoffset = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}


	// ifge
	OPINFOifge::OPINFOifge () {
		jpm = 0;
	}

	void OPINFOifge::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << branchoffset << std::endl;
	}

	std::string OPINFOifge::getName () {
		return "ifge";
	}

	uint32_t OPINFOifge::getOpCode () {
		return 156;
	}

	uint32_t OPINFOifge::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		branchoffset = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}


	// ifgt
	OPINFOifgt::OPINFOifgt () {
		jpm = 0;
	}

	void OPINFOifgt::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << branchoffset << std::endl;
	}

	std::string OPINFOifgt::getName () {
		return "ifgt";
	}

	uint32_t OPINFOifgt::getOpCode () {
		return 157;
	}

	uint32_t OPINFOifgt::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		branchoffset = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}


	// ifle
	OPINFOifle::OPINFOifle () {
		jpm = 0;
	}

	void OPINFOifle::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << branchoffset << std::endl;
	}

	std::string OPINFOifle::getName () {
		return "ifle";
	}

	uint32_t OPINFOifle::getOpCode () {
		return 158;
	}

	uint32_t OPINFOifle::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		branchoffset = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}


	// if_icmpeq
	OPINFOif_icmpeq::OPINFOif_icmpeq () {
		jpm = 0;
	}

	void OPINFOif_icmpeq::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << branchoffset << std::endl;
	}

	std::string OPINFOif_icmpeq::getName () {
		return "if_icmpeq";
	}

	uint32_t OPINFOif_icmpeq::getOpCode () {
		return 159;
	}

	uint32_t OPINFOif_icmpeq::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		branchoffset = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}


	// if_icmpne
	OPINFOif_icmpne::OPINFOif_icmpne () {
		jpm = 0;
	}

	void OPINFOif_icmpne::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << branchoffset << std::endl;
	}

	std::string OPINFOif_icmpne::getName () {
		return "if_icmpne";
	}

	uint32_t OPINFOif_icmpne::getOpCode () {
		return 160;
	}

	uint32_t OPINFOif_icmpne::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		branchoffset = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}


	// if_icmplt
	OPINFOif_icmplt::OPINFOif_icmplt () {
		jpm = 0;
	}

	void OPINFOif_icmplt::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << branchoffset << std::endl;
	}

	std::string OPINFOif_icmplt::getName () {
		return "if_icmplt";
	}

	uint32_t OPINFOif_icmplt::getOpCode () {
		return 61;
	}

	uint32_t OPINFOif_icmplt::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		branchoffset = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}


	// if_icmpge
	OPINFOif_icmpge::OPINFOif_icmpge () {
		jpm = 0;
	}

	void OPINFOif_icmpge::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << branchoffset << std::endl;
	}

	std::string OPINFOif_icmpge::getName () {
		return "if_icmpge";
	}

	uint32_t OPINFOif_icmpge::getOpCode () {
		return 162;
	}

	uint32_t OPINFOif_icmpge::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		branchoffset = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}


	// if_icmpgt
	OPINFOif_icmpgt::OPINFOif_icmpgt () {
		jpm = 0;
	}

	void OPINFOif_icmpgt::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << branchoffset << std::endl;
	}

	std::string OPINFOif_icmpgt::getName () {
		return "if_icmpgt";
	}

	uint32_t OPINFOif_icmpgt::getOpCode () {
		return 163;
	}

	uint32_t OPINFOif_icmpgt::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		branchoffset = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}


	// if_icmple
	OPINFOif_icmple::OPINFOif_icmple () {
		jpm = 0;
	}

	void OPINFOif_icmple::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << branchoffset << std::endl;
	}

	std::string OPINFOif_icmple::getName () {
		return "if_icmple";
	}

	uint32_t OPINFOif_icmple::getOpCode () {
		return 164;
	}

	uint32_t OPINFOif_icmple::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		branchoffset = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}


	// if_acmpeq
	OPINFOif_acmpeq::OPINFOif_acmpeq () {
		jpm = 0;
	}

	void OPINFOif_acmpeq::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << branchoffset << std::endl;
	}

	std::string OPINFOif_acmpeq::getName () {
		return "if_acmpeq";
	}

	uint32_t OPINFOif_acmpeq::getOpCode () {
		return 165;
	}

	uint32_t OPINFOif_acmpeq::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		branchoffset = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}


	// if_acmpne
	OPINFOif_acmpne::OPINFOif_acmpne () {
		jpm = 0;
	}

	void OPINFOif_acmpne::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << branchoffset << std::endl;
	}

	std::string OPINFOif_acmpne::getName () {
		return "if_acmpne";
	}

	uint32_t OPINFOif_acmpne::getOpCode () {
		return 166;
	}

	uint32_t OPINFOif_acmpne::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		branchoffset = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}


	// goto
	OPINFOgoto::OPINFOgoto () {
		jpm = 0;
	}

	void OPINFOgoto::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << branchoffset << std::endl;
	}

	std::string OPINFOgoto::getName () {
		return "goto";
	}

	uint32_t OPINFOgoto::getOpCode () {
		return 167;
	}

	uint32_t OPINFOgoto::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		branchoffset = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}

// TODO: finish retrieve data in classes: continue implementation from iinc, see https://en.wikipedia.org/wiki/Java_bytecode_instruction_listings
// TODO: print the data retrieved
// TODO: implements variable arguments
// TODO: verify if the data is retrieveing correct


	// jsr
	OPINFOjsr::OPINFOjsr () {
		jpm = 0;
	}

	void OPINFOjsr::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << branchoffset << std::endl;
	}

	std::string OPINFOjsr::getName () {
		return "jsr";
	}

	uint32_t OPINFOjsr::getOpCode () {
		return 168;
	}

	uint32_t OPINFOjsr::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		branchoffset = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}


	// ret
	OPINFOret::OPINFOret () {
		jpm = 0;
	}

	void OPINFOret::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << +index << std::endl;
	}

	std::string OPINFOret::getName () {
		return "ret";
	}

	uint32_t OPINFOret::getOpCode () {
		return 169;
	}

	uint32_t OPINFOret::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		index = data[idx+1];
		return 1;
	}


	// tableswitch
	OPINFOtableswitch::OPINFOtableswitch () {
		jpm = 0;
	}

	void OPINFOtableswitch::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << defaultbyte << " " << low << " " << high; // TODO: << " " << jumpOffsets << std::endl;
	}

	std::string OPINFOtableswitch::getName () {
		return "tableswitch";
	}

	uint32_t OPINFOtableswitch::getOpCode () {
		return 170;
	}

	// TODO: check later for correctness
	uint32_t OPINFOtableswitch::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		uint32_t i = idx + 1;

		i += (i % 4); // this jump is needed! A tableswitch is a variable-length instruction. Immediately after the tableswitch opcode, between zero and three bytes must act as padding, such that defaultbyte1 begins at an address that is a multiple of four bytes from the start of the current method (the opcode of its first instruction).

		defaultbyte = Converter::to_i4(data[i], data[i+1], data[i+2], data[i+3]); i += 4;
		low         = Converter::to_i4(data[i], data[i+1], data[i+2], data[i+3]); i += 4;
		high        = Converter::to_i4(data[i], data[i+1], data[i+2], data[i+3]); i += 4;

		auto n = high - low + 1;

		if (low <= high) {
			throw "Invalid tableswitch";
		}

		jumpOffsets.resize(n);

		for (int j = 0; j < n; j++, i += 4) {
			jumpOffsets[j] = Converter::to_i4(data[i], data[i+1], data[i+2], data[i+3]);
		}

		return i - idx; // 16+
	}

	// OPINFOlookupswitch
	OPINFOlookupswitch::OPINFOlookupswitch () {
		jpm = 0;
	}

	void OPINFOlookupswitch::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << defaultbyte << " " << npairs << " ";

		for(const auto& sm_pair : pairs)
			os << sm_pair.first << " ";

		os << std::endl;
	}

	std::string OPINFOlookupswitch::getName () {
		return "lookupswitch";
	}

	uint32_t OPINFOlookupswitch::getOpCode () {
		return 171;
	}

	// TODO: check later for correctness
	uint32_t OPINFOlookupswitch::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		uint32_t i = idx + 1;

		i += (i % 4); // this jump is needed! A tableswitch is a variable-length instruction. Immediately after the tableswitch opcode, between zero and three bytes must act as padding, such that defaultbyte1 begins at an address that is a multiple of four bytes from the start of the current method (the opcode of its first instruction).

		defaultbyte = Converter::to_i4(data[i], data[i+1], data[i+2], data[i+3]); i += 4;
		npairs      = Converter::to_i4(data[i], data[i+1], data[i+2], data[i+3]); i += 4;

		if (npairs < 0) {
			throw "Invalid tableswitch";
		}

		for (int j = 0; j < npairs; j++, i += 4) {
			auto match  = Converter::to_i4(data[i], data[i+1], data[i+2], data[i+3]); i += 4;
			auto value  = Converter::to_i4(data[i], data[i+1], data[i+2], data[i+3]);

			pairs[match] = value;
		}

		return i - idx; // 8+
	}


	// ireturn
	OPINFOireturn::OPINFOireturn () {
		jpm = 0;
	}

	void OPINFOireturn::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOireturn::getName () {
		return "ireturn";
	}

	uint32_t OPINFOireturn::getOpCode () {
		return 172;
	}

	uint32_t OPINFOireturn::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// lreturn
	OPINFOlreturn::OPINFOlreturn () {
		jpm = 0;
	}

	void OPINFOlreturn::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOlreturn::getName () {
		return "lreturn";
	}

	uint32_t OPINFOlreturn::getOpCode () {
		return 173;
	}

	uint32_t OPINFOlreturn::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// freturn
	OPINFOfreturn::OPINFOfreturn () {
		jpm = 0;
	}

	void OPINFOfreturn::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOfreturn::getName () {
		return "freturn";
	}

	uint32_t OPINFOfreturn::getOpCode () {
		return 174;
	}

	uint32_t OPINFOfreturn::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// dreturn
	OPINFOdreturn::OPINFOdreturn () {
		jpm = 0;
	}

	void OPINFOdreturn::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOdreturn::getName () {
		return "dreturn";
	}

	uint32_t OPINFOdreturn::getOpCode () {
		return 175;
	}

	uint32_t OPINFOdreturn::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// areturn
	OPINFOareturn::OPINFOareturn () {
		jpm = 0;
	}

	void OPINFOareturn::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOareturn::getName () {
		return "areturn";
	}

	uint32_t OPINFOareturn::getOpCode () {
		return 176;
	}

	uint32_t OPINFOareturn::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// return
	OPINFOreturn::OPINFOreturn () {
		jpm = 0;
	}

	void OPINFOreturn::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOreturn::getName () {
		return "return";
	}

	uint32_t OPINFOreturn::getOpCode () {
		return 177;
	}

	uint32_t OPINFOreturn::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// getstatic
	OPINFOgetstatic::OPINFOgetstatic () {
		jpm = 0;
	}

	void OPINFOgetstatic::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << index << std::endl;
	}

	std::string OPINFOgetstatic::getName () {
		return "getstatic";
	}

	uint32_t OPINFOgetstatic::getOpCode () {
		return 178;
	}

	uint32_t OPINFOgetstatic::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		index = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}


	// putstatic
	OPINFOputstatic::OPINFOputstatic () {
		jpm = 0;
	}

	void OPINFOputstatic::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << index << std::endl;
	}

	std::string OPINFOputstatic::getName () {
		return "putstatic";
	}

	uint32_t OPINFOputstatic::getOpCode () {
		return 179;
	}

	uint32_t OPINFOputstatic::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		index = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}


	// getfield
	OPINFOgetfield::OPINFOgetfield () {
		jpm = 0;
	}

	void OPINFOgetfield::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << index << std::endl;
	}

	std::string OPINFOgetfield::getName () {
		return "getfield";
	}

	uint32_t OPINFOgetfield::getOpCode () {
		return 180;
	}

	uint32_t OPINFOgetfield::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		index = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}


	// putfield
	OPINFOputfield::OPINFOputfield () {
		jpm = 0;
	}

	void OPINFOputfield::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << index << std::endl;
	}

	std::string OPINFOputfield::getName () {
		return "putfield";
	}

	uint32_t OPINFOputfield::getOpCode () {
		return 181;
	}

	uint32_t OPINFOputfield::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		index = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}


	// invokevirtual
	OPINFOinvokevirtual::OPINFOinvokevirtual () {
		jpm = 0;
	}

	void OPINFOinvokevirtual::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << index << std::endl;
	}

	std::string OPINFOinvokevirtual::getName () {
		return "invokevirtual";
	}

	uint32_t OPINFOinvokevirtual::getOpCode () {
		return 182;
	}

	uint32_t OPINFOinvokevirtual::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		index = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}


	// invokespecial
	OPINFOinvokespecial::OPINFOinvokespecial () {
		jpm = 0;
	}

	void OPINFOinvokespecial::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << index << std::endl;
	}

	std::string OPINFOinvokespecial::getName () {
		return "invokespecial";
	}

	uint32_t OPINFOinvokespecial::getOpCode () {
		return 183;
	}

	uint32_t OPINFOinvokespecial::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		index = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}


	// invokestatic
	OPINFOinvokestatic::OPINFOinvokestatic () {
		jpm = 0;
	}

	void OPINFOinvokestatic::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << index << std::endl;
	}

	std::string OPINFOinvokestatic::getName () {
		return "invokestatic";
	}

	uint32_t OPINFOinvokestatic::getOpCode () {
		return 184;
	}

	uint32_t OPINFOinvokestatic::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		index = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}


	// invokeinterface
	OPINFOinvokeinterface::OPINFOinvokeinterface () {
		jpm = 0;
	}

	void OPINFOinvokeinterface::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << index << " " << +count << std::endl;
	}

	std::string OPINFOinvokeinterface::getName () {
		return "invokeinterface";
	}

	uint32_t OPINFOinvokeinterface::getOpCode () {
		return 185;
	}

	uint32_t OPINFOinvokeinterface::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		index = Converter::to_u2(data[idx+1], data[idx+2]);
		count = data[idx+3];

		if(!count)
			throw "Invalid invokeinterface: the value of count must not be zero";

		if(!data[idx+4])
			throw "Invalid invokeinterface: the value of the last argument must be zero";

		return 4;
	}


	// invokedynamic
	OPINFOinvokedynamic::OPINFOinvokedynamic () {
		jpm = 0;
	}

	void OPINFOinvokedynamic::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << index << " 0 0" << std::endl;
	}

	std::string OPINFOinvokedynamic::getName () {
		return "invokedynamic";
	}

	uint32_t OPINFOinvokedynamic::getOpCode () {
		return 186;
	}

	uint32_t OPINFOinvokedynamic::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		index = Converter::to_u2(data[idx+1], data[idx+2]);
		if(!data[idx+3] || !data[idx+4]) {
			throw "Invalid invokedynamic: the value of the last 2 arguments must be zero";
		}
		return 4;
	}


	// new
	OPINFOnew::OPINFOnew () {
		jpm = 0;
	}

	void OPINFOnew::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << index << std::endl;
	}

	std::string OPINFOnew::getName () {
		return "new";
	}

	uint32_t OPINFOnew::getOpCode () {
		return 187;
	}

	uint32_t OPINFOnew::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		index = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}


	// newarray
	OPINFOnewarray::OPINFOnewarray () {
		jpm = 0;
	}

	void OPINFOnewarray::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << +atype << std::endl;
	}

	std::string OPINFOnewarray::getName () {
		return "newarray";
	}

	uint32_t OPINFOnewarray::getOpCode () {
		return 188;
	}

	uint32_t OPINFOnewarray::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		atype = data[idx+1];
		return 1;
	}


	// anewarray
	OPINFOanewarray::OPINFOanewarray () {
		jpm = 0;
	}

	void OPINFOanewarray::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << index << std::endl;
	}

	std::string OPINFOanewarray::getName () {
		return "anewarray";
	}

	uint32_t OPINFOanewarray::getOpCode () {
		return 189;
	}

	uint32_t OPINFOanewarray::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		index = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}


	// arraylength
	OPINFOarraylength::OPINFOarraylength () {
		jpm = 0;
	}

	void OPINFOarraylength::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOarraylength::getName () {
		return "arraylength";
	}

	uint32_t OPINFOarraylength::getOpCode () {
		return 190;
	}

	uint32_t OPINFOarraylength::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// athrow
	OPINFOathrow::OPINFOathrow () {
		jpm = 0;
	}

	void OPINFOathrow::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOathrow::getName () {
		return "athrow";
	}

	uint32_t OPINFOathrow::getOpCode () {
		return 191;
	}

	uint32_t OPINFOathrow::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// checkcast
	OPINFOcheckcast::OPINFOcheckcast () {
		jpm = 0;
	}

	void OPINFOcheckcast::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << index << std::endl;
	}

	std::string OPINFOcheckcast::getName () {
		return "checkcast";
	}

	uint32_t OPINFOcheckcast::getOpCode () {
		return 192;
	}

	uint32_t OPINFOcheckcast::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		index = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}


	// instanceof
	OPINFOinstanceof::OPINFOinstanceof () {
		jpm = 0;
	}

	void OPINFOinstanceof::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << index << std::endl;
	}

	std::string OPINFOinstanceof::getName () {
		return "instanceof";
	}

	uint32_t OPINFOinstanceof::getOpCode () {
		return 193;
	}

	uint32_t OPINFOinstanceof::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		index = Converter::to_u2(data[idx+1], data[idx+2]);
		return 2;
	}


	// monitorenter
	OPINFOmonitorenter::OPINFOmonitorenter () {
		jpm = 0;
	}

	void OPINFOmonitorenter::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOmonitorenter::getName () {
		return "monitorenter";
	}

	uint32_t OPINFOmonitorenter::getOpCode () {
		return 194;
	}

	uint32_t OPINFOmonitorenter::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// monitorexit
	OPINFOmonitorexit::OPINFOmonitorexit () {
		jpm = 0;
	}

	void OPINFOmonitorexit::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOmonitorexit::getName () {
		return "monitorexit";
	}

	uint32_t OPINFOmonitorexit::getOpCode () {
		return 195;
	}

	uint32_t OPINFOmonitorexit::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// wide
	OPINFOwide::OPINFOwide () {
		jpm = 0;
	}

	void OPINFOwide::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << +opcode << " " << index << " " << countbyte << std::endl;
	}

	std::string OPINFOwide::getName () {
		return "wide";
	}

	uint32_t OPINFOwide::getOpCode () {
		return 196;
	}

	uint32_t OPINFOwide::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		OPINFOiinc iinc;

		opcode = data[idx + 1];

		index = Converter::to_u2(data[idx + 2], data[idx + 3]);

		if (opcode == iinc.getOpCode()) {
			countbyte = Converter::to_u2(data[idx + 4], data[idx + 5]);
			return 5;
		}

		return 3;
	}


	// multianewarray
	OPINFOmultianewarray::OPINFOmultianewarray () {
		jpm = 0;
	}

	void OPINFOmultianewarray::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << index << " " << dimensions << std::endl;
	}

	std::string OPINFOmultianewarray::getName () {
		return "multianewarray";
	}

	uint32_t OPINFOmultianewarray::getOpCode () {
		return 197;
	}

	uint32_t OPINFOmultianewarray::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		index = Converter::to_u2(data[idx+1], data[idx+2]);
		dimensions = data[idx+3];

		if(dimensions < 1u)
			throw "Invalid multianewarray: the number of dimensions of the array must be greater than or equal to 1";

		return 3;
	}


	// ifnull
	OPINFOifnull::OPINFOifnull () {
		jpm = 0;
	}

	void OPINFOifnull::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << branchoffset << std::endl;
	}

	std::string OPINFOifnull::getName () {
		return "ifnull";
	}

	uint32_t OPINFOifnull::getOpCode () {
		return 198;
	}

	uint32_t OPINFOifnull::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		branchoffset = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}


	// ifnonnull
	OPINFOifnonnull::OPINFOifnonnull () {
		jpm = 0;
	}

	void OPINFOifnonnull::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << branchoffset << std::endl;
	}

	std::string OPINFOifnonnull::getName () {
		return "ifnonnull";
	}

	uint32_t OPINFOifnonnull::getOpCode () {
		return 199;
	}

	uint32_t OPINFOifnonnull::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		branchoffset = Converter::to_i2(data[idx+1], data[idx+2]);
		return 2;
	}


	// goto_w
	OPINFOgoto_w::OPINFOgoto_w () {
		jpm = 0;
	}

	void OPINFOgoto_w::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << branchoffset << std::endl;
	}

	std::string OPINFOgoto_w::getName () {
		return "goto_w";
	}

	uint32_t OPINFOgoto_w::getOpCode () {
		return 200;
	}

	uint32_t OPINFOgoto_w::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		branchoffset = Converter::to_i4(data[idx+1], data[idx+2], data[idx+3], data[idx+4]);
		return 4;
	}


	// jsr_w
	OPINFOjsr_w::OPINFOjsr_w () {
		jpm = 0;
	}

	void OPINFOjsr_w::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << " " << branchoffset << std::endl;
	}

	std::string OPINFOjsr_w::getName () {
		return "jsr_w";
	}

	uint32_t OPINFOjsr_w::getOpCode () {
		return 201;
	}

	uint32_t OPINFOjsr_w::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		branchoffset = Converter::to_i4(data[idx+1], data[idx+2], data[idx+3], data[idx+4]);
		return 4;
	}


	// breakpoint
	OPINFObreakpoint::OPINFObreakpoint () {
		jpm = 0;
	}

	void OPINFObreakpoint::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFObreakpoint::getName () {
		return "breakpoint";
	}

	uint32_t OPINFObreakpoint::getOpCode () {
		return 202;
	}

	uint32_t OPINFObreakpoint::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// impdep1
	OPINFOimpdep1::OPINFOimpdep1 () {
		jpm = 0;
	}

	void OPINFOimpdep1::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOimpdep1::getName () {
		return "impdep1";
	}

	uint32_t OPINFOimpdep1::getOpCode () {
		return 254;
	}

	uint32_t OPINFOimpdep1::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}


	// impdep2
	OPINFOimpdep2::OPINFOimpdep2 () {
		jpm = 0;
	}

	void OPINFOimpdep2::printToStream(std::ostream& os, std::string& prefix) {
		os << prefix << getName() << std::endl;
	}

	std::string OPINFOimpdep2::getName () {
		return "impdep2";
	}

	uint32_t OPINFOimpdep2::getOpCode () {
		return 255;
	}

	uint32_t OPINFOimpdep2::fillParams (const uint32_t idx, const std::vector<u1>& data) {
		return 0;
	}

};
