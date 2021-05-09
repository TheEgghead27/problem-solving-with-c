#include <stdio.h>

void un(int number);
void dos(int number);

int main(void) {
	printf("multiple cases");
	un(1);
	un(2);
	un(69);

	dos(2);
}

void un(int number){  // multiple case of the same thing error it
	switch(number) {
		case 1:
		case 69:
			printf("ok");/*
		case 69:
			printf("hehe");
			break;
		case 69:
			printf("whenthe");*/
		default:
			printf("tu madre");/*
		case 69:
			printf("es gordo");*/
	
	}
}

void dos(int number) {
	switch(number) {  // if no default nothing happens
		case 1:
			printf("one");
	}
}
