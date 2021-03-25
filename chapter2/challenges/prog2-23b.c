/*
 * Program prog2a.c:
 * creates a table to evaluate a formula based on values of
 * gpa in the range from gpa = 0.00 to 4.00 in units of 0.50
 */

#include <stdio.h>
#include <limits.h>

int main(void) {
	printf("Table of Function Values\n\n");
	printf("Grade Point Average\tRange Covered\tValue of Formula\tStatus\n\n");
	double gpa, result, worstGPA, worstResult;
	worstGPA = INT_MAX;
	for (gpa = 0.00; gpa <= 4.00; gpa += 0.50) {
		result = (gpa * gpa * gpa + 7 * gpa - 1) / (gpa * gpa - (gpa + 5) / 3);
		if (result < worstGPA)
			worstGPA = gpa, worstResult = result;
		printf("\t%.2f\t\t%.2f - %.2f\t%f\t", gpa, gpa, (gpa + 0.24), result);
		if (result > -5)
			printf("\tAccepted");  // ok nvm c isnt indent based you dummy the scope is just up to the next semicolon
		else if (result < -5)
			printf("\tRejected");
		else
			printf("\t See professor");
		printf("\n");
	};
	printf("\nThe table is finished, with the worst result being %.2f from a GPA of %.2f\n", worstResult, worstGPA);
};
