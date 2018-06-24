#include <iostream>
#include <iomanip>
#include <util/bit.hpp>
#include "util/reader.hpp"
#include "class_loader/method.hpp"
#include "class_loader/attribute.hpp"
#include "class_loader/interface.hpp"

namespace jvm  {

	InterfaceInfo::InterfaceInfo () = default;

	InterfaceInfo::InterfaceInfo (Reader &reader) {
		Read(reader);
	}

	void InterfaceInfo::PrintToStream (std::ostream &os, ConstantPool &cp) {
		auto& value = cp[info]->as<CP_Utf8>();

		os << value << " (" << info << ")" << std::endl;
	}

	void InterfaceInfo::Read (Reader &reader) {
		info = reader.getNextHalfWord();
	}
}
