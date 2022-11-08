
#include <stdio.h>


int main(int argc, char** argv)
{

	char name[20];
	int age = 0;

	// for arrays it automaticaly adds &
	fgets(name, sizeof(name), stdin) // but variables you should add &var_name
	scanf("%i", &age);

	// output the name
	printf("Yout name is %s .\n", name);
	printf("Your age is %i .\n", age);


	return 0;
}
