#include <stdio.h>
/* 
float *p, **p; // p i s a pointer to float, pp is a pointer to a pointer that points to float

int (*fp)(int) // fp is a pointer to function with type int(int)
*/
/* 
CS = Code Segment (used for IP)

DS = Data Segment (used for MOV)

ES = Destination Segment (used for MOVS, etc.)

SS = Stack Segment (used for SP)
FS and GS are commonly used by OS kernels to access thread-specific memory
*/

int main() { //mov    rax,QWORD PTR fs:0x28----mov    QWORD PTR [rbp-0x8],rax---------<main+21>:    xor    eax,eax // XORing an operand with itself changes the operand to 0. This is used to clear a register.
	int i;

	char char_array[5] = {'a', 'b', 'c', 'd', 'e'};  //mov    BYTE PTR [rbp-0xd],0x61
	int int_array[5] = {1, 2, 3, 4, 5};

	char *char_pointer;
	int *int_pointer;

	char_pointer = int_array;
	int_pointer = char_array;

	for(i=0; i < 5; i++) {
		// Iterate through the int array with the int pointer 
		printf("[int pointer] points to %p, which contains the char '%c'\n", int_pointer, *int_pointer);
		int_pointer = int_pointer + 1;
	}

	for(i=0; i < 5; i++) {
		//iterate through char array with char pointer
		printf("[char pointer] points to %p, which contains the  int %d\n", char_pointer, *char_pointer);
		char_pointer = char_pointer + 1; 
	}

}
