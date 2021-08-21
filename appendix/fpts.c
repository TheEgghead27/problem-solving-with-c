#include <stdio.h>

int main(void) {
        char buffer[80];
        char *instring;
        FILE *filein, *filea, *fileb;

        filein = fopen("in-sort", "r");
        filea = fopen("outone", "w");
        fileb = fopen("outtwo", "w");
        while ((instring = fgets(buffer, sizeof(buffer), filein)) != NULL)
                if (*instring == 'a')
                        fputs(instring, filea);
                else if (*instring == 'b')
                        fputs(instring, fileb);
                else
                        fputs(instring, stdout);
        return 0;
}