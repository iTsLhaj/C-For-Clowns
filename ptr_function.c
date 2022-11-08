
#include <stdio.h>


void my_func(void)
{
	printf("Hello, World!\n");
}

int pow_(int a, int x)
{
	return a ^ x;
}

int main(int argc, char** argv)
{

	// type(*name_)() = &func_name;
	void(*ptr)() = &my_func;

	// that is how you do function pointer
	
	// run ...
	ptr();

	// another example
	int(*iptr)(int, int) = &pow_;

	int a = 5;
	int b = 2;
	
	int t = iptr(a, b);

	return 0;
}
