#include <stdio.h>
void linearsort(int numb[], int n);
void bubblesort(int numb[], int n);

int main(void) {
    int arr[6] = {6, 2, 3, 8, 1, 3};
    int i;

    // linearsort(arr, 6);
    bubblesort(arr, 6);
    for (i = 0; i < 6; i++)
        printf("%d, ", arr[i]);
    return 0;
}


/* Function linearsort:
 * Input:
 *  numb: the array to sort:
 *  n: the number of elements to sort in the array
 * Process:
 *  linear sorts into ascending order
 *  the first n values of the numb array
 * Output:
 *  function modifies array numb
 */
void linearsort(int numb[], int n) {
    int pass, cand;
    int temp;

    for (pass = 0; pass < n - 1; pass++) {
        for (cand = pass + 1; cand < n; cand++) {
            if (numb[pass] > numb[cand]) {
                temp = numb[pass];
                numb[pass] = numb[cand];
                numb[cand] = temp;
            }
        }
    }

    return;
}


/*
 * Function bubblesort:
 * Input:
 *  numb: the array to sort
 *  n: the number of elements to sort in the array
 * Process:
 *  bubble sorts into ascending order
 *  the first n values of the numb array
 * Output:
 *  function modifies array numb
 */
void bubblesort(int numb[], int n) {
    int pos, swapped;
    int temp;

    do {
        swapped = 0;
            for (pos = 0; pos < n - 1; pos++) {
                if (numb[pos] > numb[pos + 1]) {
                    /* swap the values*/
                    temp = numb[pos];
                    numb[pos] =  numb[pos + 1];
                    numb[pos + 1] = temp;
                    swapped = 1;
                }
            }
    } while (swapped);
    return;
}