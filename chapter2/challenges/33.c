/*
 * Write a program that prints two conversion tables to change temperatures in Fahrenheit (F)
 * to temperatures in Celcius (C) and vice verca. One formual is F = (9/5)C + 32 (What is the other formula?)
 * One table should list the Fahrenheit values from -50 to 250 in steps of 10, together with the Celcius equivalent.
 * The other should list Celcius values from -50 to 150 in steps of 5, together with the Celcius equivalent.
 * The other should list the Fahrenheit equivalents.
 */
#include <stdio.h>

int main(void) {
	double degrees, result;
	
	printf("Fahrenheit\tCelcius\n");
	for (degrees = -50; degrees <= 250; degrees += 10) {
		result = (degrees - 32);
		result = result / (9.0 / 5.0); // man c data types
		printf("%f\t%f\n", degrees, result);
	};
	
	printf("\n\n\nCelcius\tFahrenheit\n");
	for (degrees = -50; degrees <= 150; degrees += 5) {
		printf("%f\t%f\n", degrees, ((degrees * 9.0/5.0) + 32));
	};
}