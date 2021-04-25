/* Write a program that prints all of the numbers that are evenly divisible by 10. Of course, you won't be able to find all of them, but see how many you can print before there is a problem. */
#include <stdio.h>

int main(void) {
	int number;
	for (number = 10; 1; number += 10) {  // goes for very long but eventually becomes a 0
		printf("%d\n", number);
	};
}