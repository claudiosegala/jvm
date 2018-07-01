#include "engine/frame.hpp"

namespace jvm {

	Frame::Frame(ClassLoader &cl) : cl(cl) {}

	Frame::~Frame() {
		delete[] variables.v4;
	}

};