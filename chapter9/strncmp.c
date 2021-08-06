#include <stdio.h>
#include <string.h>

int main(void) {
    // string number compare
    // strcmp() but with an extra arg to limit the number of chars to check
    // result = strncmp(first, second, number)
    // use pointer arithmetic if you want to start from the middle
    char first[30] = "strong";
    char second[10] = "stronger";
    // int numchars

    if (strncmp(first, second, 4) == 0)
        printf("first four characters are alike\n");
    else if (strncmp(first, second, 4) < 0)
        printf("first four characters are less\n");
    else
        printf("first four characters of first string are greater\n");

    // if (strncmp(&first[2], "ron", 3) == 0)
    if (strncmp(first + 2, "ron", 3) == 0)
        printf("ron is found in position 2\n");
    else
        printf("ron is not found\n");


    return 0;
}