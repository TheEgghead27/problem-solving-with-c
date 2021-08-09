#include <string.h


void linearsort(char name[], int n) {
    int pass, cand;
    char temp[25];

    for (pass = 0; pass < n - 1; pass++) {
        for (cand = pass + 1; cand < n; cand++) {
            if (strcmp(name[pass], name[cand]) > 0) {
                /* switch strings */
                strcpy(temp, name[pass]);
                strcpy(name[pass], name[cand]);
                strcpy(name[cand], temp);
            }
        }
    }
    return;
}


void swapint(int *a, int *b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = *temp;

    return;
}