
#include <stdio.h>


int main(int argc, char** argv)
{

	if(1)
	{
		goto out;
	}

	printf("This is never called");

out: 
	printf("We are leaving ...");
	return 0;
}

