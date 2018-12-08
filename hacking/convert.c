#include <stdio.h>
#include <bits/libc-header-start.h>
void usage(char *program_name) {
    printf("Usage: %s <message> <# of times to repeat>\n", program_name);
    exit(1);
}

int main(int argc, char *argv[]) {
    int i, count;

   // if(argc < 3) //if fewer than 3 arguments is used 
     //   usage(argv[0]); // display usage message and exit
    
    count = atoi(argv[2]); //convert the second arg into an  interger
    printf("Repeating %d times\n", count);

    for(i=0; i < count; i++) 
        printf("%3d - %s\n", i, argv[1]); // print the first arg 
    
}
