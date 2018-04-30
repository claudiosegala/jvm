#include <bit/stdc++.h>
#include "bit.hpp"

class ByteCodeReader {
	private:
	
	//< stream with the .class file
	ifstream _class;
	
	/**
	* @brief  Check if it is a .class file
	* @retval TRUE Has CAFEBABE as initial word in the file
	* @retval FALSE Has not CAFEBABE as initial word in the file
	*/
	bool isValid ();
	
	public:
	
	/**
	* @brief  Open a .class file
	* @param  filename The name of the .class we are opening
	*/
	void open (string filename);
	
	/**
	* @brief  Get the next byte in the file
	* @retval The next Byte
	*/
	Byte getNextByte ();
	
	/**
	* @brief  Get the next half word in the file
	* @retval The next Half Word
	*/
	HalfWord getNextHalfWord ();
	
	/**
	* @brief  Get the next word in the file
	* @retval The next Word
	*/
	Word getNextWord ();
	
	/**
	* @brief  Close the .class file
	*/
	void close ();
};
