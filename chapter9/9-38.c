#include <stdio.h>
#include <ctype.h>


int main(void) {
    int ch;
    int alpha=0, digit=0, space=0, punct=0;

    // ch = getchar();
    //while (ch != EOF) {
    while ((ch = getchar()) != EOF) {
        getchar();
        if (isalpha(ch))
            alpha++;
        else if (isdigit(ch))
            digit++;
        else if (isspace(ch))
            space++;
        else if (ispunct(ch))
            punct++;
        // ch = getchar();
    }

    printf("The number of alphabetic characters is %d\n", alpha);
    printf("The number of digits 0-9 is %d\n", digit);
    printf("The number of spaces entered is %d\n", space);
    printf("The number of pieces of punctuation is %d\n", punct);

    return 0;
}