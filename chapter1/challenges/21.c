/* Write a program that prints all of the numbers less than 2000 that are evenly divisible by 10. The first few numbers are 10 20 30... */
#include <stdio.h>

int main(void) {
	int number;
	for (number = 10; number <= 2000; number += 10) {
		printf("%d\n", number);
	};
}