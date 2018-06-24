#pragma once

#include <cstdint>
#include "util/bit.hpp"
#include <vector>
#include "class_loader/constant_pool.hpp"
#include "class_loader/attribute.hpp"
#include "class_loader/class_loader.hpp"
#include "vm/frame.hpp"

namespace jvm {

	/**
	 * Class that run a single thread virtual machine
	 */
	class VM {
	public:
		/**
		 * Constructor
		 * @params address to all .classes
		 */
		VM();

		/**
		 * Engine Execution.
		 * @see execute()
		 */
		void run (ClassLoader&);

	private:
		//> PC Register
		uint64_t PC;

		//> Frame Stack
		std::vector<Frame> frames;

		//> Method Area
		// TODO: understand

		void load();

		void link();

		void init();
	};

}