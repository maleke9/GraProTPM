package components;

stateless
class BitAccess {
	/*
	 * find out with the bit at given position in the byte is true or false
	 */
	@c_code
	public boolean getBit(integer bitArray, integer in position);
	
	/*
	 * set the bit at given position in the byte
	 */
	@c_code
	public boolean setBit(integer bitArray, integer in position);
	
	representation RU8 {
		represent getBit.position, getBit.bitArray, getBit return using {
			datatype = uint8;
		};
		represent setBit.position, setBit.bitArray, setBit return using {
			datatype = uint8;
		};
	}
	representation RU16 {
		represent getBit.position, getBit.bitArray, getBit return using {
			datatype = uint16;
		};
		represent setBit.position, setBit.bitArray, setBit return using {
			datatype = uint16;
		};
	}
	
}