#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{

	// allocates 16bytes in the heap
	int* ptr = (int*) malloc(sizeof(int));
	*ptr = 50;

	printf("%i\n", ptr[1]);

	// free this data when were done
	free(ptr);

	return 0;
}
