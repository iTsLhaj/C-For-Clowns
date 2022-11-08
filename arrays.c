

#include <stdio.h>



int main(int argc, char** argv)
{

	// array notation
	// 1 byte at a time
	// in this variable we can store 16 byte
	char name[16];

	// how to access them ..?
	
	name[0] = 'a';
	name[1] = 'b';
	name[2] = 'c';
 
	printf("%c", name[0]);
	
	/* there is rules for these indexes
	 * 
	 * 1. they can't be negative
	 * 2. indexes always starts from 0
	 * 3. you can not exceed the length
	 *
	 */

	// the buffer is another word for array btw
	// if u exceed this buffer:
	// the best case it will crash
	// the worst case a hacker can use this to his advantage 'bufferoverflow'
	
	int age[16];

	age[0] = 42;
	age[1] = 12;
	age[3] = 21;

	return 0;
}
