#pragma once

#include <array>
#include <cstdint>

#define SYSTEM_ENDIANNESS jvm::Endianness::LITTLE

namespace jvm {

	enum class Endianness : uint8_t {
		BIG,
		LITTLE
	};

	/**
	 * @brief Stores a number and its endianness information,
	 * providing utilities for bit access and endianness conversion.
	 * @tparam T underlying data type.
	 */
	template<typename T>
	class Data {
	private:
		Endianness m_endianness; ///< Stores the endianness of this Data.

	public:
		union {
			T number;
			std::array<uint8_t, sizeof(T)> bytes;
		} value;

		/**
		 * Constructor that stores the endianness.
		 */
		explicit Data(Endianness = SYSTEM_ENDIANNESS);

		/**
		 * Constructor that stores the endianness and a value.
		 */
		explicit Data(T number, Endianness = SYSTEM_ENDIANNESS);

		/**
		 * Changes the endianness of this data and returns a reference to it.
		 */
		Data<T> &toEndianness(Endianness new_endianness);

		Data<T> &operator=(T number);

		Data<T> &operator=(const Data<T> &d);

		bool operator== (const Data<T> &d);

		int operator[] (int index);

		template<typename U>
		U as_type();

		/**
		 * Prints the actual endianness and the value of this Data.
		 */
		void Print();

		/**
		 * Prints the string and calls method Print().
		 */
		void Print(std::string &s);

	};

	template<typename T>
	std::ostream& operator<< (std::ostream& os, Data<T>& data);

	typedef Data<uint8_t>  Byte;
	typedef Data<uint16_t> HalfWord;
	typedef Data<uint32_t> Word;
}

#include "../bit.cpp" // Templates require this
