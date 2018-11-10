#include <stdio.h>
int j = 42; // global variable

void func3() {
    int i = 11; 
    int j = 999; // local j variable
    printf("\t\t\t[in func3] i @ 0x%08x = %d\n", &i, i); //unary adressof gives adress of i
    printf("\t\t\t[in func3] j @ 0x%08x = %d\n", &j, j);

}

void func2() {
    int i = 7;
    printf("\t\t\t[in func2] i @ 0x%08x = %d\n", &i, i);
    printf("\t\t\t[in func2] j @ 0x%08x = %d\n", &j, j);
    printf("Setting j to 1337 in func2\n");
    j = 1337;
    func3();
    printf("\t\t\t[Back in func2] i @ 0x%08x =  %d\n", &i, i);
    printf("\t\t\t[Back in func2] j @ 0x%08x =  %d\n", &j, j);
}

void func1() {
    int i = 5;
    printf("\t\t\t[in func1] i @ 0x%08x = %d\n", &i, i);
    printf("\t\t\t[in func1] j @ 0x%08x = %d\n", &j, j);
    func2();
    printf("\t\t\t[Back in func1] i @ 0x%08x  = %d\n", &i, i);
    printf("\t\t\t[Back in func1] j @ 0x%08x  = %d\n", &j, j);
}
int main() {
    int i = 3;
    printf("\t\t\t[in main] i @ 0x%08x = %d\n", &i, i);
    printf("\t\t\t[in main] j @ 0x%08x = %d\n", &j, j); //unary adressof gives adress of i

    func1();
    printf("\t\t\t[back in main] i @ 0x%08x  = %d\n", &i, i);
    printf("\t\t\t[back in main] j @ 0x%08x  = %d\n", &j, j);

}