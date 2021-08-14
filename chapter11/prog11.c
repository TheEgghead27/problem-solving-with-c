#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NUMCONS 50

struct conname {
    char last[20];
    char first[20];
};

struct jobinfo {
    char title[15];
    double salary;
};

struct persinfo {
    char sex[2];
    char haircolor[7];
    int age;
    struct jobinfo job;
};

struct con {
    struct conname name;
    struct persinfo personal;
};

void readdata(struct con [], int *);
void prettyprint(struct con *, int);
void printmenu(void);
int selecttrait(struct con *, int);

void pause(void);
void findage(struct con contestant[], int num);
void findhair(struct con contestant[], int num);
void findsex(struct con contestant[], int num);
void findsalary(struct con contestant[], int num);
void findtitle(struct con contestant[], int num);

int main(void) {
    struct con contestant[NUMCONS];
    int        num;

    readdata(contestant, &num);
    prettyprint(contestant, num);

    do {
        printmenu();
    } while (selecttrait(contestant, num) != 0);

    return 0;
}


/*
 * Function readdata:
 * Input:
 *  values are read from the file cfile
 *  constestant: the array to fill
 *  num: the actual number of contestants
 *  both parameters are uninitialized upon entry
 * Process:
 *  reads in data values from file cfile
 *  into the contestant array of structures
 *  counts the number of contestants
 * Output:
 *  gives values to parameters contestant and num
 * Called by: main      Calls: none
 */
void readdata(struct con contestant[], int *num) {
    FILE *cfile;
    int  count;

    cfile = fopen("p11.dat", "r");
    if (cfile == NULL) {
        fprintf(stderr, "Error opening input file\n");
        exit(1);
    }
    count = 0;
    while (fscanf(cfile, "%s", contestant[count].name.last) != EOF) {
        fscanf(cfile, "%s", contestant[count].name.first);
        fscanf(cfile, "%s", contestant[count].personal.sex);
        fscanf(cfile, "%s", contestant[count].personal.haircolor);
        fscanf(cfile, "%d", &contestant[count].personal.age);
        fscanf(cfile, "%s", contestant[count].personal.job.title);
        fscanf(cfile, "%lf", &contestant[count].personal.job.salary);
        count++;
    }
    *num = count;
    fclose(cfile);

    return;
}


/*
 * Function prettyprint:
 * Input:
 *  contestant: the array to print
 *  num: the number of contestants
 * Process:
 *  sends the "database" in a nice format to the file dbfile
 * Output:
 *  nicely displayed listing of array of structures in file dbfile
 * Called by: main      Calls: none
 */
void prettyprint(struct con *contestant, int num) {
    int count;
    FILE *dbfile;

    dbfile = fopen("p11.out", "w");

    if (dbfile == NULL) {
        fprintf(stderr, "error openinh output file\n");
        exit(1);
    }

    fprintf(dbfile, "\t\tContestants in the Database\n\n");
    fprintf(dbfile, "Name \t\tSex  \tHair \tAge \tTitle \t\t Salary\n\n");
    for (count = 0; count < num; count++) {
        fprintf(dbfile, "%s ", contestant[count].name.first);
        fprintf(dbfile, "%s\t", contestant[count].name.last);
        fprintf(dbfile, "%s\t", contestant[count].personal.sex);
        fprintf(dbfile, "%s\t", contestant[count].personal.haircolor);
        fprintf(dbfile, "%d\t", contestant[count].personal.age);
        fprintf(dbfile, "%s\t\t", contestant[count].personal.job.title);
        fprintf(dbfile, "$%8.2f\n", contestant[count].personal.job.salary);
    }
    fclose(dbfile);
    return;
}


/*
 * Function printmenu:
 * Input:
 *      none
 * Process:
 *      sets up a menu from which the user
 *      may choose a trait or choose to quit
 * Output:
 *      displays a menu on the screen
 */
