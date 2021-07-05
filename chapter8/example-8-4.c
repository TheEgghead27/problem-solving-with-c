#include <stdio.h>

int main(void) {
    int *p;
    int a=5;
    p = &a;
    *p = 10;
    *p = *p +1;
    printf("%p holds %d", p, a);  // %p for hex pointer %u for unsigned int/decimal location

    return 0;
}

// (*p)++ does the same thing as line 8
// *p++ does not, it changes the location the pointer is pointing to