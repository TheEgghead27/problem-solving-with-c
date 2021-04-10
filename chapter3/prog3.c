/*
 * Program prog3a.c:
 * payroll program which reads in an ID number, hours worked,
 * and rate of pay, and computes the weekly pay,
 * using interactive data entry
 */

#include <stdio.h>
int main(void) {
	// bloat bloat bloat
	int id, numemps=0, unionBool;
	double hours, rate, pay;
	double totalHours=0.0, totalPay=0.0;  // mama im sorry they did not teach me arrays yet
	int richest = -1111, bestPaid = -1111, hardestWorking = -1111;
	double bestPay = 0.0, bestRate = 0.0, bestSlave = 0.0;
	double tax, netpay;

	printf("This program computes an employee's pay.\n");
	printf("Enter the Id number, hours worked, and rate of pay.\n");
	printf("First, enter the employee's ID number.\n");
	printf("To stop, enter -1111 as the employee's ID number> ");
	scanf("%d", &id);
	while (id != -1111) {

		printf("Enter the hours worked> ");
		scanf("%lf", &hours);
		if (hours > bestSlave) {
			bestSlave = hours;
			hardestWorking = id;
		};
		printf("Enter the rate of pay> ");
		scanf("%lf", &rate);
		if (rate > bestRate) {
			bestRate = rate;
			bestPaid = id;
		};
		printf("Enter the employee's union status (1 for union, 0 for nonunion)> ");
		scanf("%d", &unionBool);
		if (hours < 40 || (unionBool != 1))
			pay = hours * rate;
		else
			pay = (40 * rate) + ((hours - 40) * (rate * 1.5));
		tax = pay * 0.09;
		if (unionBool == 1)
			tax *= 1.1;
		if (pay >= 100) {
			tax += 20;
		}
		else {  // fucking fuck fuck fuck its yandev time
			if ((pay - tax) > 10)
				tax = pay;  // xixixi government takes everything
			else
				tax += 10;
		}

		/* tax = (pay < 300) ? (0.15 * pay) : (0.28 * pay); */
		netpay = pay - tax;

		if (pay > bestPay) {
			bestPay = pay;
			richest = id;
		};

		printf("Employee %d worked %4.1f hours ", id, hours);
		printf("at a rate of $%-5.2f, earning $%-7.2f.\n", rate, pay);
		if (unionBool == 1)
			printf("$%.2f in union dues paid and ", rate, pay);	
		printf("tax withheld was $%-7.2f, leaving net pay of $%-7.2f\n\n", tax, netpay);
		numemps++; totalHours += hours; totalPay += pay;
		printf("Enter the employee's ID number> ");
		scanf("%d", &id);
	};
	printf("We have processed %d employees, with a total number of hours worked being %.2f and %.2f of pay.\n", numemps, totalHours, totalHours);
	printf("\t\t\t\tAmount\t\tEmployee\n");
	printf("Highest Pay Rate\t\t$%.2f\t\t%d\nHighest Pay Amount\t\t$%.2f\t\t%d\nMost Hours Worked\t\t$%.2f\t\t%d", bestRate, bestPaid, bestPay, richest, bestSlave, hardestWorking);
};