#include <stdio.h>

void func3() {
    int i = 11;
    printf("\t\t\t[in func3] = i %d\n", i);
}

void func2() {
    int i = 7;
    printf("\t\t\t[in func2] = i %d\n", i);
    func3();
    printf("\t\t\t[back in func2] = i %d\n", i);
}

void func1() {
    int i = 5;
    printf("\t\t\t[in func1] = i %d\n", i);
    func2();
    printf("\t\t\t[back in func1] = i %d\n", i);
}
int main() {
    int i = 3;
    printf("\t\t\t[in main] = i %d\n", i);
    func1();
    printf("\t\t\t[back in main] = i %d\n", i);

}