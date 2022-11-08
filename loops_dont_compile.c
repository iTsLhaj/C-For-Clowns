
#include <stdio.h>


int main(int argc, char** argv)
{

	for(int i=0; i < 10; i++)
	{
		// printf(" %i- Hello, Friend!\n", i);
		break; // used to break the loop | go ahead comment it and uncomment the printf line above
	}

	while(0) // change 0 to 1
	{
		// that will cause an infinite loop uncomment add break; so it stops !
		printf("Sba7 Lkhir Ayajdig omlil hh");

	}

	int x = 10;

	do
	{
		// do something while condition
		printf(" %i- Spa7 lkhir ayajdig omlil ...");
		x--; // dec x by one |  when x == 0 it stops i hope so 
	}while(x > 0);



	return 0;
}
