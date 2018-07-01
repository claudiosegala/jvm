#include "engine/frame.hpp"

namespace jvm {

	Frame::Frame(ClassLoader &cl, MethodInfo& mt) : cl(cl), mt(mt) {}

	Frame::~Frame() {
		delete[] variables.v4;
	}

};