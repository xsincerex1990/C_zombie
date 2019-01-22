#include <stdio.h>
//find the greatest common divisor of two non-negatove int values
int main(void) {
    int u, v, temp;
    printf("Please type two nonnegative intergers.\n");
    scanf("%i%i", &u, &v);

    while ( v != 0 ) {
        temp = u % v;
        u = v;
        v = temp;
    }
    printf("Their greatest common divisor is %i \n", u);
    return 0;
}