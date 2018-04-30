#include <bits/stdc++.h>

#define BYTESIZE 8
#define HALFSIZE 16
#define WORDSIZE 32

class Byte {
	private:
	
	///< the byte
	std::bitset<BYTESIZE>;
	
	///< the endian type of the 
	bool isLittleEndian; 
	
	public:
	
	Byte ();
		
	/**
	* @brief Transform a Big Endian Byte in Little Endian
	* Transform a Big Endian Byte of this instance in Little Endian Byte.
	*/
	void toLittleEndian ();

	/**
	* @brief Transform a Little Endian Byte in Big Endian
	* Transform a Little Endian Byte of this instance in Big Endian Byte.
	*/
	void toBigEndian ();
};

class HalfWord {
	private:
	
	///< the half word
	std::bitset<HALFSIZE>;
	
	///< the endian type of the 
	bool isLittleEndian; 
	
	public:
	
	HalfWord ();
	
	/**
	* @brief Transform a Big Endian Half Word in Little Endian
	* Transform a Big Endian Half Word of this instance in Little Endian Half Word.
	*/
	void toLittleEndian ();

	/**
	* @brief Transform a Little Endian Half Word in Big Endian
	* Transform a Little Endian Half Word of this instance in Big Endian Half Word.
	*/
	void toBigEndian ();
};


class Word {
	private:
	
	///< the word
	std::bitset<WORDSIZE>;
	
	///< the endian type of the 
	bool isLittleEndian; 
	
	public:
	
	Word ();
		
	/**
	* @brief Transform a Big Endian Word in Little Endian
	* Transform a Big Endian Word of this instance in Little Endian Word.
	*/
	void toLittleEndian ();

	/**
	* @brief Transform a Little Endian Word in Big Endian
	* Transform a Little Endian Word of this instance in Big Endian Word.
	*/
	void toBigEndian ();
};
