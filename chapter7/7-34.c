/*
You have been hired as a programmer by a major bank.
Your first project is a small transaction system.
Each account consists of a number and a balance.
The user of the pogram (the teller) can create a new account, as well as perform deposits, withdrawals, and balance inquiries.

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
	
	char menu(void):

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
