#include <stdio.h>

int main(void) {
    int result;
    result = 100 + 2 * 25;
    printf("100 + 2 * 25 = %i\n", result);
    /* output = 100 + 2 * 25 = 150 and not 2550 because it priortizes multiplication*/
    return 0;
}