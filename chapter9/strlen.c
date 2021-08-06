#include <stdio.h>
#include <string.h>


int main(void) {
	// length = strlen(str); returns length of string contents, up to not including \0
	// size = sizeof item; OR size = sizeof(type); returns number of bytes allocated to this, char is 1 bytes so a char[30] has a sizeof 30
	// item is a variable, but types need the parenthesis (presumably type casting)
	char dest[25];
	char source[30];

	scanf("%s", source);  // dont need the & because strings are arrays which are already pointer
	if (strlen(source) < sizeof dest)  // make sure the length can fit in the size (char is 1 byte so no division needed
		strcpy(dest, source);  // copies the string into the dest
	else
		printf("Source too large, won't fit in destination");
}
