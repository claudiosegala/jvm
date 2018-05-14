#include <iostream>
#include <iomanip>
#include <bit.hpp>
#include "reader.hpp"
#include "method.hpp"
#include "attribute.hpp"
#include "interface.hpp"

namespace jvm  {

	InterfaceInfo::InterfaceInfo (Reader &reader) {
		Read(reader);
	}

	void InterfaceInfo::PrintToStream (std::ostream &os, ConstantPool &cp) {
		auto& value = cp[info.value.number]->as<CP_Utf8>();

		os << value << " (" << info.value.number << ")" << std::endl;
	}

	void InterfaceInfo::Read (Reader &reader) {
		info = reader.getNextHalfWord();
	}
}
