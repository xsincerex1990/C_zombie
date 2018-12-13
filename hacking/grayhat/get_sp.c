#include <stdio.h>
unsigned int get_sp(void) {
    __asm__("mov %rsp, %rax");
}
int main() {
    printf("Stack pointer (ESP): 0x%x\n", get_sp());
}
