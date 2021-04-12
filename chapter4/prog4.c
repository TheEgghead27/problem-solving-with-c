/* 
 * Program prog4.c
 * find the sum of the first 27 squares
 */
#include <stdio.h>

int main(void) {
	int item, sum = 0;

	for (item = 1; item <= 27; item++)
		sum += item * item;
	printf("%d is the sum of the first 27 squares\n", sum);
}
