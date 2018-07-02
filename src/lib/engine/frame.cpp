#include "engine/frame.hpp"

namespace jvm {

	Frame::Frame(ClassLoader &cl, MethodInfo& mt) : cl(cl), mt(mt) {}

	Frame::~Frame() {
		// TODO: maybe implement this
		//delete[] variables.v4;
	}

};