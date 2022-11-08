
#include <stdio.h>

extern int abi;
// we've created a global variable 
// but we've marked it as external 
// which tell's the compiler that were not creating the variable by here
// were just letting u know that there is a variable somewhere in our program
// called abs that exists ...

int main(int argc, char** argv)
{

	return 0;
}
