/// Selected Standard Library Functions
// const appearing before a parameter indicates that that parameter is not changed

/// stdio.h
/*
 * int fclose(FILE *file);
 *      closes a file when you are done with it, EOF if there is an error, 0 otherwise
 * int fgetc(FILE *file);
 *      reads a character from a file, EOF if the end was reached
 * char *fgets(char *str, int n, FILE *file);
 *      reads up to n-1 characters into an array str, returns str, or NULL during an error (n gives a way to prevent buffer overflows)
 * FILE * fopen(const char *file, chose char *use);
 *      opens a file for use, typically r for read, w for write, returns a pointer to the file on success, NULL during issues
 * int fprintf(FILE *file, const char *format, list of expressions);
 *      sends output to file, using the format string specification, returns the number of characters written, or negative if there was an error
 * int putc(int c, FILE *file);
 *      outputs character c to file, returns c as unsigned char or EOF for issues
 * int fputs(const char* c, FILE *file);
 *      outputs character c to file, returns c as unsigned char or EOF for issues
 * int fscanf(FILE *file, const char *format, list of addresses of variable(s))
 *      reads input from a file, converting the values read in according to the formats specified and assigning the values to the addresses;
 *      returns the number of input items converted and assigned; returns EOF if an issue occurred before conversions
 * int getchar(void);
 *      reads and returns a character from stdin (see fgetc)
 * char *gets(char *str);
 *      reads an input line from stdin into an array of characters str (see fgets)
 * int printf(const char *format, list of expressions);
 *      sends output to stdout (see fprintf)
 * int putchar(int c);
 *      outputs char c to stdout (see fputc)
 * int puts(const *str);
 *      outputs the string str and a newline character to stdout (see fputs)
 * int scanf(const char *format, list of addresses of variables);
 *      reads input from stdin (see fscanf)
 */

/// math.h
/*
 * int ceil(double x);
 *      returns the smallest integer greater than or equal to x
 * double cos(double x)
 *      returns the cosine of angle x (measured in radians)
 * double exp(double x);
 *      returns the constant e to the x power
 * double fabs(double x);
 *      returns the absolute value of x
 * int floor(double x);
 *      returns the largest integer less than or equal to x
 * double log(double x);
 *      returns the natural logarithm of x
 * double pow(double x, double y);
 *      returns x to the y pwoer
 * double sin(double x);
 *      returns the sine of angle x (measured in radians)
 * double sqrt(double x);
 *      returns the square root of x
 * double tan(double x)
 *      returns the tangent of angle x (measured in radians)
 */

/// ctype.h
/*
 * int isalnum(int ch); - is ch alphanumeric?
 * int isalpha(int ch); - is ch alphabetic?
 * int isdigit(int ch); - is ch a digit?
 * int islower(int ch); - is ch a lowercase character?
 * int ispunct(int ch); - is ch a punctuation symbol?
 * int isspace(int ch); - is ch a whitespace character?
 * int isupper(int ch); - is ch an uppercase character?
 *
 * Each returns true (1) if ch is that type, otherwise, false (0)
 *
 * int tolower(int ch);
 *      If ch is an uppercase letter, return the corresponding lowercase letter, otherwise returns ch unchanged
 * int toupper(int ch);
 *      If ch is an lowercase letter, return the corresponding uppercase letter, otherwise returns ch unchanged
 */


/// string.h
/*
 * char *strcat(char *str1, const char *str2);
 *      copies str2 to the end of str1, returns str1
 * int srcmp(const char *str1, const char *str2);
 *      compares the strings str1 and str2, returns positive, negative, or zero
 * char *strcpy(shar *str1, const char *str2);
 *      copies str2 to str1; returns str1
 * size_t strlen(const char *str);
 *      returns the length of str; size_t is an unsigned int, so the length can be much higher than normal int bounds
 * char *strncat(char *str1, const char *str2, size_t n);
 *      copies up to n characters from str2 to the end of str1, inserting '\0' at the end
 *      returns str1
 * int strncmp(const char *str1, const char *str2, size_t n);
 *      compares up to n characters from strings str1 and str2, returns positive, negative, or zero
 * char *strncpy(char *str1, const char *str2, size_t n);
 *      copies up to n characters from str2 to str1, padding with additional '\0' characters at the end, if necessary; returns str1
 * char *strstr(const char *str1, const char *str2);
 *      returns pointer to the first occurrence of the string str2 in string1, returns NULL if it does not occur
 */


/// stdlib.h
/*
 * int abs(int n);
 *      returns the absolute value of n
 * double atof(const char *str);
 *      converts str to a value of type double and returns that value
 * int atoi(const char *str);
 *      converts str to an integer and returns that integer
 * long atol(const char *str);
 *       converts str to a value of type long and returns that value
 * void exit(int error_val);
 *      terminates the program, returning error_val to the environment
 * void free(void *p);
 *      deallocates the space pointed to by p
 * void *malloc(size_t size);
 *      returns a pointer to space for an object of size bytes, returns NULL if the space cannot be allocated.
 * int rand(void);
 *      returns a random integer in the range from 0 to some maximum value
 * void srand(unsigned int seed);
 *      uses seed as the seed to generate a sequence of random numbers
 */
