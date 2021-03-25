/*
 * Print limits.h information (tests would run for a very long time and be a waste of time)
 */
#include <stdio.h>
#include <limits.h>


int main(void) {
	printf("CHAR_BIT: %d\n", CHAR_BIT);
	printf("SignedCHAR_MIN: %d\n", SCHAR_MIN);
	printf("SignedCHAR_MAX: %d\n", SCHAR_MAX);
	printf("UnsignedCHAR_MAX: %d\n", UCHAR_MAX);
	printf("CHAR_MIN: %d\n", CHAR_MIN);
	printf("MultiBytecharacter_LEN_MAX: %d\n", MB_LEN_MAX);
	printf("SHRT_MIN: %d\n", SHRT_MIN);
	printf("SHRT_MAX: %d\n", SHRT_MAX);
	printf("UnsignedSHRT_MAX: %d\n", USHRT_MAX);
	printf("INT_MIN: %d\n", INT_MIN);
	printf("INT_MAX: %d\n", INT_MAX);
	printf("UnsignedINT_MAX: %d\n", UINT_MAX);
	printf("LONG_MIN: %d\n", LONG_MIN);
	printf("LONG_MAX: %d\n", LONG_MAX);
	printf("UnsignedLONG_MAX: %d\n", ULONG_MAX);

}