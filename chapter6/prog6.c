/*
 * Program prog6.c
 * classify a month-day combination
 * in terms of seasons and week
 */
#include <stdio.h>
void classify(int, int);
void translate(int);
void whichseason(int);
void whichweek(int);

int main(void) {
	int month, day;
	char answer;

	do {
		printf("\nType in the number of a month");
		printf(" from 1 (January) to 12 (December)> ");
		scanf("%d", &month);
		printf("\nType in a date within the month, from 1 to 31> ");
		scanf("%d", &day);
		
		/*
		 * call a function to classify the month-day
		 * pair and print the results
		 */
		classify(month, day);
		printf("\n\nType y to continue; n to stop> ");
		// space so it doesn't read newline as char
		scanf(" %c", &answer);
	} while (answer != "n"); 
}


/*
 * Function classify:
 * Input: 
 * 	month--a number specifying a month in the year
 *	day--a number specifying a day in the month
 * Process:
 *	calls a function to determine the name of the season month is in
 *	calls a function to determine which season month is in
 *	(winter, spring, summer, fall)
 *	calls a function to determine which week of the month (1-5) day is in
 *	illegal  values for month or day will be caught
 * Output:
 *	prints the results of the classification
 * 	prints an error message if either month or day has an illegal value
 */
void classify(int month, int day) {
	if (month < 1 || month > 12)
		printf("\n%d is not a valid value for the month", month);
	else {
		translate(month);
		whichseason(month);
	}

	if (day < 1) || (day > 31)
		printf("\n%d is an illegal value for the day", day);
	else
		whichweek(day);
	return;
}


/*
 * Function translate:
 * Input:
 *	month--a number specifying a month in the year
 * Process:
 *	translates the number of the month into a name for the month
 *	(e.g., 3 into March)
 * Output:
 *	prints the name associated with month
 */
void translate(int month) {
	switch(month) {
		case(1):
			printf("January");
			break;
	}
}
