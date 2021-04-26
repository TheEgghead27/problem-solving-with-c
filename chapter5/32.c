/*
 * Using rand, write a program to
 * generate a list of ten random numbers.
 */
#include <stdio.h>
#include <stdlib.h>
int randRange(int lower, int upper);


int main(void) {
	int i, n;
	
	srand(69);
	for (i = 1; i <= 10; i++) {
		n = randRange(1, 6);
		printf("%d\n", n);
	}
}

// stolen from geeksforgeeks
int randRange(int lower, int upper) {
	return ((rand() % (upper - lower + 1)) + lower);
}
