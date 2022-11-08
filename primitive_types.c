
#include <stdlib.io>



int main(int argc, char** argv)
{

	// that depend on the architecture
	// so it's all different when compiling on  an embedded processor
	// which means that the sizes are smaller in length

	// void: there is no data of any kind
	// char: store characters 1 byte in length
	char a = 'a';
	// short: like int but it stores lot less
	short min = 999;
	// int: data type that can store approximately 4 billion
	int avg = 65530;
	// long: stores integer but larger 
	long max = 928374517;
	// float: decimal values f represent float
	float pi = 3.14f;
	// double: a larger floating number
	double dpi = 6400.001f;

	// signed and unsigned data type ...
	
	// unsigned means that it can't go negative
	// + it can hold more in the positive range
	// * any data type is by default signed 
	unsigned int x;
	unsigned long x_;

	// signed can go negative or positive
	signed int y;
	signed short y_;

	// Integer Types

	// CHAR_BIT    :   8
	// CHAR_MAX    :   127
	// CHAR_MIN    :   -128
	// INT_MAX     :   2147483647
	// INT_MIN     :   -2147483648
	// LONG_MAX    :   9223372036854775807
	// LONG_MIN    :   -9223372036854775808
	// SCHAR_MAX   :   127
	// SCHAR_MIN   :   -128
	// SHRT_MAX    :   32767
	// SHRT_MIN    :   -32768
	// UCHAR_MAX   :   255
	// UINT_MAX    :   4294967295
	// ULONG_MAX   :   18446744073709551615
	// USHRT_MAX   :   65535
	
	// Floating-Point Types
	// Floating point literals are always signed in terms of type
	
	// FLT_MAX      :   3.40282e+38
	// FLT_MIN      :   1.17549e-38
	// -FLT_MAX     :   -3.40282e+38
	// -FLT_MIN     :   -1.17549e-38
	// DBL_MAX      :   1.79769e+308
	// DBL_MIN      :   2.22507e-308
	// -DBL_MAX     :  -1.79769e+308
	
	
	return 0;
}










