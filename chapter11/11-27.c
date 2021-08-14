/*
 * establishes a database of candidates and their votes
 */
#include <stdio.h>
// #include <string.h>
struct votes {
    char name[20];
    int  numvotes;
};
void readvotes(struct votes [], int *);
struct votes whowon(struct votes [], int);

int main(void) {
    struct votes cands[100];
    int    numcands;

    readvotes(cands, &numcands);

    return 0;
}

/*
 * Function readvotes:
 * reads in and prints the cand array of structures
 */
// alt: void readvotes(struct votes *cand, int *numcands), but increased chance of misread/segfault
void readvotes(struct votes cand[], int *numcands) {
    int i;

    scanf("%d", numcands);
    for (i = 0; i < *numcands; i++){
        scanf("%s", cand[i].name);  // pointer notation (cand + i) -> name
        scanf("%d", &cand[i].numvotes);  // pointer notation &(cand + i) -> numvotes
        printf("%s\n", cand[i].name);
        printf("%d\n", cand[i].numvotes);
    }

    return;
}

/*
 * alt: put struct name on new line
 * struct votes
 * whowon(struct votes v[], int numcands)
 */
struct votes whowon(struct votes v[], int numcands) {
    int i;
    struct votes highest;

    highest = v[0];
    for (i = 1; i < numcands; i++)
        if (v[i].numvotes > highest.numvotes)
            highest = v[i];

    return highest;
}