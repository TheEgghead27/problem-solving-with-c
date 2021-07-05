#include <stdio.h>

void readValues(int *first, int *second) {
    printf("Enter the first value> ");
    scanf("%d", first);
    printf("Enter the second value> ");
    scanf("%d", second);

    return;
}

void subtractSmaller(int *first, int *second, int *third, int *subtrahend) {
    if (*first > *second) {
        *third = *first - *second;
        *subtrahend = *second;
    }
    else {
        *third = *second - *first;
        *subtrahend = *first;
    }
}


int main(void) {
    int first, second, third, fourth;  // i have no idea what they were on about some third function

    readValues(&first, &second);
    subtractSmaller(&first, &second, &third, &fourth);
    while (third != fourth) {
        first = third;
        second = fourth;
        subtractSmaller(&first, &second, &third, &fourth);
    }
    printf("The GCF is %d\n", third);

    return 0;
}