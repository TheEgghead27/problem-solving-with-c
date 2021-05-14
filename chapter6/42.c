#include <stdio.h>
#include <ctype.h>

int main(void) {
	char c, yes;
	int type;

	do {
		printf("\nEnter the lowercase letter to classify> ");
		scanf(" %c", &c);
		switch(c) {
			case 'b':
			case 'd':
				type = 1;
				break;
			case 'c':
			case 'j':
			case 'q':
				type = 2;
				break;
			case 'a':
				type = 3;
				break;
			default:
				if (c == 'h' || (c >= 'r' && c <= 'z'))  // when the developer is lazy!
					type = 4;
				else
					type = 5;
		}
		printf("\nLetter %c is type %d.", c, type);
		printf("\nContinue? (Y/n)\n");
		scanf(" %c", &yes);
		yes = tolower(yes);
	}
	while (yes != 'n');
}
