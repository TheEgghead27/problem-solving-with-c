//
// "Side effects may include nausea, dizziness, swelling, vomiting, cancer, and in some rare cases, death. Stop taking systemD and call your doctor immediately if any of these symptoms occur."
//                                                                              - The narrator in drug ads while the people in the background are vibin
//
#include <stdio.h>

int main(void) {
        int x;
        x = 5;  // `5` is an expression, which is evaluated, then assigned to x as a side effect of the `=`

        int c, count=0;  // count the length in chars of a file

        while ((c = getchar()) != EOF)  // as a side effect of the assignment, we automagically have c compared to EOF
                count++;
        printf("there are %d characters in the input.", count);

        // for example, the increment operators being on different sides affects the final evalution
        int i = 4;
        printf("%d\n", i++);  // prints 4 because ++ comes after ("use the value of i then increment")
        printf("%d\n", i);  // 5 after increment

        int j = 4;
        printf("%d\n", ++j);  // prints 5 because ++ comes before ("increment then use the value of j")
        printf("%d\n", j);  // 5 after increment

        int num, a = 1;
        num = a++;  // num gets 1, a becomes 2 due to increment
        printf("%d %d\n", num, a);

        int b = 1;
        num = ++b; // num gets 2, b becomes 2 due to increment
        printf("%d %d\n", num, b);

        int x,y,z;
        printf("type in values for x and y>");
        scanf("%d", &x);
        scanf("%d", &y);

        // if (x = 5)     !! always true since 5 is assigned to x and by side effect 5 is evaluated as true every time
        // while (x = 5)  !! infinite loop since 5 is assigned to x and by side effect 5 is evaluated as true every time
        z = (x > y++);  // evaluates x > y, then y is incremented

        return 0;
}

// not being careful with side effects can lead to mistakes

