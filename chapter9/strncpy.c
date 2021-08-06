#include <stdio.h>
#include <string.h>


int main(void) {
    char source[20] = "computers are fun";
    char dest[10];

    strncpy(dest, source+3, 3);  // or strncpy(dest, &source[3], 3)
    dest[3] = '\0'; // dont forget the null terminator or else pain or not what
    printf("%s\n", dest);

    char result[18] = "I have a cat";
    char insert[10] = "big ";

    int len = strlen(insert);
    strcpy(result+9+len, result+9);
    strncpy(result+9, insert, len);
    printf("%s", result);

    return 0;
}