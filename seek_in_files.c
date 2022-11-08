#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv)
{
	
	FILE* file = fopen("./test.txt", "r");
	fseek(file, 20, SEEK_CUR);

	// SEEK_CUR 
	// in this case we say 20bytes from our current position
	
	// SEEK_SET 
	// from the begining of the file

	char buf[20];
	fread(buf, 1, 20, file);
	buf[19] = 0;


	printf("%s\n", buf);

	// fseek(file, 0, SEEK_END);
	// unsigned long files_size = ftell(file);
	// fseek(file, 0, SEEK_SET);

	
}
