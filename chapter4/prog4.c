/* 
 * Program prog4.c
 * find the sum of the first NUMBERTOSUM squares
 * with NUMBERTOSUM defined as a constant
 */
#include <stdio.h>
#define NUMBERTOSUM 27  // haha the book says the int limit is 32767

int main(void) {
	int item, sum = 0;

	for (item = 1; item <= NUMBERTOSUM; item++)
		sum += item * item;
	printf("%d is the sum of the first %d squares\n", sum, NUMBERTOSUM);
}
