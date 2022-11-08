
#include <stdio.h>

// [return type] the_name (function arguments)
// void: we're not returning any value ...
//       so there is no need to use return
void my_func(void)
{
	printf("My func Called!\n");
}

int calculate_age(int birth_year)
{
	int now_year = 2022;
	return now_year - birth_year;
}

int main(int argc, char** argv)
{

	// call my_func like this
	my_func();

	printf("%d\n", calculate_age(2004));

	return 0;
}
