#include "engine/frame.hpp"

namespace jvm {

	Frame::Frame(ClassLoader &cl, MethodInfo& mt) : cl(cl), mt(mt), PC(0), Return_value(0) {
		auto codeAttr = mt.attributes.Codes[0];
		variables.setSize(codeAttr->max_locals);
		operands.setSize(codeAttr->max_stack);
	}
};