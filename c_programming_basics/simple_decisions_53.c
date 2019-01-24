// determine if a number is even or odd
#include <stdio.h>

int main(void) {
    int num, remaining;
    
    printf("Enter number to test: ");
    scanf("%i", &num);

    remaining = num % 2;
    if (remaining == 0) 
        printf("Number is even.\n");        
    if (remaining != 0) 
        printf("Number is odd.\n");
    
    return 0;
}