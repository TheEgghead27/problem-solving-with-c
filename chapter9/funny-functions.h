#include <stdio.h>
#include <string.h>
char * gets(char *buffer) {
    char *outstr;
    int len;
    outstr = fgets(buffer, sizeof buffer, stdin);
    if (outstr != NULL) {
        len = strlen(outstr);
        if (outstr[len-1] == '\n')
            outstr[len-1] = '\0';
    }

    return outstr;
}


/*
 * returns an integer representing the position of let within str
 * if not found, returns -1
 */
int findchar(char *str, char let) {
    int i=0;

    while (str[i] != '\0') {
        if (str[i] == let)
            return i;
        i++;
    }
    return -1;
}
