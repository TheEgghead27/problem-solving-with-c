#include <stdio.h>

int main(void) {
    int a=5;
    // int *p;
    // p = &a;
    int *p=&a;  // not equal to int *p then *p=&a, making presumed location of p location of a

    printf("a is %d ", *&a);  // *& makes it pointer then finds from pointer, not too useful
    printf("it is at %p\n", &*p); // &* finds from pointer then makes pointer, also not too useful

    return 0;
}

// a. value stored at a: *a
// b. value stored at p: *p
// c. value at the location p points to: *p
// p = &a; p itself is a pointer, and the address of a is being stored
// *p = a; value of a is being stored at the presumed location of p (bad unless a is pointer you intend to use)