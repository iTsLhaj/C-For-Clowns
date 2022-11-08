#include <stdio.h>
#include <memory.h>

int main(int argc, char** argv)
{
	
	// FILE* f = fopen("./test.txt", "r");

	 FILE* f = fopen("./test.txt", "w"); // a  flag appends to the file
					     // w  override the file if not exist
					     // r+ opens the file for r/w but it will not override the file if not exist
					     // w+ opens the file for r/w ant it will create the file if not exist
					     // a+ opens the file for appending and reading
	 if(!f)
	 {
		  printf("Failed to open file");
		  return -1;
	 }


	
	// char buf[20];
	// memset(buf, 0, sizeof(buf));
	// if(fread(buf, 1, 20, f) == 0)
	// {
	//	  printf("Something went wrong!");
	// 	  return -1;
	// }
	
	// printf("%s", buf);
	// fclose(f);
	
	fwrite("Hello, World", 1, strlen("Hello, World"), f);


	
}
