/*
 * Program prog10.c:
 * sorting using the linear sort algorithm
 * searching using the linear search algorithm
 */
#include <stdio.h>
#include <ctype.h>
#define SIZE 50

void linearsort(int [], int);
int readdata(int []);
void printarray(int [], int);
int linearsearch(int [], int, int);
void locatevalues(int [], int);

int main(void) {
    int numb[SIZE];
    int n;

    n = readdata(numb);

    printf("original data\n");
    printarray(numb, n);

    linearsort(numb, n);

    printf("\n\nsorted array\n");
    printarray(numb, n);

    locatevalues(numb, n);

    return 0;
}


/*
 * Function readData:
 * Input:
 *	numb: the array to fill
 * Process:
 *	reads n and reads n values
 *	into the numb array
 * Output:
 *	fills array numb
 *  returns n
 */
int readdata(int numb[]) {
	int i, n;

	printf("enter the number of elements in the array (limit %d)\n", SIZE);
	scanf("%d", &n);

	if (n > SIZE) {
        printf("entered amount was too large!\n");
        return readdata(numb);
	}

	for (i = 0; i < n; i++) {
	    printf("enter a number to be put into the array\n");
	    scanf("%d", numb + i);
	}
	return n;
}


void printarray(int numb[], int n) {
    int i;

    for (i = 0; i < n; i++)
        printf("%d\n", numb[i]);

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
void linearsort(int numb[], int n) {
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


void locatevalues(int numb[], int n) {
    int newnumber, location;
    char answer;

    do {
        printf("Please enter a number to locate within the array\n");
        scanf("%d", &newnumber);
        location = linearsearch(numb, n, newnumber);
        if (location >= 0)
            printf("%d occurs at position %d\n", newnumber, location);
        else
            printf("%d does not occur\n", newnumber);
        printf("do you want to continue (Y/n)?\n");
        scanf(" %c", &answer);
    } while (toupper(answer) != 'N');
    return;
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
/* hahhaha i lied
    int position;

    for (position = 0; position < n; position++)
        if (numb[position] == newnumber)
            return position;   // or break

    return -1;  // replace -1 with position, and position should default be set to -1
}
    int binarysearch(int numb[], int n, int newnumber) { */
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
