/*
 * Because of the relationships between data types char and int, using %c
 * to print a char value prints a character, while %d prints the corresponding ASCII value.
 * For example, printf("%c %c", 'a', 97), prints "a, a", while printf("%d %d", 'a', 97) prints "97 97"
 * Using a for loop, print all the numbers from 0 to 255, both in integer and character format.
 * (Warning: Some of these may produced odd results, since they are interpreted as printer control character.)
 */

#include <stdio.h>
#include <math.h>

int main(void) {
	int i, target;
	target = pow(2, 16);  // only 256 chars so this starts looping
	for (i = 0; i <= target; i++) {
		printf("%c %d\n", i, i);
	}
}