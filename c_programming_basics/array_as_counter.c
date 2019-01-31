#include <stdio.h>

int main(void) {
    int ratingCounter[11], i, response;

    for (i = 1; i <= 10; ++i)
         ratingCounter[i] = 0;
    printf("Enter your responses\n");

    for (i = 1; i<= 20; ++i) {
         scanf("%i", &response);

         if ( response < 1 || response > 10)
             printf ("Bad response: %i\n", response);
        else
             ++ratingCounter[response];
    }

    printf("\n\n Rating number of responses\n");
    printf("------ -------------------");

    for (i = 1; i < 10; ++i)
         printf("%4i%14i\n", i, ratingCounter[i]);
    
    return 0;
}