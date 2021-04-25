/* Write a program that prints a table of the angles from 0 to 180 degrees, together with the radian measurement, the sine, and the cosine of each angle.
 * Recall that 180 degrees is equal to pi radians. Give pi the value 3.14159 and use the library functions sin and cos.
 */
#include <stdio.h>
#include <math.h>


int main(void) {
	double i, pi, radian;
	pi = 3.14159;
	printf("Degrees\t\tRadian\t\tSine\tCosine\tTangent\n\n");
	for (i = 0; i <= 180; i++) {
		radian = (i * 3.14159 / 180);
		printf("%.0f\t\t%f\t\t%f\t\t%f\t\t%f\n", i, radian, sin(i), cos(i), tan(i));
	}
}