/*
 * Program prog3a.c:
 * payroll program which reads in an ID number, hours worked,
 * and rate of pay, and computes the weekly pay,
 * using interactive data entry
 */

#include <stdio.h>
int main(void) {
	int id, numemps=0;
	double hours, rate, pay;
	double tax, netpay;

	printf("This program computes an employee's pay.\n");
	printf("Enter the Id number, hours worked, and rate of pay.\n");
	printf("First, enter the employee's ID number.\n");
	printf("To stop, enter -1111 as the employee's ID number> ");
	scanf("%d", &id);
	while (id != -1111) {

		printf("Enter the hours worked> ");
		scanf("%lf", &hours);
		printf("Enter the rate of pay> ");
		scanf("%lf", &rate);
		pay = hours * rate;
		if (pay < 300)
			tax = 0.15 * pay;
		else
			tax = 0.28 * pay;
		netpay = pay - tax;

		printf("Employee %d worked %4.1f hours ", id, hours);
		printf("at a rate of $%5.2f, earning $%7.2f\n", rate, pay);
		printf("tax withheld was $%7.2f, leaving net pay of $%7.2f\n\n", tax, netpay);
		numemps++;
		printf("Enter the employee's ID number> ");
		scanf("%d", &id);
	};
	printf("We have processed %d employees\n", numemps);
};