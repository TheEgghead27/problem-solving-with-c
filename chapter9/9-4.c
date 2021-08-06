#include <stdio.h>
#include <string.h>

int main(void) {
    char big[50] = "a sunny day";
    char little[5] = "was";
    char middle[15] = "in the park";

    // printf("middle: %s\n", middle);
    strcat(big, little);
    printf("%s\n", big);
    // printf("middle: %s\n", middle);
    strcat(little, middle);
    printf("%s\n", little);  // so uh it automagically made this bigger and yoinked the letters from middle because memory fuck yay
    // printf("middle: %s\n", middle);
    strcat(big, middle);
    printf("%s\n", big);

    return 0;
}