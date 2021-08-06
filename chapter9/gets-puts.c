#include <stdio.h>


int main(void) {
    char str[128];

    // gets(str); // gets is dead because unsafe (easy to overwrite memory)
    // both gets return a pointer to their result, NULL if nothing
    fgets(str, sizeof str, stdin);  // this limits the size which is cool and good
    puts(str);  // includes extra newline like default in soyboy programming languages
    // since strings are arrays which are pointers a pointer or arithmetic'ed pointer will work

    char string[128];
    // char *result;
    /*
    do {
        result = fgets(string, sizeof string, stdin);
        puts(str);
    } while (result != NULL);
    */
    while ((fgets(string, sizeof string, stdin)) != NULL)  // you can use fgets() output but not the target string itself because fgets may lead to NULL pointer
        puts(str);

    return 0;
}


/* Strip newline from fgets() */
#include <string.h>
char * getstring(char *buffer, int num, FILE *infile) {
    char *outstr;
    int len;
    outstr = fgets(buffer, num, infile);
    if (outstr != NULL) {
        len = strlen(outstr);
        if (outstr[len-1] == '\n')
            outstr[len-1] = '\0';
    }

    return outstr;
}