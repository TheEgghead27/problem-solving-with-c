/*
 * Program prog7b.c:
 * finds the average of the grades for one class,
 * reading in data using a parameter value
 */
#include <stdio.h>
#include <stdlib.h>
#define SIZE 50


int main(void) {
	int count, n, sum = 0;
	int mark[SIZE];
	double avgmark;

	printf("Enter the number of marks> ");
	scanf("%d", &n);
	if (n > 0)
		printf("There are %d marks\n", n);
	else {
		fprintf(stderr, "Invalid number of marks\n");
		exit(1);
	}

	/*
	 * read n marks into the mark array
	 * and print each mark as it is read in
	 */
	for (count = 0; count < n; count++) {
		printf("Enter a mark> ");
		scanf("%d", &mark[count]);
		printf("%d\n", mark[count]);
	}

	/*
	 * find average of n marks by adding
	 * them to sum and dividing by n
	 */
	// use type casting to make a temp converted n to double for good division
	sum = 0;
	for (count = 0; count < n; count++)
		sum += mark[count];
	avgmark = sum / (double) n;
	// you could try making the result double but that makes integer quotient
	printf("The average is %6.2f\n", avgmark);
}
