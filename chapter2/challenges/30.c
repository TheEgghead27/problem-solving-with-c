/* Write a program that prints a table of the numbers from 1 to 30, together with
 * the square cube, and square root of each. Include appropriate column headings.
 */

#include <stdio.h>
#include <math.h>

int main(void) {
	double i;
	printf("Number\tSquare\tCube\n");
	for (i = 1.0; i <= 30; i++) {
		printf("%.0f\t%.0f\t%.0f\n", i, pow(i, 2), pow(i, 3));
	}
}