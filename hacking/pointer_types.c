#include <stdio.h>
/* 
float *p, **p; // p i s a pointer to float, pp is a pointer to a pointer that points to float

int (*fp)(int) // fp is a pointer to function with type int(int)
*/

int main() {
	int i;

	char char_array[5] = {'a', 'b', 'c', 'd', 'e'};
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
