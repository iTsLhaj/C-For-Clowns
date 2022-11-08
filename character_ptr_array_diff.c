
#include <stdio.h>


int main(int argc, char** argv)
{

	// difference between 
	
	// - character pointers | (char* var)
	// - character arrays 	| (char var[])
	
	char* abc_1 = "hello world"; // char ptr
	char abc_2[] = "hello world"; // char arr
	
        // abc_1: is stored in the data section of the executable
	// "hello world" is replaced with an address so we basically point the the address of whatever "hello world" is when it's compiled
	
	// abc_2: isn't returning a pointer of any kind the is instead threated as an array
	// it's stored in the stack or individual registers of the cpu
	
	// abc_1: holds a pointer abc_1 for the string "hello world" so it allocates 12bytes for the string with an extra 4bytes for the pointer
	// which is 0x5609710e3004 in my case so it takes 16bytes by the end
	
	// abc_2: holds 12bytes [h][e][l][l][o][][w][o][r][l][d][\0]

	return 0;

}
