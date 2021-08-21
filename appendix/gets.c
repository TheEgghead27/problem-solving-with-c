// gets automatically discards \n at the end, but fgets doesnt
#include <stdio.h>
#include <string.h>

char * getstring(char *buffer, int num, FILE *infile) {
        char *outstr;
        int len;

        if ((outstr = fgets(buffer, num, infile)) != NULL){
                if (outstr[(len = strlen(outstr)) - 1] == '\n')
                        outstr[len - 1] = '\0';
        }

        return outstr;
}