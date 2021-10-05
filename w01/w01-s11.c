/*
 * w01-s11.c
 *
 * $ gcc w01-s11.c -o w01-s11
 * $ ./w01-s11
 */
#include <stdio.h>

int square(int x); 

int main(void) 
{
	int y;
	y = square(5);
	printf("result is %d\n", y);

	return 0;
}

int square(int x) 
{
	return x * x;
}

