#pragma once

#include "frame.hpp"

namespace jvm {

	class FramesStack : public std::stack<Frame> {
	public:
		/**
		* Constructor Default
		*/
		FramesStack() = default;

		/**
		* Create a new frame and put in the top of the stack
		*/
		void push_frame(ClassLoader&, MethodInfo&);

		/**
		* Destroy the object on the top and then remove it
		*/
		void pop_frame();

		/**
		* Create a new frame and put the arguments of the current top on the frame, then put the new fram on the top of the stack
		*/
		void push_frame(Operands);
	};

}
