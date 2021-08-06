#include <stdio.h>
// #include <

int main (void) {
   int answer, trash;

   do {
       printf("2 +  2 is 4, minus one that's 8, quick maths\n");
       printf("Do you want to continue? (y/n)> ");
       answer = getchar();
       // EOF is possible from ^D or ^Z in DOS
       trash = getchar();
   } while (answer == 'y');

   int c, count = 0;

   c = getchar();
   while (c != EOF) {
       putchar(c);
       count++;
       c = getchar();
   }
    printf("\nthere are %d characters in the input\n", count);

   return 0;
}