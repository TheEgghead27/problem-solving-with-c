/*
 * Program prog7c.c:
 * finds the average of the grades for the class using
 * functions readData, sumArray, and avgArray
 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 50
// int sumArray(int[], int);
int sumArray(int num[], int n);
double avgArray(int num[], int n);
int readData(int[]);  // array parameters are treated like pointers, edits are applied always


int main(void) {
	// we do a little trolling
	// int    n;
	int	   mark[SIZE];
	double avgmark;

	/* call functions to read and process the marks */
	/*
	 * n = readData(mark);
	 * avgMark = ;
	 * printf("The average is %6.2f\n", avgmark);
	 */
	printf("The average is %6.2f\n", avgArray(mark, readData(mark)));
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
int sumArray(int num[], int n) {
	int sum, count;

	sum = 0;
	for (count = 0; count < n; count++)
		sum += num[count];
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
double avgArray(int num[], int n) {
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
int readData(int num[]) {
	int count, n;

	printf("Enter the number of marks> ");
	scanf("%d", &n);
	if (n > 0 && n <= SIZE)
		printf("There are %d marks\n", n);
	else {
		fprintf(stderr, "Invalid number of marks\n");
		exit(1);
	}

	for (count = 0; count < n; count++) {
		printf("Enter a mark> ");
		scanf("%d", &num[count]);
		printf("%d\n", num[count]);
	}
	return n;
}
