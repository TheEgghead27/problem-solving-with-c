#include <stdio.h>

int main(void) {
    int a=5;
    int *p;

    p = &a;
    printf("a holds %d", a);
    printf(" and the thing p points to holds %d\n", *p);
    printf("and p itself is %p", p);
}

// which of the following assignment statements are incorrect?
/*
int *p;
int a;
double d;
p = d;
p = a;
p = &d;
p = &a;  // this is the only correct one because it is assigning a pointer to an int to an int pointer variable
*/