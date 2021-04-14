/* 
 * Write a program that reads in a number n from the fata,
 * then computes the sum of the first n cubes,
 * 1^3, 2^3 ... n^3.
 * Continue the processing until the set of data is exhausted.
 * As a check, the sume should be (n * (n+1)/2)^2.
 */
#include <stdio.h>

int main(void) {
	int i;
	int target;
	double total;
	while (1) {
		printf("\nEnter the target number of integers to add up the cubes of> ");
		scanf("%d", &target);

		for(i = 1, total = 0; i <= target; i++)
			total += i * i * i;
		// check sum
		if (total != ((target*(target+1)/2)) * ((target*(target+1)/2))){
			printf("\n\nSum check failed!");
			continue; 
		};
		printf("\nThe sum of the cubes of the first %d integers is %.0f", target, total);
	}
}

