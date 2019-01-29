#include <stdio.h>


//Pointers allow for an indirect way of accessing the value of a particular item. 
int main(void) {
    int count = 10, x;
    int *int_pointer;
    int_pointer = &count; // set up indirect reference between intpointer and count by assigning a POINTER to variable count. Int_pointer DOES NOT contain the value of count.
    //to access the contents of count you use the indirection operator (*) 
    x = *int_pointer; // x is set equal to the value of int_pointer (10) 

    printf("count = %i, x = %i\n", count, x);
    return 0;
}