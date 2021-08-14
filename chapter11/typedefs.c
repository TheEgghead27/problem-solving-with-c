#include <stdio.h>

// typedef definition newtype;
typedef int bigarray[100];
typedef char string[80];
typedef int *intptr;
typedef struct addr {
    int housenumb;
    char streetname[10];
} address;

int main(void) {
        int array[100];   // this is not a bigarray

        address home_address;
        struct addr work_address;

        // typeof is used to define a new variable based on the old one
}