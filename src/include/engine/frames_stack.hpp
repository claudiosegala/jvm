#pragma once

#include "frame.hpp"

namespace jvm {

	class FramesStack : public std::stack<Frame> {
	public:
		/**
		* Constructor Default
		*/
		FramesStack() = default;
	};

}
