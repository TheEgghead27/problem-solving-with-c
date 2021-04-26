/*
 * Write a function printalldivisors to recieve one parameter, an integer number. 
 * The function prints all the divisors of number.
 * For example, if number holds 10, the function prints a line of output that looks like this:
 * Divisors of 15		1	3	5	15
 */
#include <stdio.h>
int printsumofproperdivisors(int number);


int main(void) {
	int i, temp;
	int poifect = 0, plentiful = 0, lacking = 0;
	
	for (i = 100; i <= 200; i++) {
		switch (printsumofproperdivisors(i)) {
			case (1):
				plentiful += 1;
				break;
			case(-1):
				lacking += 1;
				break;
			case(0):
				poifect += 1;
				break;
		}
	}
	printf("Perfect: %d\nAbundant: %d\nDeficient: %d", poifect, plentiful, lacking);
}


int printsumofproperdivisors(int number) {
	int i, sum = 0;

	for (i = 1; i <= (number / 2); i++) {
		if ((number % i) == 0)
			sum += i;
	}

	if (sum == number)
		return 0;
	else if (sum < number)
		return 1;
	else
		return -1;
}
