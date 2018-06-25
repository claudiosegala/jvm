#include <iostream>
#include <iomanip>
#include "engine/engine.hpp"
#include "engine/frame.hpp"
#include
namespace jvm {




	void Frame::create_frame(std::stack<std::shared_ptr<Frame>> stack){
		auto p = std::make_shared<Frame>();
		stack.push(p);
	}

	u4  Frame::destroy_frame(std::stack<std::shared_ptr<Frame>> stack){
		u4 x =  stack.top()->Return_value;
		stack.pop();
		return x;
	}
	void Frame::initialize_frame(std::stack<std::shared_ptr<Frame>> stack ,Operands entradas,ConstantPool &referencia){
		auto l = stack.top();
		short i = 1;
		l->constat_pool_ref = referencia;
		l->variables[0] = this;
		while(!entradas.empty()){
			l->variables[i] = entradas.pop();
			i++;
		}
	}


};