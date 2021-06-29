
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	if (argc < 2) {
		fprintf(stderr, "Not enough arguments provided!");
		exit(1);
	}
	printf("%s \n", argv[1]);
	char *testvar = argv[1];
	printf("%f\n", (double) atoi(testvar) / 2);
	// printf("\n%f", (float) atoi(*argv[1]) / 2);

}
