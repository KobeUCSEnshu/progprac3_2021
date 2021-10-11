/*
 * w02-s07.c
 *
 * $ ./gcc w02-s07.c -o w02-s07
 * $ ./w02-s07
 */
#include <stdio.h>

void main()
{
	int i;

	printf("Dec, Hex, Char\n");
	for ( i = 33; i <= 126; i++ )
    {
		printf("%d, %x, %c\n", i, i, i);
	}
}

