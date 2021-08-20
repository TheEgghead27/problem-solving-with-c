//
// To understand recursion, one must first understand recursion.
//                                                        - Confucius
//
#include <stdio.h>
#include <string.h>
#define MAXSIZE 30
long factorial(int n);
void reverse(char *str, char *newstr);
void fib(int n, long long * out, long long * previous);

int main(void) {
        /// "prob12"
        printf("%ld\n", factorial(4));

        char stringread[MAXSIZE], reversal[MAXSIZE];
        int k;

        do {
                printf("type in a string; enter 'done' to stop\n");
                fgets(stringread, sizeof stringread, stdin);
                stringread[strlen(stringread) - 1] = '\0';
                reverse(stringread, reversal);
                printf("\"%s\" is the reverse of \"%s\"\n\n", reversal, stringread);
                k = strcmp(stringread, "done");
        } while (k != 0);

        long long out, previous;
        int n;
        printf("Enter the index (starting from 0) of the Fibonacci sequence that you want to find > ");
        scanf("%d", &n);
        fib(n, &out, &previous);
        printf("The %dth term of the Fibonacci sequence is %lld\n", n, out);

        return 0;
}


long factorial(int n) {
        if (n == 1)
                return 1;  // escape or anchor clause
        else
                return factorial(n - 1) * n;  // recursive call/reference to a simpler case
}


void reverse(char *str, char *newstr) {
        int k;

        k = strlen(str);
        if (k <= 1)
                strcpy(newstr, str);  // escape clause
        else {
                reverse(str + 1, newstr);
                newstr[k - 1] = str[0];
                newstr[k] = '\0';
        }
        return;
}


/* recursively compute term n of the
 * Fibonacci series--1, 1, 2, 3, 5, 8 ... */
/*4
int fib(int n) {
        if (n == 0 || n == 1)
                return 1;
        else if (n < 0)
                return -1;
        return fib(n - 1) + fib(n - 2);
}
 */

/// void pointer basically means pointer to anything, and you just *gotta believe* in your ability to not mess everything up
/*
 * void * n
 * to get the int from this
 * *(int *)n
 * dereferencing a type cast of the void pointer to an int pointer
 */
void fib(int n, long long * out, long long * previous) {
        printf("%d\n", n);
        getchar();
        if (n == 1) {
                *out = 1;
                *previous = 1;
        }
        else if (n == 0) {
                *out = 0;
                *previous = 0;
        }
        else if (n < 0) {
                fib((n * (-1)), out, previous);
                int factor = 1;
                if ((-n % 2))  // exponent is odd power of -1
                        factor = -1;
                *out = factor * (*out);
                *previous =  factor * (*previous) * - 1;
        }
        else {
                fib((n - 1), out, previous);
                int interim;
                interim = *out;
                *out = *out + *previous;
                *previous = interim;
        }
        return;
}