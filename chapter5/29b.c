/*
 * Write a program to do the following: Read in a number n, the usea  function to compute n!.
 * (Suggestion: Use a for loop to computer the product with an appropriate initialization and multiplication step.)
 * */
#include <stdio.h>
int factorial(int number);


int main(void) {
	int n;
	int output = 1;
	int number;

	printf("Enter a number you want to find the factorial of and the factorials of the numbers before: ");
	scanf("%d", &n);

	for (number = 1; number <= n; number++) {
		output *= number; 	
		printf("%d\t%d.\n", number, output);
	}
}

