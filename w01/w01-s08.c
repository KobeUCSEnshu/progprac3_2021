/*
 * w01-s08.c
 *
 * $ gcc w01-s08.c -o w01-s08
 * $ ./w01-s08
*/
#include <stdio.h>
 
int main(void)
{
    int i, j;
    for ( i=0; i<5; i++ )
    {
	    for ( j=0; j<5; j++ )
        {
            printf("i=%d,j=%d\n",i,j);
        }
    }

    return 0;
}

