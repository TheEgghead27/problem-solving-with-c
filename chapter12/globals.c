//
// Around the world, around the world, around the world, around the world, around the world...
//                                                                                      - Daft Punk
//
#include <stdio.h>
#include <stdlib.h>
int x = 1, y = 1, z = 1, i;
void sub(void);
int main2(void);

int main (void) {
        int x = 10;
        printf("in main: %d %d %d\n", x, y, z);
        for (i = 0; i < 10; i++)
                sub();
        printf("back in main: %d %d %d\n", x, y, z);

        return main2();
}

void sub(void) {
        double y;

        x = 5;  // global redefinition
        y = 5;  // local
        z = 5;  // global
        for (i = 1; i <= 10; i++)  // i is the same in both functions, so once this terminates once, the outer loop also terminates
                printf("in sub: %d %f %d\n", x, y, z);

        return;
}

/*
 * Variables declared in a function (including main()) are local and only available in that function's scope, it is distinct from any other
 * Function formal parameters are also distinct in this way, except that they receive values from the actual parameter/argument
 * Identifiers declared outside of a function is an external/global variable, and it is usable anywhere else in the code past the definition.
 *
 * Global values are useful for protoypes, constants, and typedefs/enums/unions
 * They are dangerous for variable values due to the fact that they can change.
 *
 * Global functions are useful to skip passing in the same main variable into every function, but it pollutes the namespace and makes that name hard to reuse for other purposes
 */

/*
 * Storage classes/Automatic variables
 * Every variable has a data type (int, char, double, etc.) and a storage class, how much memory space the variable is allocated and the scope of the variable.
 * The storage class is by default automatic, but other options are external, static, and register
 * Automatic means that the variable is allocated during its function being called, then freed after function `return;`
 * External is the global storage class; any function under it can access it. The compiler automatically reads the context to achieve this.
 * A function can also explicitly define an `extern` variable, which makes it easier to single out/keep track of
 */
void sub2(int);
void denuvoActivate(void);
#define SIZE 100

struct test {
    char name[20];
    int grade;
} val[SIZE];


int main2(void) {
        extern struct test val[]; // references the val[SIZE] from line 57
        int i;
        for (i = 0; i < SIZE; i++)
                sub2(i);
        // process all of the val array
        return 0;
}

void sub2(int i) {
        extern struct test val[]; // references the val[SIZE] from line 57
        // process val[i]
        denuvoActivate();
        return;
}

/*
 * Static Variables:
 * Static variables maintain the storage location and value between function calls
 * extern static variables can only be referenced in functions that are in its original source code file, hiding it from other files' namespaces
 */
void denuvoActivate(void) {
        static int count = 0;  // only happens first time

        count++;
        printf("%d\n", count);
        if (count == 5) {
                fprintf(stderr, "You have used up all of your allocated activations.\n");
                exit(1);
        }
}

/*
 * Register Variables:
 * Register variables indicate to the compiler to use high-speed registers (cache?)
 * This is useful for loop subscripts like in the for loops iterating through lists
 */