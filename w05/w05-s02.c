/*
 * w05-s02
 *
 * $ gcc w05-s02.c -o w05-s02
 * $ ./w05-s02
 */
#include <stdio.h>

int main()
{
	int sz_int = sizeof(int);
	int sz_long = sizeof(long);
	int sz_float = sizeof(float);
	int sz_double = sizeof(double);
	int sz_char = sizeof(char);

    printf("size of int = %d\n", sz_int);
    printf("size of long = %d\n", sz_long);
    printf("size of float = %d\n", sz_float);
    printf("size of double = %d\n", sz_double);
    printf("size of char = %d\n", sz_char);

    return 0;
}


