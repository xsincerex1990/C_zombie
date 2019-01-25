#include <stdio.h>

int main(void) {
    int num, right_digit;

    printf("Enter your number.\n");
    scanf("%i", &num);

    do {
        right_digit = num % 10;
        printf ("%i", right_digit);
        num /= 10;
    }
    while (num != 0);

    printf("\n");

    return 0;
}