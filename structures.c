

#include <stdio.h>

// so structures allows you to combine variables to a single entity
struct my_struct
{
	int a;
	char b;
};

void out_struct(struct my_struct* s)
{
	printf("%i %c\n", s->a, s->b);
	// in c u access structure pointers using a ->
	// but structure variables that are not pointers using a dot
}

int main(int argc, char** argv)
{

	// here we create a structure variable called s that is basically an instance of my_struct;
	

	struct my_struct s;
	
	s.a = 112;
	s.b = 'A';

	out_struct(&s);




	return 0;
}
