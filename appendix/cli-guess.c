#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
        if (argc < 2)
                exit(1);

        if (strcmp("apple", argv[1]) == 0)
                printf("your guess,--%s--matches the secret word\n", argv[1]);
        else
                printf("your guess,--%s--isn't a match\n", argv[1]);
        return 0;
}