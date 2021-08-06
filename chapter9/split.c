// #include <stdio.h>
// #include <string.h>
#include "funny-functions.h"
int split(char [], char [], char []);


int main(void) {
    char *stringtosplit;
    char buffer[50];
    char first[50], second[50];
    // int result;

    stringtosplit = gets(buffer);

    if (split(stringtosplit, first, second) >= 0)
        printf("%s %s\n", second, first);
    else
        printf("no blank in string\n");

    return 0;
}


/*
 * calls findchar to find first occurrence of blank in stringtosplit
 * if findchar returns -1, first and second are unchanged
 * otherwise, returns position of blank; first and second have new values
 */
int split(char stringtosplit[], char first[], char second[]) {
    int pos;

    pos = findchar(stringtosplit, ' ');
    if (pos >= 0) {
        strncpy(first, stringtosplit,pos);
        *(first + pos) = '\0';
        strcpy(second, stringtosplit + pos + 1);
    }
    return pos;
}