#include <stdio.h>

int main() {
    int a = 7; // cmp    eax,0xae
    if (a > 5) { // cmp    DWORD PTR [rbp-0x4],0x5
        printf("its more than five"); // adc    ecx,DWORD PTR [rax-0x73]
    } 
    else {
        printf("Its less than five");
    }
    return 0;
}
				
