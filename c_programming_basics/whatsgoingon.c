#include <stdio.h>

int main(void) {
    int i = 10;
    printf("%d  %d  %d\n", i, i, ++i); // output 10 10 11 because i is pre incremented on the third i to the right
    return 0;
}
