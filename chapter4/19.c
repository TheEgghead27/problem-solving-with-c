/* 
 * Write a program which reads in a number n from the data,
 * then computes the sum of the first n integers - that is 1 + 2 + ... + n.
 * As a check, this sum should be n(n+1)/2.
 * After processing the first value of n,
 * the program should go back to read in 
 * a new value and repeat the calculation.
 * Repeat the entire process until the set of data is exhausted.
 */
#include <stdio.h>

int main(void) {
	int i;
	int target;
	double total;
	while (1) {
		printf("\nEnter the target number of integers to add up > ");
		scanf("%d", &target);

		for(i = 1, total = 0; i <= target; i++)
			total += i;
		// check sum
		if (total != (target*(target+1)/2)){
			printf("\n\nSum check failed!");
			continue; 
		};
		printf("\nThe sum of the first %d integers is %.0f", target, total);
	}
}

