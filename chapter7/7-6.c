#include <stdio.h>


int main(void) {
    int i=0;
    
    char message[20] = {'w', 'e', 'i', 'r', 'd'};
    message[5] = ' ';
    message[6] = 's';
    message[7] = 't';
    message[8] = 'u';
    message[9] = 'f';
    message[10] = 'f';
    message[11] = '\0';

    // null char print method
    while (message[i] != '\0') {
        printf("%c", message[i]);
        i++;
    }
    
    // @ts-ignore
    printf("\n");
    
    for (i = 0; message[i] != '\0'; i++) {
        printf("%c", message[i]);
    }

    // printf %s method
    printf("\n%s", message);
}