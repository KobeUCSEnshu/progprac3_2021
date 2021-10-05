/*
 * w01-s12.c
 *
 * $ gcc w01-s12.c -o w01-s12
 * $ ./w01-s12
 */
#include <stdio.h>

int max( int a, int b );

int main(void)
{
    int x, y;
    x = 2;
    y = 3;
    printf("max(%d,%d) = %d\n", x, y, max(x,y));
    
    return 0;
}

int max( int a, int b ) 
{
	int result;
	if ( a > b )
	{
		result = a;
    }
    else
    {
		result = b;
	}
	return result;
}

