#pragma once

#include <tuple>
#include "macros.hpp"

namespace jvm {

	class Converter {
	public:

		static u4 to_u4(u2, u2);

		static u4 to_u4(u1, u1, u1, u1);

		static u2 to_u2(u1, u1);

		static std::tuple<u2, u2> to_u2(u4);

		static std::tuple<u1, u1> to_u1(u2);

		static std::tuple<u1, u1, u1, u1> to_u1(u4);
	};
}