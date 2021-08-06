#include <stdio.h>
#include <string.h>

char * classify (char *monthname);

int main (void) {
    char months[12][10] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    int i;

    for (i = 0; i <= 11; i++)
	    printf("%s\n", months[i]);

/*-
 * while (scanf("%S"), str[i] != EoF {
 *	printf("%s\n", str[i]);
 *	i++;
 * }
 */
    char animal[3][12];
    int /*i,*/ result;

    strcpy(animal[0], "giraffe");
    strcpy(animal[1], "tiger");
    strcpy(animal[2], "rhinoceros");
    for (i = 0; i <= 2; i++) {
    	result = strcmp(animal[i], "tiger");
	if (result == 0) {
		printf("tiger was found in position %d\n", i);
		break;
	}
    }
    
    printf("%s\n", classify("January"));
    printf("%s\n", classify("December"));
    printf("%s\n", classify("November"));

    months[3][1] = 'v';  // makes april avril
    printf("%c\n", months[0][0]); // prints J of january
    return 0;
}


/* Function classify:
 * 	finds monthname in array months and
 * 	classifies its position into one of four seasons
 */
char * classify (char *monthname) {
    char months[12][10] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    int i, found = 0;

    for (i = 0; i <= 11 && !found; i++)
	    if (strcmp(monthname, months[i]) == 0)
		    found = 1;
    if (!found)
	    return "error";
    switch (i - 1) {
    	case 11: case 0: case 1:  return "winter"; break;  // unnecessary but i dont like implicit fallthrough
	case 2:	 case 3: case 4:  return "spring"; break;
	case 5:  case 6: case 7:  return "summer"; break;
	case 8:  case 9: case 10: return "autumn"; break;
    }
    return "error";
}
