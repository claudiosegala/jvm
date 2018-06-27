#pragma once

#include "base.hpp"

namespace jvm {
	class Variables : public std::vector<u4> {
	public:
		/**
		 * Default constructor
		 */
		Variables() = default;


		template<typename T>
		void  Write_vector(u1 ,T);

		template<typename T>
		T Read_vector(u1);

	private:
		//>Variables Stack
		std::vector <u4> variables;
	};
}
