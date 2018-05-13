#pragma once

#include <vector>
#include "bit.hpp"

namespace jvm {

	class MethodsInfo {
	public:
		/**
		 *  Access permission to and properties of this field
		 */
		HalfWord access_flags;

		/**
		 *  Valid index into the constant pool table
		 */
		HalfWord name_index;

		/**
		 * Type of a class, instance, or local variable
		 */
		HalfWord descriptor_index;

		/**
		 * The number of additional attributes
		 */
		HalfWord attributes_count;

		/**
		 * An attribute structure
		 */
		std::vector<HalfWord> attributes;
	};

}