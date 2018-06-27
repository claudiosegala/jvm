#include "engine/framesStack.hpp"

namespace jvm {

	// TODO: verify the need of this function
	void FramesStack::push_frame () {
		Frame frame;

		push(frame);
	}

	// TODO: verify if it need to use destructor of the class Frame before
	// TODO: add the var ret in the top of the new top pile
	// TODO: verify if the return value is always the
	void  FramesStack::pop_frame () {
		u4 ret = top().Return_value; // get the returned value from the frame

		pop(); // remove the frame

		auto curFrame = top(); // get the top of the stack

		curFrame.operands.push4(ret); // insert the returned value on the top of operands
	}

	void FramesStack::push_frame (Operands entradas){
//		auto l = stack.top();
//		short i = 1;
//		l->constat_pool_ref = referencia;
//		l->variables[0] = this;
//		while(!entradas.empty()){
//			l->variables[i] = entradas.pop();
//			i++;
//		}
	}


};