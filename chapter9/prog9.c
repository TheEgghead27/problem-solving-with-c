/*
 * Prog9.c:
 * reads in a form letter and replaces all
 * occurences of old strings by new strings
 */

#include <stdio.h>
#include <string.h>
#define LINESIZE 120
#define REPSIZE 15
/* function prototypes go here */
int pos(char text[], char oldstr[]);
void splitup(char text[], int lenold, char part1[], char part2[], int p);
void reassemble(char text[], char newstr[], char part1[], char part2[]);
void replace(char text[]);
char * gets(char *buffer, int num, FILE *infile);


int main(void) {
    char text[LINESIZE];

    while (gets(text, sizeof text, stdin) != NULL) {
        puts(text);
        replace(text);
        puts(text);
    }

    return 0;
}


/*
 * Function pos:
 * Input:
 *  oldstr: string to search for
 *  text: string in which to find old str
 * Process:
 *  finds position of first occurrence of oldstr in text
 * Output:
 *  if found, returns position, if not found, returns -1
 */
int pos(char text[], char oldstr[]) {
    int lenold, result, i = 0;

    lenold = strlen(oldstr);
    while (text[i] != '\0') {
        result = strncmp(&text[i], oldstr, lenold);
        if (result == 0)
            return i;
        i++;
    }
    return -1;
}


/*
 * Function splitup:
 * Input:
 *  text: string to split; lenold: length of oldstr
 *  p: position of oldstr within text; part1, part2, strings to fill
 * Process:
 *  splits text at positions p and p+lenold
 *  part1 gets text prior to oldstr; part2 gets text following oldstr
 * Output:
 *  part1 and part2 have new values
 */
void splitup(char text[], int lenold, char part1[], char part2[], int p) {
    strncpy(part1, text, p);
    part1[p] = '\0';

    strcpy(part2, text + (p+lenold));
    return;
}


/*
 * Function reassemble:
 * Input:
 *  newstr: the replacement word or phrase
 *  part1, part2: first and last parts of the original string text
 * Process:
 *  using concatenation, reassembles text from part1, newstr, and part2
 * Output:
 *  text has new value, -- part1 + newstr + part2
 */
void reassemble(char text[], char newstr[], char part1[], char part2[]) {
    strcpy(text, part1);
    strcat(text, newstr);
    strcat(text, part2);
    return;
}


/*
 * Function replace:
 * Input:
 *  text, a string in which to make replacements
 * Process:
 *  reads in strings oldstr and newstr
 *  calls pos to find position of oldstr in text
 *  calls splitup to remove oldstr and give values to part1 and part2
 *  calls reassemble to create new test by concatenating part1 + newstr + part2
 * Output:
 *  text has a new value with all replacements made
 */
void replace(char text[]) {
    int p, lenold;
    char part1[LINESIZE], part2[LINESIZE];
    char *oldstr, *newstr;
    char oldin[REPSIZE], newin[REPSIZE];

    oldstr = gets(oldin, sizeof oldin, stdin);
    while (oldstr != NULL) {
        newstr = gets(newin, sizeof newin, stdin);
        p = pos(text, oldstr);
        lenold = strlen(oldstr);
        while (p != -1) {
            splitup(text, lenold, part1, part2, p);
            reassemble(text, newstr, part1, part2);
            p = pos(text, oldstr);
        }
        oldstr = gets(oldin, sizeof oldin, stdin);
    }
    return;
}


char * gets(char *buffer, int num, FILE *infile) {
    char *outstr;
    int len;
    outstr = fgets(buffer, num, infile);
    if (outstr != NULL) {
        len = strlen(outstr);
        if (outstr[len-1] == '\n')
            outstr[len-1] = '\0';
    }
    if (strlen(outstr) == 0)
        return NULL;
    return outstr;
}