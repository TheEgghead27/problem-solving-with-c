#include <stdio.h>
#include <string.h>

int main(void) {
    char big[50] = "sun in the daytime";
    char little[10] = "sunshine";
    char middle[15] = "a sunny day";
    printf("%d\n", strncmp(middle + 2, little, 4));
    printf("%d\n", strncmp(middle + 8, big + 5, 5));

    char dest[10];
    // printf("%s\n", middle + (strlen(middle) - 3));
    strcpy(dest, middle + (strlen(middle) - 3));
    printf("%s\n", dest);
    strncpy(dest, little, 3);
    dest[3] = '\0';
    printf("%s\n", dest);
}