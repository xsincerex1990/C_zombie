#include <stdio.h>

int main(void) {
    int num, lnum, last_result = 0;
    printf("ENTER A NUMBER:\n");
    scanf("%i", &num);
    
    do {
        lnum = num % 10;
        num /= 10;
        last_result += lnum;
    }
    while (num != 0);
    printf("%i\n", last_result);
    return 0;
}