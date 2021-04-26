/*
 * Using rand, write a program to
 * generate a list of ten random numbers.
 */
#include <stdio.h>
#include <stdlib.h>


int main(void) {
	int i, n;
	
	for (i = 1; i <= 10; i++) {
		n = rand();
		printf("%d\n", n);
	}
}
