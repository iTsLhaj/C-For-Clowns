
#include <stdio.h>

struct TestStruct
{
	char a;
	char b;
	char c;
	char d;
};

int main(int argc, char** argv)
{
	// this is how u cast with primitive variables

	float x = 1.9;
	int a = (int) x;

	printf("%i\n", a);

	// here's pointer casting
	
	int c = 0x41424344;
	char* ptr = (char*) &c;

	printf("%s\n", ptr[2]);

	struct TestStruct s;

	s.a = 0x43;
	s.b = 0x44;
	s.c = 0x45;
	s.d = 0x46;

	char* ptr = (char*) &s;
	printf("%c", ptr[2]);
}
