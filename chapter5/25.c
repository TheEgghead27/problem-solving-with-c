/*
 * Write a function printalldivisors to recieve one parameter, an integer number. 
 * The function prints all the divisors of number.
 * For example, if number holds 10, the function prints a line of output that looks like this:
 * Divisors of 15		1	3	5	15
 */
#include <stdio.h>
void printalldivisors(int number);


int main(void) {
	printalldivisors(69);
}


void printalldivisors(int number) {
	int i;

	printf("Divisors of %d\t\t", number);
	for (i = 1; i <= (number / 2); i++) {
		if ((number % i) == 0)
			printf("%d\t", i);
	}
	printf("%d", number);
	return;
}
