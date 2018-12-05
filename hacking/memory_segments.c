#include <stdio.h>

int global_var;
int global_init_var = 5;

void function() { //demo function
	int stack_var; // same name as variable in main

	printf("The function's stack var is at address 0x%08x\n", &stack_var);
}

int main() {
	int stack_var;
	static int static_init_var = 5;
	static int static_var;
	int *heap_var_ptr;

	heap_var_ptr = (int*) malloc(4);

	//these variables are in the data segment
	printf("global_init_var is at address 0x%08x\n", &global_init_var);
	printf("static_init_var is at address 0x%08x\n\n", &static_init_var);

	// these vars are in the bss segment
	printf("static_var is at address 0x%08x\n", &static_var);
	printf("global_var is at address 0x%08x\n\n", &global_var);

	// this var is in the heap
	printf("heap var is at address 0x%08x\n", &heap_var_ptr);

	//these vars are at the stack
	printf("stack_var is at address 0x%08x\n", &stack_var);

	function();
}
