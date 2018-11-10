#include <stdio.h>
int j = 42; // global variable

void func3() {
    int i = 11; 
    int j = 999; // local j variable
    printf("\t\t\t[in func3] i @ 0x%08x %d\n", &i, i); //unary adressof gives adress of i
    printf("\t\t\t[in func3] j @ 0x%08x %d\n", &j, j);

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

/*
                        [in main] i @ 0xe1a41224 = 3
                        [in main] j @ 0x449a0010 = 42
                        [in func1] i @ 0xe1a41204 = 5
                        [in func1] j @ 0x449a0010 = 42
                        [in func2] i @ 0xe1a411e4 = 7
                        [in func2] j @ 0x449a0010 = 42
Setting j to 1337 in func2
                        [in func3] i @ 0xe1a411c0 = 11
                        [in func3] j @ 0xe1a411c4 = 999 // notice j is different from the one used in func1
                        [Back in func2] i @ 0xe1a411e4 =  7
                        [Back in func2] j @ 0x449a0010 =  1337
                        [Back in func1] i @ 0xe1a41204  = 5
                        [Back in func1] j @ 0x449a0010  = 1337
                        [back in main] i @ 0xe1a41224  = 3
                        [back in main] j @ 0x449a0010  = 133
*/



/* 
Reading symbols from a.out...done.
(gdb) list 1
1       #include <stdio.h>
2       int j = 42; // global variable
3
4       void func3() {
5           int i = 11;
6           int j = 999; // local j variable
7           printf("\t\t\t[in func3] i @ 0x%08x = %d\n", &i, i); //unary adressof gives adress of i
8           printf("\t\t\t[in func3] j @ 0x%08x = %d\n", &j, j);
9
10      }
(gdb) break 7
Breakpoint 1 at 0x71f: file scope2.c, line 7.
(gdb) run
Starting program: /home/fruitdealer/clones/C_zombie/hacking/a.out
                        [in main] i @ 0xffffddc4 = 3
                        [in main] j @ 0x55756010 = 42
                        [in func1] i @ 0xffffdda4 = 5
                        [in func1] j @ 0x55756010 = 42
                        [in func2] i @ 0xffffdd84 = 7
                        [in func2] j @ 0x55756010 = 42
Setting j to 1337 in func2

Breakpoint 1, func3 () at scope2.c:7
7           printf("\t\t\t[in func3] i @ 0x%08x = %d\n", &i, i); //unary adressof gives adress of i
(gdb) bt
#0  func3 () at scope2.c:7
#1  0x00005555555547e5 in func2 () at scope2.c:18
#2  0x000055555555489a in func1 () at scope2.c:27
#3  0x000055555555494f in main () at scope2.c:36
(gdb) bt full
#0  func3 () at scope2.c:7
        i = 11
        j = 999
#1  0x00005555555547e5 in func2 () at scope2.c:18
        i = 7
#2  0x000055555555489a in func1 () at scope2.c:27
        i = 5
#3  0x000055555555494f in main () at scope2.c:36
        i = 3
*/

/*
The bt command can show nested functions calls by looking at records kept on the stack.(NOTE: stack stores temporary variables created by each function (including the main() function)) remember LIFO structure.
Each time a function is called a record called a stack frame is put on the stack.
Each line in the bt output corresponds to a stack frame
Each stack frame contains the variables for that context (they can be shown by adding "full" to bt command)
*/