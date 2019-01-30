#include <stdio.h>

int main(void) {

    int numbers[4] = {0};
    char name[4] = {"name"};
    printf("Undefined int array elements: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);

    printf("Undefined name elements: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
    printf("Undefinedname: %s\n\n", name);

    //set up numbers
    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;

    // set up the name

    name[0] = 'Z';
    name[1] = 'e';
    name[2] = 'd';
    name[3] = '\0';

    //print them out initialized

    printf("Defined numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
    printf("Defined name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);

    //print it like a string 
    printf("Defined name: %s\n\n", name);

    //another way to use name

    char *another = "Zed";
    printf("Another: %s\n", another);

    printf("Another each: %c %c %c %c\n", another[0], another[1], another[2], another[3]);
     
    return 0;
    
}