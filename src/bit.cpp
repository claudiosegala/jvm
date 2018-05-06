//
// Created by Ricardo on 04-May-18.
// THIS FILE MUST *NOT* BE INCLUDED IN CMakeLists.txt
//

#pragma once

#include <cstdio>
#include "bit.hpp"

namespace jvm {

    template<typename T>
    Data<T>::Data(Endianness endianness) {
        m_endianness = endianness;
    }

    template<typename T>
    Data<T> &Data<T>::operator=(const T number) {
        m_endianness = Endianness::LITTLE;
        value.number = number;
        return *this;
    }

    template<typename T>
    Data<T>& Data<T>::operator=(const Data <T> &d) {
        m_endianness = d.m_endianness;
        value = d.value;
        return *this;
    }

	template<typename T>
    int Data<T>::operator[] (int index)
	{
		return (value.number >> index) & 1;
	}

    template<typename T>
    Data<T> &Data<T>::toEndianness(Endianness new_endianness) {
        if (m_endianness == new_endianness) {
            return *this;
        }

        auto first = value.bytes.begin();
        auto last = value.bytes.end() - 1;
        while (first < last) {
            (*first) ^= (*last);
            (*last) ^= (*first);
            (*first) ^= (*last);
            first++, last--;
        }
        m_endianness = new_endianness;

		return *this;
    }

    template<typename T>
    void Data<T>::Print() {
        printf("Endianness: %s\n", (m_endianness == Endianness::BIG ? "big" : "little"));
        for (auto& byte : value.bytes) {
            printf("%2X", byte);
        }
        printf("\n");
    }

    template<typename T>
    void Data<T>::Print(std::string &s) {
        printf("%s\n", s);
        Print();
    }

}
