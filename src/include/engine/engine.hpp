#pragma once

#include <cstdint>
#include "util/bit.hpp"
#include <vector>
#include "class_loader/constant_pool.hpp"
#include "class_loader/attribute.hpp"
#include "class_loader/class_loader.hpp"
#include "engine/frame.hpp"

namespace jvm {

	/**
	 * Class that run a single thread virtual machine
	 */
	class Engine {
	public:
		/**
		 * Constructor
		 * @params address to all .classes
		 */
		Engine(ClassLoader&);

		/**
		 * Engine Execution.
		 * @see execute()
		 */
		void execute();

	private:
		//> Reference to .class that will be executed
		ClassLoader& cl;

		//> PC Register
		uint64_t PC;

		//> Frame Stack
		std::vector<Frame> frames;

		//> Method Area
		// TODO: understand

		/**
		 * Run the clinit method
		 */
		void run_clinit();

		/**
		 * Run the init method
		 */
		void run_init();
	};

}