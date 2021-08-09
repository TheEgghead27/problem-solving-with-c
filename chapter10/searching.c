#include <stdio.h>
// #include <stdlib.h>
#include <ctype.h>
int linearsearch(int numb[], int n, int newnumber);
void locatevalues(int numb[], int n);

int main(void) {
    int arr[] = {0, 2, 6, 9, 10};

    locatevalues(arr, 5);

    return 0;
}


/* Function linearsearch:
 * Input:
 *  numb: the array to search
 *  n: the number of elements to search in the array
 *  newnumber: the value to search for
 * Process:
 *  using a linear search, determines the position of
 *  newnumber within the first n elements of numb
 * Output:
 *  returns the position of newnumber in the array:
 *  returns -1 if newnumber is not found
 */
int linearsearch(int numb[], int n, int newnumber) {
    int position;

    for (position = 0; position < n; position++)
        if (numb[position] == newnumber)
            return position;   // or break

    return -1;  // replace -1 with position, and position should default be set to -1
}


/*
 * Function locatevalues:
 * Input:
 *  two input parameters
 *      numb: an array of integers
 *      n: the size of the array
 *  also reasons in a series of new values one by one
 * Process:
 *  for each new value, calls the function linear search
 *  to find the location of each new value in the numb array
 * Output:
 *  prints a message giving the location of each new value
 */
void locatevalues(int numb[], int n) {
    int newnumber, location;
    char answer;

    do {
        printf("Please enter a number to locate within the array\n");
        scanf(" %d", &newnumber);
        location = linearsearch(numb, n, newnumber);
        if (location >= 0)
            printf("%d occurs at location %d\n", newnumber, location);
        else
            printf("%d does not occur\n", newnumber);
        printf("do you want to continue? (Y/n)? \n");
        scanf(" %c", &answer);
        // printf("Char %c is %d\n", answer, answer);
    } while (toupper(answer) != 'N');
    return;
}


/*
 * Function binarysearch:
 * Input:
 *  numb: the array to search -- the array must be sorted
 *  n: the number of elements to search in the array
 *  newnumber: the value to search for
 * Process:
 *  using a binary search, determines the position of
 *  newnumber within the first n elements of numb
 * Output:
 *  returns the position (test) of newnumber in the array numb, returns -1 if newnumber is not found
 */
int binarysearch(int numb[], int n, int newnumber) {
    int low, high, test;

    low = 0;
    high = n - 1;
    while (low <= high) {
        test = (low + high) / 2;
        if (numb[test] == newnumber)
            return test;    /* newnumber was found at test */
        else if (numb[test] > newnumber)
            high = test - 1;  /* lower half of searched area because we got something too high */
        else
            low = test + 1; /* upper half of searched area because we got something too low */
    }

    return -1;
}


