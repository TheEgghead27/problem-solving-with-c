#include <stdio.h>

int main(void) {
	int number;
	
	while (1) {
		printf("type in a number from 2 to 9> ");
		scanf("%d", &number);
		switch(number) {
			case 2:
				printf("\n%d is a prime number", number);
			case 4:
			case 6:
			case 8:
				printf("\n%d is an even number", number);
				break;
			case 3:
			case 5:
			case 7:
				printf("\n%d is a prime number", number);
			case 9:
				printf("\n%d is an odd number", number);
		}
	}
}
