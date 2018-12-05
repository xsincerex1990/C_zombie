#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char *char_ptr; 
	int  *int_ptr;
	int mem_size;

	if (argc < 2)
		mem_size = 50;
	else
		mem_size = atoi(argv[1]); //ascii to int or "converting string to int

	printf("\t[+] allocating %d bytes on the heap for char_ptr\n", mem_size);
	char_ptr = (char*) malloc(mem_size); // allocating heap memory

	if (char_ptr == NULL) { //CHECK TO SEE IF MALLOC FAILS
		fprintf(stderr, "Error could not allocate heap memory.\n");
		exit(-1);
	}

	strcpy(char_ptr, "This memory is located on the heap.");
	printf("char_ptr (%p) ---> '%s'\n", char_ptr, char_ptr);
	printf("\t[+] allocating 12 bytes on the heap for int_ptr\n");
	int_ptr = (int*) malloc(12);

	if (int_ptr == NULL) { //check if malloc fails
	fprintf(stderr, "Error could not allocate heap memory.\n");
		exit(-1);
	}
	
	*int_ptr = 31337; // put the value of 31337 where int_ptr is pointing to
	printf("int_ptr (%p) --> %d\n", int_ptr, *int_ptr);


	printf("\t[-] freeing char_ptr's heap memory....\n");
	free(char_ptr); //Freeing heap memory

	printf("\t[+] Allocating another 15 bytes for char_ptr\n");
	char_ptr = (char *) malloc(15); // allocating more heap memory

	if(char_ptr == NULL) { // checking for malloc failure again 
		fprintf(stderr, "Error could not allocate heap memory\n");
		exit(-1);
	}

	strcpy(char_ptr, "new memory");
	printf("char_ptr (%p) ---> '%s'\n", char_ptr, char_ptr);

	printf("\t[-] freeing up int_ptr's heap memory....\n");
	free(int_ptr); //Freeing heap memory
	printf("\t[-] freeing up char_ptr's heap memory....\n");
	free(char_ptr); //Freeing heap memory
}