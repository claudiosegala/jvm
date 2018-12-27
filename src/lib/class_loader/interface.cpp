#include "class_loader/interface.hpp"

namespace jvm  {

	InterfaceInfo::InterfaceInfo () = default;

	InterfaceInfo::InterfaceInfo (Reader &reader) {
		Read(reader);
	}

	void InterfaceInfo::PrintToStream (std::ostream &os, ConstantPool &cp) {
		auto& value = cp[info]->as<CPUtf8>();

		os << value << " (" << info << ")" << std::endl;
	}

	void InterfaceInfo::Read (Reader &reader) {
		info = reader.getNextHalfWord();
	}
}
