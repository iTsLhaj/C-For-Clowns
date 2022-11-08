
#include <stdio.h>


// Unions allows you to share memory regions between vars

union MyUnion
{
	int a;
	char b;
};

// you can include them in structs

struct TestStruct
{
	int x; // x and (a, b) does not share the same memory region
	       // so when i go for x = 100 and a = 20 it stays like that nothing change 
	       // when i assign 40 for b a will change as well to 40 but x stays 100

	union
	{
		int a;
		char b;
	};
};

int main(int argc, char** argv)
{
	union MyUnion abc;

	abc.a = 50;
	abc.b = 20;

	// printf("%i %i\n", abc.a, abc.b);
	// out: 20 20

	return 0;
}
