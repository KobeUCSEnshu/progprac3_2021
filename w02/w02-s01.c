/*
 * w02-s01.c
 *
 * $ gcc w02-s01.c -o w02-s01
 * $ ./w02-s01
 */
#include <stdio.h>

void main(void)
{
    int i, array[3];
    array[0] = 0;
    array[1] = 10;
    array[2] = 100;
    for ( i = 0; i < 3; i++ )
	{
		printf("%d: %d\n", i, array[i]);
	}
}

