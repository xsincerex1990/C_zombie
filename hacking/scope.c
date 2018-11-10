#include <stdio.h>
int j = 42; // global variable

void func3() {
    int i = 11; 
    int j = 999; // local j variable
    printf("\t\t\t[in func3] i = %d, j = %d\n", i, j); 
}

void func2() {
    int i = 7;
    printf("\t\t\t[in func2] i = %d, j - %d\n", i, j);
    printf("\t\t[in func2 setting j = 1337\n");
    j = 1337;
    func3();
    printf("\t\t\t[back in func2] i = %d, j = %d\n", i, j);
}

void func1() {
    int i = 5;
    printf("\t\t\t[in func1] i = %d, j = %d\n", i, j);
    func2();
    printf("\t\t\t[back in func1] i = %d, j = %d\n", i, j);
}
int main() {
    int i = 3;
    printf("\t\t\t[in main] i = %d, j = %d\n", i, j);
    func1();
    printf("\t\t\t[back in main] i = %d, j = %d\n", i, j);

}
