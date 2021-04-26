/*
 * Write a function printalldivisors to recieve one parameter, an integer number. 
 * The function prints all the divisors of number.
 * For example, if number holds 10, the function prints a line of output that looks like this:
 * Divisors of 15		1	3	5	15
 */
#include <stdio.h>
#include <math.h>
int isPrime(int number);


int main(void) {
	int i = 29;
	
	if (isPrime(i))
		printf("%d is prime.\n", i);
	else
		printf("%d is not prime.\n", i);
}


int isPrime(int number) {
	int i, sum = 0;

	for (i = 2; i <= sqrt(number); i++) {
		if ((number % i) == 0)
			return 0;  // we would have to list the other factor that leads to number if this was a factor counter but we're just running prime checks
	}
	return 1;
}
