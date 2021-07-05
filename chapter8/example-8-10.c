#include <stdio.h>
void trytoadd(int x);

int main(void) {
    int k=5;

    printf("in the main program, before the call: %d\n", k);
    trytoadd(k);
    printf("in the main program, after the call: %d\n", k);

    return 0;
}


/* function that tries to add 1 to the param x */
void trytoadd(int x) {
    printf("in the function, before adding: %d\n", x);
    x++;
    printf("in the function, after adding: %d\n", x);
    return;
}