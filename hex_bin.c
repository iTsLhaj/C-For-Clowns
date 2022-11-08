
// Hex And Binary

#include <stdio.h>

// check out the ascii table first ...

// this is how to write hexadecimal 
// 0x20 : 32
// this is how to write binary
// 0b00000011 : 3


int main(int argc, char** argv)
{

	int a = 0xC;
	int b = 0b00100111;

	printf(" dec, hex \n");
	printf("\n %i , %x", a, a);
	printf("\n %i , %x\n", b, b);

	return 0;
}
