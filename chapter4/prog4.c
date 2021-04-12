/* 
 * Program prog4.c
 * find the sum of the first NUMBERTOSUM squares
 * with NUMBERTOSUM defined as a constant
 */
#include <stdio.h>
// #define NUMBERTOSUM 27  // haha the book says the int limit is 32767

int main(void) {
	int item, sum = 0;
	int numbertosum;

	printf("type in the number of squares to be summed> ");
	scanf("%d", &numbertosum);

	for (item = 1; item <= numbertosum; item++)
		sum += item * item;
	printf("%d is the sum of the first %d squares\n", sum, numbertosum);
}
