#include <stdio.h>
#include <ctype.h>

int main(void) {
	char c, yes;
	int type;

	do {
		printf("\nEnter the lowercase letter to classify> ");
		scanf(" %c", &c);
		if (c == 'b' || c == 'd')
			type = 1;
		else if (c == 'c' || c == 'j' || c == 'q')
			type = 2;
		else if (c == 'a')
			type = 3;
		else if (c == 'h' || (c >= 'r' && c <= 'z'))
			type = 4;
		else
			type = 5;
		printf("\nLetter %c is type %d.", c, type);
		printf("\nContinue? (Y/n)\n");
		scanf(" %c", &yes);
		yes = tolower(yes);
	}
	while (yes != 'n');
}
