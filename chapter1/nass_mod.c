/*something about calculating and printing square numbers for chapter 1 first c program*/
/* Program prog1a.c: print the numbers from 4 to 9 and their squares */

#include <stdio.h>
int main(void)
{
	int number, sqnumber;
	// exercise 14
	for (number = 4; number <= 9; number = number++) {
		printf("%d %d\n", number, sqnumber); // huh nice it grabs garbage data for the uninitialized sqnumber
		sqnumber = number * number;
	};
	// exercise 15
	printf("******\n");
	for (number = 4; number <= 9; number = number++) {
		sqnumber = number * number;
		printf("%d ", sqnumber);
	};
	// exercise 16
	printf("******\n");
	for (number = 4; number <= 9; number = number++) {
		sqnumber = number * number;
		printf("%d %d %d\n", number, sqnumber, (sqnumber * number));
	};
	// exercise 17
	printf("******\n");
	for (number = 4; number <= 9; number = number++) {
		sqnumber = number * number;
		printf("%d %d %d %d %d\n", number, sqnumber, (sqnumber * number), (number * 2), (number *3));
	};
	// exercise 18
	printf("******\n");
	for (number = 4; number <= 20; number += 2) {
		sqnumber = number * number;
		printf("%d %d\n", number, sqnumber);
	};
	// exercise 19
	printf("******\n");
	for (number = 4; number <= 20; number += 2) {
		sqnumber = number * number;
		printf("%d %d\n", number, sqnumber);
	};
	int cbnumber;
	for (number = 5; number < 20; number += 2) {
		cbnumber = number * number * number;
		printf("%d %d\n", number, cbnumber);
	};
	// exercise 20
	printf("******\n");
	for (number = 4; number <= 9; number = number++) {
		sqnumber = number * number;
		if (number > 5) {
			printf("%d %d\n", number, sqnumber);
		} else
		{
			printf("%d\n", number);
		};
	};
};
