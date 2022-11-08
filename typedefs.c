
#include <stdio.h>

// typedefs allows you to create alias names for existing types

// typedef for primitive types
typedef int MYINT;

// structure typedefs
typedef struct record
{
	int a;
} alias;

typedef void(*VoidFuncPtr_)(void);

void pi(void)
{
	printf("Hello, World!");
}

typedef int* IntPtr;

int main(int argc, char** argv)
{
	MYINT abc_;
	abc_ = 30;

	alias abc;
	abc = 50;

	VoidFuncPtr_ p = pi;

	// printf("%i\n", abc);
	// p();
	
	int a = 40;
	IntPtr ptr = &a;

	// printf("%p\n", ptr);

	return 0;
}
