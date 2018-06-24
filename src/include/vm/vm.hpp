#pragma once

#include <cstdint>
#include "util/bit.hpp"
#include <vector>
#include "_class/constant_pool.hpp"
#include "_class/attribute.hpp"
#include "_class/_class.hpp"
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
		VM(std::vector<_Class>&));

		/**
		 * Engine Execution.
		 * @see execute()
		 */
		void run ();

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