#include <stdio.h>

int main(void) {
    int num;
    printf("Enter a number\n");
    scanf("%i", &num);
    num = num % 2;
    if (num != 0) 
        printf("The number is odd\n");
    else 
        printf("Number is even\n");
    
    return 0;

}