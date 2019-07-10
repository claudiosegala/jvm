#pragma once

#include "frame.hpp"

namespace jvm {

	/**
	 * JVM's frame stack structure.
	 */
	class FramesStack : public std::stack<Frame> {
	public:
		/**
		* Constructor Default
		*/
		FramesStack() = default;
	};

}
