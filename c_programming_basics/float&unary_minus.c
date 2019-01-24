#include <stdio.h>

int main(void) {
    int a = 25;
    int b = 2;

    float c = 25.0;
    float d = 2.0;
    printf("6 + a / 5 * b = %i\n", 6 + a / 5 * b); // output 16 
    printf("a / b * b = %i\n", a / b * b);// output 24 because its not a float
    printf(" c / d * d = %f\n", c / d * d); //output 25.000000
    printf("-a = %i\n", -a); // negated using unary minus operator which operates on a single value as opposed to binary operators which operates on
    // two values... 

    //keep in mind that int arithmetic expressions always return int and never floats
    return 0;
}