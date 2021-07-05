/*
 * Program prog7c.c:
 * finds the average of the grades for the class using
 * functions readData, sumArray, and avgArray
 */
#include <stdio.h>
#define SIZE 50
void readData(int *, int *);  // array parameters are ~~treated like~~ pointers, edits are applied always
int sumArray(int *, int);
double avgArray(int *, int);
void findLimits(int *num, int n, int *largest, int *smallest);
void countMarks(int *num, int n, double avgNum, int *numless, int *numgreater, int *numequal);


int main(void) {
	int	   n;
	int	   mark[SIZE];
	double avgMark;
    int higrade;
    int lograde;
    int less, greater, equal;

	/* call functions to read and process the marks */
	printf("The grades for the class:\n");
	readData(mark, &n);
	avgMark = avgArray(mark, n);
	printf("The average grade in the class is %6.2f\n", avgMark);
    findLimits(mark, n, &higrade, &lograde);
	printf("The highest mark is %d\n", higrade);
    printf("The lowest mark is %d\n", lograde);
	countMarks(mark, n, avgMark, &less, &greater, &equal);
    printf("The number of marks less than the average is %d\n", less);
    printf("The number of marks greater than the average is %d\n", greater);
    printf("The number of marks equal to the average is %d\n", equal);

    return 0;
}

/*
 * Function sumArray:
 * Input:
 *	num: an array of integers
 *  n: the number of elements in the array
 * Process:
 *	finds the sum of the first n elements
 *	in the num array
 * Output:
 *	returns the sum to the calling function
 */
int sumArray(int *num, int n) {
	int sum, count;

	sum = 0;
	for (count = 0; count < n; count++)
		sum += *(num + count);
	return sum;
}


/*
 * Function avgArray:
 * Input:
 *	num: an array of integers
 *	n: the number of elements in the array
 * Process:
 *	calls sumArray to find the sum of the first n elements
 *	in the num array; divides the returned value by n to obtain the average
 * Output:
 *	returns the average to the calling function
 */
double avgArray(int *num, int n) {
	return (double)sumArray(num, n) / n;
}


/*
 * Function readData:
 * Input:
 *	num: the array to fill
 *	parameter is uninitialized upon entry
 * Process:
 *	reads n and reads n values
 *	into the num array; prints n and num
 * Output:
 *	fills array num
 *	prints num array
 *	returns n
 */
void readData(int *num, int *n) {
	int count;

	scanf("%d", n);
	for (count = 0; count < *n; count++) {
	    printf("Enter a mark> ");
        scanf("%d", num + count);
        printf("%d", *(num + count));
	}
	return;
}


/*
 * Function findLimits:
 * Input:
 *	num: an array of integers
 *	n: the number of elements in the array
 * Process:
 *	finds the highest value in the first
 *	n elements of the array
 * Output:
 *	returns the maximum of the elements
 */
void findLimits(int *num, int n, int *largest, int *smallest) {
	int largestSoFar, smallestSoFar, count;

	largestSoFar = *num;
	for (count = 0; count < n; count++) {
        if (largestSoFar < *(num + count))
            largestSoFar = *(num + count);
        if (smallestSoFar > *(num + count))
            smallestSoFar = *(num + count);
    }
	*largest = largestSoFar;
	*smallest = smallestSoFar;

	return;
}


/*
 * Function countMarks
 * Input:
 *	num: an array of integers
 *	n: the number of elements in the array
 *	avgNum: the average of the elements in the array
 * Process:
 *	find how many grades in the array num are greater than avgnum
 *	find how many grades in the array num are less than avgnum
 *	find how many grades in the array num are equal to avgnum
 * Output:
 *	print numless, numgreater, and numequal
 */
void countMarks(int *num, int n, double avgNum, int *numless, int *numgreater, int *numequal) {
	int count;
	*numless=0;
	*numgreater=0;
	*numequal=0;

	for (count = 0; count < n; count++)  // apparently its just legal to have all these if/elifs without {}
		if (*(num + count) < avgNum)
            (*numless)++;
		else if (num[count] > avgNum)
            (*numgreater)++;
		else
            (*numequal)++;

	return;
}
