#include <stdio.h>

void function() { // func with its own context
    int var = 5;
    static int sv = 5;

    printf("\t\t[In func] var = %d\n", var);
    printf("\t\t [In func] sv = %d\n", sv);
    var++;
    sv++;
    printf("\tTest var = %d\n", var);
}

int main() { // own context
    int i;
    static int sv = 1337; //another static in different context

    for(i=0; i < 5; i++) {
        printf("[In Main] sv = %d\n", sv);
        function();
    }
}

