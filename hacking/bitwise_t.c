#include <stdio.h>
int main() {
int i, bw;
    for (i=0; i<10; i++) {
	printf("This round i == %d.\n", i);
	bw = (i & 2);
	printf( "%d compared to 2 = %d. \n\n", i, bw);
    }
    return 0;
}
/*
 * This round i == 0.
0 compared to 2 = 0. 

This round i == 1.
1 compared to 2 = 0. 

This round i == 2.
2 compared to 2 = 2. 

This round i == 3.
3 compared to 2 = 2. 

This round i == 4.
4 compared to 2 = 0. 

This round i == 5.
5 compared to 2 = 0. 

This round i == 6.
6 compared to 2 = 2. 

This round i == 7.
7 compared to 2 = 2. 

This round i == 8.
8 compared to 2 = 0. 

This round i == 9.
9 compared to 2 = 0. 
*/
