/*
 * Program multfunc.c:
 * construct a set of multiplication tables,
 * showing the multiples of the numbers from 1 to to
 * using two functions: to print headings and tables
 */
#include <stdio.h>
void printheadings(void);
void printrow(int m1);

int main(void) {
	int m1;

	printheadings();
	for (m1 = 1; m1 <= 10; m1++)
		printrow(m1);
}


/*
 * Function printheadings:
 * Input:
 * 	none
 * Process:
 * 	Prints headings to be used at the
 * 	top of a multiplication chart
 * Output:
 * 	prints several lines of headings
 */
void printheadings(void) {
	printf("This is a Multiplication Table, from 1 to 10\n");
	printf("\n");
	printf("  X    1    2    3    4    5    6    7    8    9    10\n");
	return;
}


/*
 * Function printrow:
 * Input:
 *	none
 * Process:
 * 	produces a multiplication table for m1
 * 	this contains the first 10 multiples of m1
 * Output:
 * 	prints the multiplication table
 */
void printrow(int m1) {
	int m2;

	printf("\n");
	printf("%3d", m1);
	for (m2 = 1; m2 <= 10; m2++)
		printf("%5d", m1 * m2);
	printf("\n");
	return;
}

