#include <stdio.h>

// SYNTAX FOR TYPECASTING: (typecast_data_variable) variable
// typecasting is a way to temporarily change a variables data type despite how it was defined
int main() {
	int a, b;
	float c, d;

	a = 13;
	b = 5;

	c = a / b; // normal divide using ints
	d = (float) a / (float) b; // divide ints typecasting as float
	

	printf("[intergers]\t a = %d\t b = %d\n", a, b); // [intergers]	 a = 13	 b = 5
	printf("[floats]\t c = %f\t d = %f\n", c, d); //[floats] c = 2.000000	 d = 2.600000
	
	// notice how "c" rounded to the incorrect answer of "2.0"
}




