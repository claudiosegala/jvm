#include <bit.hpp>
#include <iostream>
#include "field.hpp"

namespace jvm {

	void FieldInfo::printToStream(std::ostream &os, ConstantPool &cp) {
		auto& name = cp[name_index.value.number]->as<CP_Utf8>();
		auto& descriptor = cp[descriptor_index.value.number]->as<CP_Utf8>();

		os << "\tName: " << name << std::endl;
		os << "\tDescriptor: " << descriptor << std::endl;
		os << "\tLength: " << attributes_count.value.number << std::endl;
		os << "\tBytes:  ";

		char buffer[5];
		for (auto& byte : attributes) {
			sprintf(buffer, "%.2X ", byte);
			os << buffer;
		}

		os << std::endl << std::endl;
	}

}