void printmenu(void) {
        fprintf(stdout, "\n\n\n\n\n\n\n");
        fprintf(stdout, "To obtain a list of contests with a given trait, \n");
        fprintf(stdout, "select a trait from the list and type in the number\n");
        fprintf(stdout, "corresponding to that trait.\n\n");
        fprintf(stdout, "To quit, select 0.\n\n");
        fprintf(stdout, "\t******************************\n");
        fprintf(stdout, "\t        List of Choices       \n");
        fprintf(stdout, "\t******************************\n");
        fprintf(stdout, "\t   0 -- quit\n");
        fprintf(stdout, "\t   1 -- age\n");
        fprintf(stdout, "\t   2 -- sex\n");
        fprintf(stdout, "\t   3 -- hair color\n");
        fprintf(stdout, "\t   4 -- title\n");
        fprintf(stdout, "\t   5 -- salary\n");
        fprintf(stdout, "\n\n\tEnter your selection, 0 through 5 > ");
        return;
}


/*
 * Function selecttrait:
 * Input:
 *      reads a value typed from the keyboard
 * Process:
 *      based on the value typed in, either terminates
 *      the program or calls a function to search the database
 * Output:
 *      returns user's choice to main
 */
int selecttrait(struct con *contestant, int num) {
        int choice;

        do {
                fscanf(stdin, "%d", &choice);
                switch (choice) {
                        case 0: break;
                        case 1: findage(contestant, num);
                                break;
                        case 2: findsex(contestant, num);
                                break;
                        case 3: findhair(contestant, num);
                                break;
                        case 4: findtitle(contestant, num);
                                break;
                        case 5: findsalary(contestant, num);
                                break;
                        default:
                                fprintf(stdout,"Incorrect value; try again\n\n");
                                fprintf(stdout, "\tEnter your selection, 0 through 5 > ");
                }
        } while (choice < 0 || choice > 5);
        return choice;
}


/*
 * Function pause:
 * Input:
 *     key pressed from stdin
 * Process:
 *      delays program by waiting for key to be pressed
 * Output:
 *      displays "Press <Enter> to continue" on stdout
 * Called by: findage, findhair, findsex, findtitle, findsalary         Calls: none
 */
void pause(void) {
        getchar();
        fprintf(stdout, "\n\nPress <Enter> to continue");
        getchar();
        return;
}


/*
 * Function findage:
 * Input:
 *      reads requested value from the keyboard into agewanted
 *      contestant: array of structures
 *      num: number of elements in the contestant array
 * Process:
 *      finds all contestants in array contestant
 *      with age equal to agewanted
 * Output:
 *      prints the first and last name of all contestants
 *              with age equal to agewanted
 *      otherwise prints a message that none were found
 * Called by: selecttrait               Calls: pause
 */
void findage(struct con contestant[], int num) {
        int agewanted, count, found = 0;

        fprintf(stdout, "\n\nEnter the age that you want > ");
        fscanf(stdin, "%d", &agewanted);
        fprintf(stdout, "\n\nContestants whose age is %d:\n\n", agewanted);
        for (count = 0; count < num; count++)
                if (contestant[count].personal.age == agewanted) {
                        fprintf(stdout, "%s %s\n", contestant[count].name.first, contestant[count].name.last);
                        found++;
                }
        if (found)
                fprintf(stdout, "%d contestants found\n", found);
        else
                fprintf(stdout, "No contestants of this age\n\n");

        pause();

        return;
}


/*
 * Function findhair:
 * Input:
 *      reads requested value from the keyboard into hairwanted
 *      contestant: array of structures
 *      num: number of elements in the contestant array
 * Process:
 *      finds all contestants in array contestant
 *      with hair equal to hairwanted
 * Output:
 *      prints the first and last name of all contestants
 *              with hair equal to hairwanted
 *      otherwise prints a message that none were found
 * Called by: selecttrait               Calls: pause
 */
