/*
 * Using the ideas in exercise 32,
 * write a program to simulate tossing
 * a die 100 times, counting how many 
 * of the tosses are even numbers. 
 * (A die is a cube with the number 1 to 6 written on it.)
 * THen repeat the program using 1000 tosses.
 */
#include <stdio.h>
#include <stdlib.h>
int randRange(int lower, int upper);


int main(void) {
	int i, number;
	int die1, die2;
	int two=0, three=0, four=0, five=0, six=0, seven=0, eight=0,
	    nine=0, ten=0, eleven=0, twelve=0;
	
	printf("Enter the number of pairs of die tosses to run> ");
	scanf("%d", &number);
	for (i = 1; i <= number; i++) {
		switch (randRange(1, 6) + randRange(1, 6)) {
			case (2):
				two += 1;
				break;
			case (3):
				three += 1;
				break;
			case (4):
				four += 1;
				break;
			case (5):
				five += 1;
			case (6):
				six += 1;
				break;
			case (7):
				seven += 1;
				break;
			case (8):
				eight += 1;
				break;
			case (9):
				nine += 1;
				break;
			case (10):
				ten += 1;
				break;
			case (11):
				eleven += 1;
				break;
			case (12):
				twelve += 1;
				break;
			default:
				printf("wot");
				exit(0);
		}
	}
	printf("2\t%d\n", two);
	printf("3\t%d\n", three);
	printf("4\t%d\n", four);
	printf("5\t%d\n", five);
	printf("6\t%d\n", six);
	printf("7\t%d\n", seven);
	printf("8\t%d\n", eight);
	printf("9\t%d\n", nine);
	printf("10\t%d\n", ten);
	printf("11\t%d\n", eleven);
	printf("12\t%d\n", twelve);
}

// stolen from geeksforgeeks
int randRange(int lower, int upper) {
	return ((rand() % (upper - lower + 1)) + lower);
}
