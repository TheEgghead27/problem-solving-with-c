/*
You have been hired as a programmer by a major bank.
Your first project is a small transaction system.
Each account consists of a number and a balance.
The user of the program (the teller) can create a new account, as well as perform deposits, withdrawals, and balance inquiries.

Initially, the account information of existing customers is to be read into a pair of parallel arrays one for account numbers, the other for balances.
Use the following function to read in the data values:

	int read_accts(int acctnum_array, double balance_array, int max_elems);

This function fills up the account number and balance arrays (up to max_elems)
and returns the actual number of accounts read in (later referred to as num_elems).
The program then allows the user to select from the following menu of transactions:

Select one of the following:
	W-Withdrawal
	D-Deposit
	N-New account
	B-Balance
	Q-Quit

Use the following function to produce the menu:
	
	char menu(void);

This function displays the menu and reads in the user's choice.
You should verify that the user has typed in a valid selection (otherwise print out an error message and repeat the prompt).
The user's selection is returned by the function.

Once the user has entered a selection, one of the following functions should be calle to perform the specific transaction.
At the end, before the user quits, the program prints the contents of the account arrays.

	int findacct(int acctnum_array, int num_elems, int account);

This function returns the index of account in account array if the account exists, and -1 it doesn't. It is called by all the remaining functions.

	void withdrawal(int acctnum_array, double balance_array, int num_elems);

This function prompts the user for the account number.
If the account does not exist, it prints an error message.
Otherwise, it asks the user for the amount of the withdrawal.
If the account does not contain sufficient funds, it prints an error message and does not perform the transaction. 

	void deposit(int acctnum_array, double balance_array, int num_elems);

This function prompts the user for the account number.
If the account does not exist, it prints an error message.
Otherwise, it asks the user for the amount of the deposit.

	int new_acct(int acctnum_array, double balance_array, int num_elems);

This function prompts the user for a new account number.
If the account already exists, it prints an error message.
Otherwise, it adds the account to the account array with an initial balance of 0.
It returns the new number of accounts.

	void balance(int acctnum_array, double balance_array, int num_elems);

This function prompts the user for an account number.
If the account does not exist, it prints an error message.
Otherwise, it prints the account balance.

	void print_accts(int acctnum_array, double balance_array, int num_elems);

This function prints all customer information - account number and balance.
*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 255
int read_accts(int acctnum_array[], double balance_array[], int max_elems);
char menu(void);
int findacct(int acctnum_array[], int num_elems, int account);
void withdrawal(int acctnum_array[], double balance_array[], int num_elems);
void deposit(int acctnum_array[], double balance_array[], int num_elems);
int new_acct(int acctnum_array[], double balance_array[], int num_elems);
void balance(int acctnum_array[], double balance_array[], int num_elems);
void print_accts(int acctnum_array[], double balance_array[], int num_elems);


int main(void) {
	int num_elems;
	int acctnum_array[MAX];
	double balance_array[MAX];
	char selection;
	num_elems = read_accts(acctnum_array, balance_array, MAX);

	while (1) {
		selection = menu();
		printf("Selection is %c", selection);
		if (selection == '0') {
			continue;
		}
		switch (selection) {
			case 'W':
				withdrawal(acctnum_array, balance_array, num_elems);
				break;
			case 'D':
				deposit(acctnum_array, balance_array, num_elems);
				break;
			case 'N':
				new_acct(acctnum_array, balance_array, num_elems);
				break;
			case 'B':
				balance(acctnum_array, balance_array, num_elems);
				break;
			/*
			case 'Q':
				break;
			*/
			default:
				fprintf(stderr, "\nInvalid selection!");
		}
		if (selection == 'Q') {
			print_accts(acctnum_array, balance_array, num_elems);

			printf("\nExiting...");
			break;
		}

	}
	exit(0);
}


