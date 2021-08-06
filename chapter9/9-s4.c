#include <stdio.h>
#include <string.h>

int length(char []); // int length(char *)
int countchar(char str[], char let);
int findchar(char[], char);

int main(void) {
    char str[80];

    fgets(str, sizeof str, stdin);
    printf("Length: %d\n", length(str));
    printf("Number of e in string: %d\n", countchar(str, 'e'));
    printf("Position of a in string: %d\n", findchar(str, 'a'));


    if (sizeof str > strlen(str) + 1) {
        puts("adding s to end of word");
        str[len+1] = '\0';
        str[len] = 's';
        puts(str);
    } else puts("not adding s to end of word, no room");

    return 0;
}


/* returns an integer representing the length of parameter str */
int length(char str[]) {
    int i = 0;

    while (str[i] != '\0')  // or (*str + i != '\0')  not the pointer the found thing
        i++;
    return i;
}

/* returns an integer representing the # of occurrences of let in str */
int countchar(char str[], char let) {
    int i = 0, count = 0;

    while (str[i] != '\0') {
        if (str[i] == let)
            count++;
        i++
    }
    return count;
}


int main(void) {}


