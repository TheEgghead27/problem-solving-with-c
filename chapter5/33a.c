/*
 * Using the ideas in exercise 32,
 * write a program to simulate tossing
 * a die 100 times, counting how many 
 * of the tosses are even numbers. 
 * (A die is a cube with the number 1 to 6 written on it.)
 * THen repeat the program using 1000 tosses.
 */
#include <stdio.h>
#include <stdlib.h>
int randRange(int lower, int upper);


int main(void) {
	int i, number, evens = 0;
	
	printf("Enter the number of die tosses to run> ");
	scanf("%d", &number);
	for (i = 1; i <= number; i++) {
		if ((randRange(1, 6) % 2) == 0)
			evens += 1;
	}
	printf("Out of %d die tosses, %d were even.", number, evens);
}

// stolen from geeksforgeeks
int randRange(int lower, int upper) {
	return ((rand() % (upper - lower + 1)) + lower);
}
