/*something about calculating and printing square numbers for chapter 1 first c program*/
/* Program prog1a.c: print the numbers from 4 to 9 and their squares */

#include <stdio.h>
main() 
{
	int number, sqnumber;
	for (number = 4; number <= 9; number = number + 1) {
		sqnumber =  number * number;
		printf("%d %d\n", number, sqnumber);
	};
	printf("******");
	for (number = 9; number >= 4; number = number - 1) {
		sqnumber = number * number;
		printf("%d %d\n", number, sqnumber);
	};
};
