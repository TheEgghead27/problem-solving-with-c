/*
 * reads in a month name
 * calls classify to classify it into one of four seasons
 */
// #include <stdio.h>
// #include <string.h>
#include "funny-functions.h"
char * classify(char[]);
char * getstring(char *, int, FILE *);

int main(void) {
    char month[10], *season;
    printf("Enter month> ");
    gets(month);
    season = classify(month);
    if (strcmp(season, "error") != 0)
        printf("%s is in %s\n", month, season);
    else
        printf("%s is not a valid month\n", month);
    return 0;
}

char * classify(char monthname[]) {
    if (strcmp(monthname, "December") == 0 || strcmp(monthname, "January") == 0 || strcmp(monthname, "February") == 0)
        return "winter";
    if (strcmp(monthname, "March") == 0 || strcmp(monthname, "April") == 0 || strcmp(monthname, "May") == 0)
        return "spring";
    if (strcmp(monthname, "June") == 0 || strcmp(monthname, "July") == 0 || strcmp(monthname, "August") == 0)
        return "summer";
    if (strcmp(monthname, "September") == 0 || strcmp(monthname, "October") == 0 || strcmp(monthname, "November") == 0)
        return "autumn";

    return "error";
}