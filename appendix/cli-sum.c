#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
        int result = 0, i=1;
        while (i < argc) {
                // result += argv[i];  // incorrect due to argv being strings
                result += atoi(argv[i]); // converts strings like 5 to int, but turns 4.5 to 4, and other things to 0
                // atof and atol allow for float and long conversions
                i++;
        }
        printf("%d\n", result);
        return 0;
}