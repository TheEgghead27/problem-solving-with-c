/*
 * Construct a truth table for the xor operator
 *
 *	0	1
 * 0	0	1
 * 1	1	0
 *
 * Show how to simulate xor using the other three boolean operators.
 */
#include <stdio.h>
int xor(int x, int y);

int main(void) {
	printf("%d", xor(1, 0));
	printf("%d", xor(0, 1));
	printf("%d", xor(0, 0));
	printf("%d", xor(1, 1));
}


int xor(int x, int y) {
	return ((x || y) && (!(x && y)));
}
