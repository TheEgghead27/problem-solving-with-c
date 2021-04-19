/* Program prog5.c
 * compute the sum of numbertosum squares
 * with numbertosum read from a line of data
 * using a function to sum the squares
 */
#include <stdio.h>
int sumofsquares(int);

int main(void) {
	int numbertosum, answer;

	printf("type in the number of squares to be summed> ");
	scanf("%d", &numbertosum);
	answer = sumofsquares(numbertosum);
	printf("%d is the sum of the first %d squares\n", answer, numbertosum);
}


/*
 * find the sum of the first n squares:
 * 1*1 + 2*2 + ... + n*n
 */
int sumofsquares (int n) {
	int item, sum=0;

	for (item = 1; item <= n; item++) 
		sum += item * item;
	return sum;
}
