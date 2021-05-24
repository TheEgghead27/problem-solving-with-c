
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	printf("%s \n", argv[1]);
	char *testvar = argv[1];
	printf("%f\n", (double) atoi(testvar) / 2);
	// printf("\n%f", (float) atoi(*argv[1]) / 2);

}
