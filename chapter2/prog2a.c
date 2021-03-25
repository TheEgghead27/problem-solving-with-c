/*
 * Program prog2a.c:
 * creates a table to evaluate a formula based on values of
 * gpa in the range from gpa = 0.00 to 4.00 in units of 0.50
 */

#include <stdio.h>

int main(void) {
	printf("Table of Function Values\n\n");
	printf("Grade Point Average\tValue of Formula\tStatus\n\n");
	double gpa, result;
	for (gpa = 0.00; gpa <= 4.00; gpa += 0.50) {
		result = (gpa * gpa * gpa + 7 * gpa - 1) / (gpa * gpa - (gpa + 5) / 3);
		printf("\t%f\t%f\t", gpa, result);	
		if (result >= 0)
			printf("\tAdmit");  // ok nvm c isnt indent based you dummy the scope is just up to the next semicolon
		printf("\n");
	};
	printf("\nThe table is finished\n");
};
