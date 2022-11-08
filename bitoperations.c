
#include <stdio.h>


int main(int argc, char** argv)
{

	unsigned char a = 0b11111111;
	unsigned char b = 0b11111111;

	unsigned char result = a & b; // & AND 
				      // | OR
				      // ^ XOR
				      // ~ NOT
				      
	// result = 0b11111111
	
	// bitshifting 
	// to the left 
	result = a << 0b00000001; // 0b11111110;
	// to the right
	result = a >> 0b00000001; // 0b01111111;

	return 0;
}
