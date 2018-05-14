#include <bit.hpp>
#include <iostream>
#include "field.hpp"

namespace jvm {

	void FieldInfo::printToStream(std::ostream &os, ConstantPool &cp) {
		char buffer[5];
		auto name = cp[name_index.value.number];

		os << "Field: " << *name << std::endl;
		os << "\tLength: " << attributes_count.value.number << std::endl;
		os << "\tAttributes: ";

		for (auto& attribute : attributes) {
			attribute.printToStream(os, cp);
		}

		os << std::endl;
	}

}
