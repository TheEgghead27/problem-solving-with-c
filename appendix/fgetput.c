// gets() is no longer a thing because it is too easy to cause a buffer overflow since there is no check for string capaccity
// fgets() is much more specific and helpful because you can set a limit
// stringptr = fgets(inputstring, n_limit, source);
// input area is the char array, n is the size of the field (sizeof input), source is a file like stdin
// fgets() reads up to a \n newline or the limit is hit (n-1 chars to compensate for '\0')
// unsuccessful read gives NULL
#include <stdio.h>

int main(void) {
        char inarea[15];
        char *instring;

        instring = fgets(inarea, 15, stdin);  // stdin can be replaced with a file pointer, check if that is null beforehand
        // if the limit is hit, anything after that still on the line is in the input buffer
        // the \n for enter is included in your output if possible

        if (instring != NULL)  // NULL is returned on error
                fprintf(stderr, "file could not be read");

        // fputs() only puts the string with no \n
        fputs(instring, stdout); // replace stdout with any file pointer
        while((instring = fgets(inarea, 15, stdin)) != NULL)
                fputs(instring, stdout);

}