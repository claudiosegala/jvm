#include <iostream>
#include <iomanip>
#include <bit.hpp>
#include "reader.hpp"
#include "method.hpp"
#include "attribute.hpp"
#include "interface.hpp"

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
