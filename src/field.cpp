#include <bit.hpp>
#include <iostream>
#include "field.hpp"

namespace jvm {

	void FieldInfo::printToStream(std::ostream &os, ConstantPool &cp) {
		char buffer[5];
		auto name = cp[name_index.value.number];
		auto& characters = name->as<CP_Utf8>();

		os << "Attribute: " << characters << std::endl;
		os << "\tLength: " << attributes_count.value.number << std::endl;
		os << "\tBytes:  ";

		for (auto& byte : attributes) {
			sprintf(buffer, "%.2X ", byte);
			os << buffer;
		}

		os << std::endl;
	}

}
