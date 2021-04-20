/* driver program to test printmaxmin */
#include <stdio.h>
void findmaxmin(int, int);

int main(void) {
	int a=1, b-2, larger, smaller;
	findmaxmin(a, b, &larger, &smaller);
	printf("the larger is %d   and the smaller is %d\n", larger, smaller);
}


/*
 * Function findmaxmin:
 * Input:
 *	x and y will have values to compare
 *	max and min point to locations that
 *	will be assigned values in the function
 * Process:
 * 	the function stores the larger of x and y
 * 	in *max; it also stores the smaller in *min
 * Output:
 *	the locations max and min point to will get values
 */
void findmaxmin(int x, int y, int *max, int *min) {
	if (x > y) {
		*max = x;
		*min = y;
	};
	else {
		*max = y;
		*min = x;
	};
	return;
}
