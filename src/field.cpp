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
		os << "\tAttributes: ";

		for (auto& attribute : attributes) {
			attribute.printToStream(os, cp);
		}

		os << std::endl << std::endl;
	}

}
