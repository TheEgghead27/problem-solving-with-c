#include <stdio.h>
int power(int x, int y);


int main(void) {
	printf("8 bit integer holds up to %d\n", power(2, 8));
}


int power(int x, int y) {
	int i, out = 1;

	for (i = 1; i <= y; i++) {
		out *= x;
	}
	return out;
}
