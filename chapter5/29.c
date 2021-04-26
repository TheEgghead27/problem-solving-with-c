/*
 * Write a program to do the following: Read in a number n, the usea  function to compute n!.
 * (Suggestion: Use a for loop to computer the product with an appropriate initialization and multiplication step.)
 * */
#include <stdio.h>
int factorial(int number);


int main(void) {
	int n;

	printf("Enter a number you want to find the factorial of: ");
	scanf("%d", &n);
	printf("The factorial of %d is %d.\n", n, factorial(n));
}


int factorial(int number) {
	int i, output;

	for (i = 2, output = 1; i <= number; i++)
		output *= i;
	return output;
}
