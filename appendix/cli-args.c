#include <stdio.h>


int main(int argc, char * argv[]) {  // first arg is number of parameters (including invoking name), second is list of parameters as strings
        // argc = argument count, argv = argument variables, but you can rename these if you choose
        // `find Smith Johnson letter.txt`
        // argc = 4. argv[0] = find, argv[1] = Smith, argv[2] = Johnson, argv[argc - 1] = letter.txt

        // check if (argc < x) to ensure minimum of x - 1 parameters

        // print all parameters
        int i = 1;  // start at 1 because p0 is executable name
        while (i < argc) {
                printf("%s\n", argv[i]);
                i++;
        }

}