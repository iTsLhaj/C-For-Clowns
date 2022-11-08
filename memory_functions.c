#include <stdio.h>
#include <stdlib.h>

char* msg = "Hello World";
int main(int argc, char** argv)
{

	char buf[20];

	// memset func
	// sets the entire array to 0
	// index 0 = '\0' index 1 = '\0' ...
	memset(buf, 0, sizeof(buf));
	buf[19] = '\0'; // get rid of bufferoverflow;
			
	// memcpy func
	// it copies msg into buf
	// dont do sizeof(msg) do strlen instead
	// 	sizeof returns 4 cause u passed a pointer char*
	// 	strlen returns lenght of "Hello World"
	memcpy(buf, "Hello", strlen(msg));

	// memcmp func
	// compares  2 pices of memory to see if they match
	
	int result = memcmp(msg, "Hello World", strlen(msg));
	// if they match memcmp returns 0
	
	// printf results

	return 0;
}
