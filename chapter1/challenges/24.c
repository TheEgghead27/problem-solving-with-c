/*
Write a program that prints the number from 1 to 100 with 5 values per line, two blank spaces between values. The last few lines will look like this
91	92	93	94	95
96	97	98	99	100
*/
#include <stdio.h>

int main(void) {
	int i;
	for (i = 1; i <= 100; i++) {
		printf("%d\t", i);
		if ((i % 5) == 0) {
			printf("%s", "\n");
		};
	};
};