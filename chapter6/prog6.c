/*
 * Program prog6.c
 * classify a month-day combination
 * in terms of seasons and week
 */
#include <stdio.h>
#include <ctype.h>
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
		answer = toupper(answer);
		// or you can use tolower()
	} while (answer != 'N');  // why am i getting warnings here
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

	if (day < 1 || day > 31)
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
		case(2):
			printf("February");
			break;
		case(3):
			printf("March");
			break;
		case(4):
			printf("April");
			break;
		case(5):
			printf("May");
			break;
		case(6):
			printf("June");
			break;
		case(7):
			printf("July");
			break;
		case(8):
			printf("August");
			break;
		case(9):
			printf("September");
			break;
		case(10):
			printf("October");
			break;
		case(11):
			printf("November");
			break;
		case(12):
			printf("December");
			break;
	}
	return;
}


/*
 * Function whichseason:
 * Input:
 * 	month--a number specifying a month in the year
 * Process:
 * 	determines which season month is in
 * 	 (winter, spring, summer, fall)
 * 	assume winter is December, January, February
 * 	 (make similar assumptions for the other seasons)
 * 	illegal data values for month will be caught
 * Output:
 * 	prints the name of the season
 */
void whichseason(int month) {
	switch(month) {
		case(12):
		case(1):
		case(2):
			printf("\twinter is the season");
			break;
		case(3):
		case(4):
		case(5):
			printf("\tspring is the season");
			break;
		case(6):
		case(7):
		case(8):
			printf("\tsummer is the season");
			break;
		case(9):
		case(10):
		case(11):
			printf("\tfall is the season");
	}
	return;
}


/*
 * Function whichweek:
 * Input:
 * 	day--a number specifying a day in the month
 * Process:
 * 	determines which week of the month (1-5) day is in
 * 	assume each week (except the fifth) has 7 days
 * Output:
 * 	prints the week within the month
 */
void whichweek(int day) {
	if (day <= 7) 
		printf("\t1 is the week number for day %d", day);
	else if (day > 7 && day <= 14)
		printf("\t2 is the week number for day %d", day);
	else if (day > 14 && day <= 21)
		printf("\t3 is the week number for day %d", day);
	else if (day > 21 && day <= 28)
		printf("\t4 is the week number for day %d", day);
	else if (day > 28)
		printf("\t5 is the week number for day %d", day);
	return;
}