void findhair(struct con contestant[], int num) {
        char hairwanted[50];
        int count, found = 0;

        fprintf(stdout, "\n\nEnter the hair color that you want > ");
        fscanf(stdin, "%s", hairwanted);
        fprintf(stdout, "\n\nContestants whose hair is %s:\n\n", hairwanted);
        for (count = 0; count < num; count++)
                if (strcmp(contestant[count].personal.haircolor, hairwanted) == 0) {
                        fprintf(stdout, "%s %s\n", contestant[count].name.first, contestant[count].name.last);
                        found++;
                }
        if (found)
                fprintf(stdout, "%d contestants found\n", found);
        else
                fprintf(stdout, "No contestants of this hair color\n\n");

        pause();

        return;
}


/*
 * Function findtitle:
 * Input:
 *      reads requested value from the keyboard into titlewanted
 *      contestant: array of structures
 *      num: number of elements in the contestant array
 * Process:
 *      finds all contestants in array contestant
 *      with title equal to titlewanted
 * Output:
 *      prints the first and last name of all contestants
 *              with title equal to titlewanted
 *      otherwise prints a message that none were found
 * Called by: selecttrait               Calls: pause
 */
void findtitle(struct con contestant[], int num) {
        char titlewanted[50];
        int count, found = 0;

        fprintf(stdout, "\n\nEnter the title that you want > ");
        fscanf(stdin, "%s", titlewanted);
        fprintf(stdout, "\n\nContestants whose title is %s:\n\n", titlewanted);
        for (count = 0; count < num; count++)
                if (strcmp(contestant[count].personal.job.title, titlewanted) == 0) {
                        fprintf(stdout, "%s %s\n", contestant[count].name.first, contestant[count].name.last);
                        found++;
                }
        if (found)
                fprintf(stdout, "%d contestants found\n", found);
        else
                fprintf(stdout, "No contestants of this title\n\n");

        pause();

        return;
}


/*
 * Function findsalary:
 * Input:
 *      reads requested value from the keyboard into salarywanted
 *      contestant: array of structures
 *      num: number of elements in the contestant array
 * Process:
 *      finds all contestants in array contestant
 *      with salary equal to salarywanted
 * Output:
 *      prints the first and last name of all contestants
 *              with salary equal to salarywanted
 *      otherwise prints a message that none were found
 * Called by: selecttrait               Calls: pause
 */
void findsalary(struct con contestant[], int num) {
        double salarywanted;
        int count, found = 0;

        fprintf(stdout, "\n\nEnter the salary that you want > ");
        fscanf(stdin, "%lf", &salarywanted);
        fprintf(stdout, "\n\nContestants whose salary is at least $%.2f:\n\n", salarywanted);
        for (count = 0; count < num; count++)
                if (contestant[count].personal.job.salary >= salarywanted) {
                        fprintf(stdout, "%s %s\n", contestant[count].name.first, contestant[count].name.last);
                        found++;
                }
        if (found)
                fprintf(stdout, "%d contestants found\n", found);
        else
                fprintf(stdout, "No contestants of this salary or above\n\n");

        pause();

        return;
}


/*
 * Function findsex:
 * Input:
 *      reads requested value from the keyboard into sexwanted
 *      contestant: array of structures
 *      num: number of elements in the contestant array
 * Process:
 *      finds all contestants in array contestant
 *      with sex equal to sexwanted
 * Output:
 *      prints the first and last name of all contestants
 *              with sex equal to sexwanted
 *      otherwise prints a message that none were found
 * Called by: selecttrait               Calls: pause
 */
void findsex(struct con contestant[], int num) {
        char sexwanted[2];
        int count, found = 0;

        fprintf(stdout, "\n\nEnter the sex that you want > ");
        fscanf(stdin, "%s", sexwanted);
        fprintf(stdout, "\n\nContestants whose sex is %s:\n\n", sexwanted);
        for (count = 0; count < num; count++)
                if (strcmp(contestant[count].personal.sex, sexwanted) == 0) {
                        fprintf(stdout, "%s %s\n", contestant[count].name.first, contestant[count].name.last);
                        found++;
                }
        if (found)
                fprintf(stdout, "%d contestants found\n", found);
        else
                fprintf(stdout, "No contestants of this sex\n\n");

        pause();

        return;
}
