#include <stdio.h>


int main(void) {
    double sales[3] = {0, 0, 0};
    double amount;
    int    year, count, numtrans, i;

    printf("Enter the number of transactions> ");
    scanf("%d", &numtrans);

    for (count = 0; count < numtrans; count++) {
        printf("\nYear: ");
        scanf("%d", &year);
        printf("\tAmount: ");
        scanf("%lf", &amount);

        sales[year - 1994] += amount;  // inb4 out of index issue
        /*
        switch(year) {
            case 1994:
                sales[0] += amount;
                break;
            case 1995:
                sales[1] += amount;
                break;
            case 1996:
                sales[2] += amount;
                break;
            // default;  this does not work
        }
        */

    }

    for (i = 0; i < 3; i++)
        printf("sales for %d are %8.2f\n", i + 1994, sales[i]);
    /*
    printf("sales for 1994 are %8.2f\n", sales[0]);
    printf("sales for 1995 are %8.2f\n", sales[1]);
    printf("sales for 1996 are %8.2f\n", sales[2]);
    */
}