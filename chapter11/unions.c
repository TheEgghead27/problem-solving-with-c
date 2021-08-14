// unions: define like a struct
// allocates the max amount of memory potentially needed
// then only one thing at a time will be allowed to exist in a union
#include <stdio.h>


int main(void) {
        union occupation {
            char college[30];  // biggest if true
            double salary;
        } current, past;
        union occupation *old;
        // consider using an integer to keep track of types
        /* int inCollege; */

        /* stuff to fill in values */

        /*
         * if (inCollege) college things
         * else not college things
         */

        // you can use dot or arrow notation
        printf("%s\n", current.college);
        old = &past;
        old -> salary = 12345.67;


        /// nesting unions and structures (like an onion)
        struct alumni {
            char name[30];
            char address[40];
            char citystate[30];
            int incollege;
            union occupation current;
            /*
             * union occupation {
             *  char college[30];  // biggest if true
             *  double salary;
             * } current;
             */
        } grad[100];

        /* more fill-ins */

        if (grad[0].incollege == 1)
                printf("%s\n", grad[0].current.college);
        else
                printf("%.2f\n", grad[0].current.salary);
}