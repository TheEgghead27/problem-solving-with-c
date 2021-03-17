/* comment is ok */
#include <stdio.h>
int main(void) {
	int x, y;

	x = 1 + 4;
	y = x + 1;
	x = (3 * y) + (5 * x);
	printf("%d, %d", x, y);
}