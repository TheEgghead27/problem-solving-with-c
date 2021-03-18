/* A computer programmer wants to give her (a woman in computer science in 1996? unthinkable) boyfriend several pieces of candy every day during June, starting with six on the first day and increasing by five more pieces each day. Write a program that prints the days of the month (the numbers from 1 to 30), to gether with the number of pieces of candy to be given on that day. */
/* Modify the program from part (a) so that it begins with start pieces of candy on the first day and goes up by increas number of pieces per day; you will give start and increase values at the beginning of the program. */
#include <stdio.h>

int main(void) {
	int start, increase;
	start = 6; increase = 5;
	int day, candies;
	for (day = 1, candies = start; day <= 30; day++, candies += increase) {
		printf("%d\t%d\n", day, candies);
	}
}