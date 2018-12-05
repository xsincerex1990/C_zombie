#include <stdio.h>

int main() {
    int i, bit_a, bit_b;
    printf("bitwise OR operator |\n");

    for (i=0; i<4; i++) {
	bit_a = (i & 2) / 2; //Get second bit
	bit_b = (i & 1); //Get the first bit
	printf("%d | %d = %d\n", bit_a, bit_b, bit_a | bit_b);
    }

    printf("\nbitwise AND operator &\n");
    for (i=0; i<4; i++) {
	bit_a = ( i & 2 ) / 2; //get the second bit
	bit_b = (i & 1); //get first bit
	printf("%d & %d = %d\n", bit_a, bit_b, bit_a & bit_b);
    }
}

/* 
bitwise OR operator |
0 | 0 = 0
0 | 1 = 1
1 | 0 = 1
1 | 1 = 1

bitwise AND operator &
0 & 0 = 0
0 & 1 = 0
1 & 0 = 0
1 & 1 = 1
*/

