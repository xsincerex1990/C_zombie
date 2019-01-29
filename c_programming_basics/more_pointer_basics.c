#include <stdio.h>

int main(void) {
    char c = 'Q';
    char *char_pointer = &c;
    printf("%c %c\n", c, *char_pointer);

    c = '/';
    printf("%c %c\n", c, *char_pointer);
    
    *char_pointer = '('; // by doing this you assign "(" to the c variable
    printf("%c %c\n", c, *char_pointer);
    return 0;
}