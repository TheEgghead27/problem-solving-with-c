#include <stdio.h>
#define MAXSIZE 50
#define NUMEXAMS 4
void findstudentavg(int grade[][NUMEXAMS], int);  // array has to be of arrays of NUMEXAMS `int`s
// void findstudentavg(int grade[MAXSIZE][NUMEXAMS], int);	/* MAXSIZE is ignored */
// void findstudentavg(int [][NUMEXAMS], int);	/* omits the array name */
void findexamavg(int grade[][NUMEXAMS], int class_size);


int main(void) {
	int grade[MAXSIZE][NUMEXAMS];
	grade[0][0] = 65;
	grade[0][1] = 66;
	grade[0][2] = 100;
	grade[0][3] = 32;
	grade[1][0] = 85;
	grade[1][1] = 98;
	grade[1][2] = 100;
	grade[1][3] = 64;
	findstudentavg(grade, 2);
	findexamavg(grade, 2);
}


/*
 * Function findstudentavg:
 * Input:
 * 	two-dimensional array grade holds
 *	NUMEXAMS grades for each of class_size students
 * Process:
 *	finds each student's average
 * Output:
 *	prints each student's average
 */
void findstudentavg(int grade[][NUMEXAMS], int class_size){
	int stnum, exam, sum;
	double avg;
	
	for (stnum = 0; stnum < class_size; stnum++) {
		sum = 0;
		for (exam = 0; exam < NUMEXAMS; exam++)
			sum += grade[stnum][exam];
		avg = (double) sum / NUMEXAMS;
		printf("student number %d had an average of %6.2f\n", stnum, avg);
	}
}


/*
 * Function findexamavg:
 * Input:
 * 	two-dimensional array grade holds
 *	NUMEXAMS grades for each of class_size students
 * Process:
 *	finds each exam's average
 * Output:
 *	prints each exam's average
 */
void findexamavg(int grade[][NUMEXAMS], int class_size){
	int stnum, exam, sum;
	double avg;
	
	for (exam = 0; exam < NUMEXAMS; exam++) {
		sum = 0;
		for (stnum = 0; stnum < class_size; stnum++)
			sum += grade[stnum][exam];
		avg = (double) sum / class_size;
		printf("exam number %d had an average of %6.2f\n", exam, avg);
	}
}
