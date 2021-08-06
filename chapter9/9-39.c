#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main (void) {
    int ch;

    do {
        printf("when the imposter is sus!\n");
        printf("Do you want to continue? (y/n)");
        ch = getchar();
        getchar();
    // } while (ch == 'y' || ch == 'Y');
    } while (toupper(ch) == 'Y');

    // string to lower
    char str[15];
    int i = 0;

    strcpy(str, "alPHABetic");
    while (str[i] != '\0') {
        str[i] = tolower(str[i]);
        i++;
    }

    return 0;
}