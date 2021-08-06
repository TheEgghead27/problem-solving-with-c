#include <stdio.h>
#include <string.h>

int main(void) {
    // strcmp compares the raw numerical char values, with the difference being the output
    // we dont care too much about that, just that it should be non-zero if theres a difference
    // result = strcmp(str1, str2)  variables and raw "strings" are fine
    char first[20], second[20];

    scanf("%s", first);
    // printf("\n");
    scanf("%s", second);
    if (strcmp(first,second) == 0)
        printf("they are equal\n");  // not \b, \b is delete
}