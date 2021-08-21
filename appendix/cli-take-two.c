/*
 * accepts two file names as command-line parameters, terminates if there are fewer than two; otherwise opens the files
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
        FILE *infile, *outfile;

        if (argc < 3) {
                fprintf(stderr, "missing one or more parameters\n");
                fprintf(stderr, "correct format is:\n");
                fprintf(stderr, "prgmname infile outfile\n");
                exit(1);
        }
        infile = strcmp(argv[1], "-") ? fopen(argv[1], "r") : stdin;  // inline conditional
        // infile = fopen(argv[1], "r");
        outfile = strcmp(argv[2], "-") ? fopen(argv[2], "w")  : stdout;

        fclose(infile);
        fclose(outfile);

        // to get stdin and stdout, you do not fopen() them, instead you need to call those constants from stdio
        // you can switch to them using a conditional if statement
        // the unix convention is to use `-` as the indicator to use the stream
}
// you can use parameters alongside redirection
/*
 * test param < infile > outfile
 * test < infile > outfile param
 * test < infile param > outfile
 * test > outfile < infile param
 *
 * a.pout < infile param | lpr
 */