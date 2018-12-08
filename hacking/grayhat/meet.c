#include <stdio.h>
#include <string.h>

greeting(char *temp1, char *temp2) {
    char name[400]; //str variable to hold name
    strcpy(name, temp2);
    printf("Hello %s %s\n", temp1, name); 
}
main(int argc, char * argv[]) { //note the format for arguments

greeting(argv[1], argv[2]); //call function pass title and name;
printf("Bye bye %s %s\n", argv[1], argv[2]);
}


