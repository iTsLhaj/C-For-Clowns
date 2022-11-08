
#include <stdio.h>

int main(int argc, char** argv)
{

	// argc: number of args passed 
	// argv: program's name in index 0 followed by args passed

	if(argc == 1)
	{
		printf("no arguments provided\n");
		return -1;
	}

	for(int i=0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return 0;
}
