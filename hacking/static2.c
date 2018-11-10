#include <stdio.h>

void function() { // func with its own context
    int var = 5;
    static int sv = 5;

    printf("\t\t[In func] var @ %p = %d\n", &var, var);
    printf("\t\t [In func] sv @ %p = %d\n", &sv, sv);
    var++;
    sv++;
}

int main() { // own context
    int i;
    static int sv = 1337; //another static in different context

    for(i=0; i < 5; i++) {
        printf("[In Main] sv @ %p = %d\n", &sv, sv);
        function();
    }
}

/* 
[In Main] sv @ 0x561c99f15014 = 1337
                [In func] var @ 0x7ffefd0f9754 = 5
                 [In func] sv @ 0x561c99f15010 = 5
[In Main] sv @ 0x561c99f15014 = 1337
                [In func] var @ 0x7ffefd0f9754 = 5
                 [In func] sv @ 0x561c99f15010 = 6
[In Main] sv @ 0x561c99f15014 = 1337
                [In func] var @ 0x7ffefd0f9754 = 5
                 [In func] sv @ 0x561c99f15010 = 7
[In Main] sv @ 0x561c99f15014 = 1337
                [In func] var @ 0x7ffefd0f9754 = 5
                 [In func] sv @ 0x561c99f15010 = 8
[In Main] sv @ 0x561c99f15014 = 1337
                [In func] var @ 0x7ffefd0f9754 = 5
                 [In func] sv @ 0x561c99f15010 = 9
*/

