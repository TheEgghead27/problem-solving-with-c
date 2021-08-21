/// Using Files - fopen, pclose, pfprint, pscanf, Command-Line Parameters; atpo
#include <stdio.h>
#include <stdlib.h>

// Using files gives you multiple options for output streams
int main(void) {
        FILE *infile, *changes, *outfile;   // FILE is defined in stdio, file pointers are used to reference files

        infile = fopen("letter.dat", "r");
        if (infile == NULL) {  // file could not be opened
                fprintf(stderr, "error in opening file letter.dat\n");  // error goes to stderr to alert user with screen output
                exit(1);
        }
        int num;
        while(fscanf(infile, "%d", &num) > 0) // check for errors
                fprintf(stdout, "%d\n", num);
        fclose(infile);

        changes = fopen("changes", "r");

        outfile = fopen("newfile.out", "q");  // mode is string, so has to be double-quoted
        // mode "r" is read, the file has to already exist
        // mode "w" is mode write, the file will be created if it does not exist already
        // mode "a' is mode append, the file will be appended to, and created if it does not exist alreadt
        // fopen returns FILE * or a NULL for errors
        // If one is using DOS/NTFS partitions, the backslashes must be escaped as \\

        // fclose(filepointer); closes a file, if it encounters an error like closing an unopened file, EOF is returned
        // otherwise, it returns 0
        fclose(changes);
        fclose(outfile);

        FILE *fin, *fout;
        char filei[30]; fileo[30]
        fprintf(stdout, "enter the name of the input file\n");
        fscanf(stdin, "%s", filei);
        fprintf(stdout, "enter the name of the input file\n");
        fscanf(stdin, "%s", fileo);
        fin = fopen(filei, "r");
        fout = fopen(fileo, "w");  // dont type quotes in the input, \ still have to be escaped
        // this is generally unreliable


        return 0;
}