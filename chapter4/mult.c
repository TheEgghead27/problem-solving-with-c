/*
 * Program mult.c
 * construct a multiplication table,
 * showing the first 10 multiples of the numbers from 1 to 10
 */
#include <stdio.h>

int main(void) {
	int m1, m2;

	printf("This is a Multiplication Table, from 1 to 10\n");
	printf("\n");
	printf("  X    1    2    3    4    5    6    7    8    9    10\n");
	for (m1 = 1; m1 <= 10; m1++) {
		printf("\n");
		printf("%3d", m1);
		for (m2 = 1; m2 <= 10; m2++)
			printf("%5d", m1 * m2);
		printf("\n");
	};
}
