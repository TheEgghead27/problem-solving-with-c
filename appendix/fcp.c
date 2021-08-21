#include <stdio.h>

int main(void) {
        // ch = fgetc(source);
        // fputc(ch, destfile);
        int ch;
        FILE *fp;
        fp = stdout; // fopen("a7.out", "w");
        ch = fgetc(stdin);
        while(ch != EOF) {
                fputc(ch, fp);
                ch = fgetc(stdin);
        }
        return 0;
}