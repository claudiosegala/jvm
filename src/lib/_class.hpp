#pragma once

#include <fstream>
#include <vector>
#include <string>
#include "bit.hpp"
#include "reader.hpp"
#include "constant_pool.hpp"

namespace jvm {

	class _Class {
	public:
		Word magic_number;

		HalfWord min_version;
		HalfWord max_version;

		HalfWord cp_count;

		//std::vector<jvm::cp_info> cp;

		HalfWord acess_flags;

		HalfWord access_flags;

		HalfWord this_class;

		HalfWord super_class;

		HalfWord interfaces_count;

		std::vector<HalfWord> interfaces;

		HalfWord fields_count;

		//std::vector<jvm::field_info> fields;

		HalfWord methods_count;

		//std::vector<jvm::method_info> methods;

		HalfWord attributes_count;

		//std::vector<jvm::attribute_info> attributes;

		_Class ();

		void read (std::basic_string<char> filename);

		void show ();

	private:
		void print_flags ();

		void read_cp (jvm::Reader& file);

		void read_if (jvm::Reader& file);

	};

}
