/*
 * w01-s13.c
 *
 * $ gcc w01-s13.c -o w01-s13
 * $ ./w01-s13
 */
#include <stdio.h>

int gcd( int x, int y )
{
	int z = 0;
	if ( y != 0 )
	{
		z = gcd( y, x%y );
	}
    else
    {
		z = x;
	}
	return z;
}

int main(void)
{
    int a, b;
    a = 22;
    b = 8;
    printf("gcd(%d,%d) = %d\n", a, b, gcd(a,b));

    return 0;
}

