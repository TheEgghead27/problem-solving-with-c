#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void) {
    // strcat(first,second), strcat writes to the first variable, only stopping at \0 and not caring about size limits
    char bigstr[1024];
    char dest[30] = "computer";
    char second[15] = " programming";
    if (strlen(dest) + strlen(second) < sizeof dest)
        strcat(dest, second);
    else {
        printf("error: can't concatenate-destination is too small");
        exit(0);
    }
    strcpy(bigstr, dest);
    strcat(bigstr, " is fun and also very demanding");
    printf("%s", bigstr);  // recommended to use %s, but just a string variable will work
}