/*
 * Write a function printalldivisors to recieve one parameter, an integer number. 
 * The function prints all the divisors of number.
 * For example, if number holds 10, the function prints a line of output that looks like this:
 * Divisors of 15		1	3	5	15
 */
#include <stdio.h>
void printsumofproperdivisors(int number);


int main(void) {
	int i = 128;
	
	printsumofproperdivisors(i);
}


void printsumofproperdivisors(int number) {
	int i, sum = 0;

	for (i = 1; i <= (number / 2); i++) {
		if ((number % i) == 0)
			sum += i;
	}

	printf("%d is a(n) ", number);
	if (sum == number)
		printf("Perfect");
	else if (sum < number)
		printf("Abundant");
	else
		printf("Deficient");
	printf(" number.\n");
	return;
}
