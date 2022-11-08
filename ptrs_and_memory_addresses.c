

#include <stdio.h>


int main(int argc, char** argv)
{

	int a = 155;

	int* a_ptr = &a;

	// printf("\n ptr_ -> %p\n value using a -> %i\n", a_ptr, a);

	// dont do: a_ptr = 50; 
	// cause a_ptr points to the address of a
	// which means a_ptr stores the address not the value of a
	
	// u can do:
	*a_ptr = 255;

	// here it's like no no no i don't wanna change the address i wanna change the value ... ok ?? aghn arwass then ...
	// so u can change the value of a
	
	// SUMMARY:
	// with * == set the value that he is pointing to
	// without * == set the value of the pointer || the memory address
	
	// printf("\n ptr_ -> %p\n value using pointer -> %i\n\n", a_ptr, *a_ptr);

	char buff[20];
	char* b_ptr = buff;

	b_ptr[0] = 'L';
	b_ptr[1] = 'H';
	b_ptr[2] = 'A';
	b_ptr[3] = 'J';

	// printf("%p\n", &buff[2]);
	
	// ----------------------------------------------------------------------------------------------------------------
	
	// pointer of pointer ?? aha
	
	int x = 2;

	int* x_ptr = &x;
	int** sx_ptr = &x_ptr;
	int*** tx_ptr = &sx_ptr;
	// ...


	return 0;
}
