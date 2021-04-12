/* 
 * Program prog4.c
 * find the sum of the first 30 squares
 */
#include <stdio.h>

int main(void) {
	int item, sum = 0;

	for (item = 1; item <= 30; item++)
		sum += item * item;
	printf("%d is the sum of the first 30 squares\n", sum);
}
