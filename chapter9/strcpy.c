#include <stdio.h>
#include <string.h>


int main(void) {
	char first[21];
	char last[21];

	strcpy(first, "wayne Smith");
	strcpy(last, first);
	printf("First: %s\n", first);
	printf("Last: %s\n", last);

	char name[20] = "Alice Larrenson"; // easy way to define string
	char newname[10] = {'L', 'e', 'e', ' ', 'D', 'a', 'v', 'i', 's', '\0'}; // dont forget the \0 terminator

	printf("Name: %s\n", name);

	// copy to name starting at 7th position, from newname starting at 5th, Davis overwrites Larrenson, with the \0 essentially making any leftovers cut out
	strcpy(&name[6], &newname[4]); // alternative: strcpy(name+6, newname+4);

	printf("New name: %s\n", name);
}