int read_accts(int acctnum_array[], double balance_array[], int max_elems) {
	/*
	db = fopen("bank.csv", "r");
	if (db != NULL) {

	}
	else {
		fprintf(stderr, "Error opening bank.csv");
		exit(1);
	}
	*/
	int accts;
	char answer;

	for (accts = 0; accts < max_elems; accts++) {
		printf("\nEnter the account ID> ");
		if (scanf("%d", &acctnum_array[accts]) != 1) {
			fprintf(stderr, "\n\nNo account ID entered!\n");
			accts -= 1;
			continue;
		}

		printf("\nEnter the account balance> ");
		if (scanf("%lf", &balance_array[accts]) != 1) {
			fprintf(stderr, "\n\nNo balance entered!\n");
			accts -= 1;
			continue;
		}
		
		printf("\nContinue entering accounts? (Y/n)> ");
		// printf("\n scanf() returned %d", scanf(" %c ", &answer));
        getchar();answer = getchar();
		printf("answer is %c", answer);
        answer = tolower(answer);
		if (answer == 'n')
			break;
	}
	printf("\nExiting entry function...");
	return accts + 1;
}


char menu(void) {
	char selection;

	printf("\nSelect one of the following:\n\tW - Withdrawal\n\tD - Deposit\n\tN - New account\n\tB - Balance\n\tQ - Quit\n> ");
    getchar();selection = getchar();
	if (selection == ' ' || selection == '\n' || selection == '\t' || selection == EOF) {
		fprintf(stderr, "\n\nNo character entered!\n");
		return '0';
	}
	
	selection = toupper(selection);
	switch(selection) {
		case 'W':
		case 'D':
		case 'N':
		case 'B':
		case 'Q':
			return selection;
		default:
			return '0';
	}
}


int findacct(int acctnum_array[], int num_elems, int account) {
	int i;
	for (i = 0; i < num_elems; i++) {
		if (acctnum_array[i] == account)
			return i;
	}

	return -1;
}


void withdrawal(int acctnum_array[], double balance_array[], int num_elems) {
	int temp, temp2;
	printf("\nPlease enter the account number> ");
	scanf("%d", &temp);
	temp = findacct(acctnum_array, num_elems, temp);
	if (temp != -1) {
		printf("\nPlease enter the amount to withdraw> ");
		scanf("%d", &temp2);
		if (balance_array[temp] < temp2) {
			fprintf(stderr, "Insufficient account balance!");
			return;
		}
		balance_array[temp] -= temp2;
	}
	else {
		printf("\nAccount number does not exist!");
	}
	return;
}


void deposit(int acctnum_array[], double balance_array[], int num_elems) {
	int temp, temp2;
	printf("\nPlease enter the account number> ");
	scanf("%d", &temp);
	temp = findacct(acctnum_array, num_elems, temp);
	if (temp != -1) {
		printf("\nPlease enter the amount to deposit> ");
		scanf("%d", &temp2);
		balance_array[temp] += temp2;
	}
	else {
		printf("\nAccount number does not exist!");
	}
	return;
}


int new_acct(int acctnum_array[], double balance_array[], int num_elems) {
	int temp;
	printf("\nPlease enter the new account number> ");
	scanf("%d", &temp);
	if (findacct(acctnum_array, num_elems, temp) != -1) {
		printf("\nAccount number already exists!");
	}
	else {
		acctnum_array[num_elems] = temp;
		balance_array[num_elems] = 0;
		num_elems += 1;
	}

	return num_elems;
}


void balance(int acctnum_array[], double balance_array[], int num_elems) {
	int temp, acctArr;
	printf("\nPlease enter the account number> ");
	scanf("%d", &temp);
	acctArr = findacct(acctnum_array, num_elems, temp);
	if (acctArr != -1) {
		printf("Account %d's balance: %f", acctArr, balance_array[acctArr]);
	}
	else {
		printf("\nAccount number does not exist!");
	}
	return;
}


void print_accts(int acctnum_array[], double balance_array[], int num_elems) {
	int i;

	for (i = 0; i < num_elems; i++) {
		printf("\nAccount ID: %d\t\tAccount Balance: %f", acctnum_array[i], balance_array[i]);
	}
	return;
}