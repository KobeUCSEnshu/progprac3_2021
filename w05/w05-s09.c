/*
 * w05-s09
 *
 * $ gcc w05-s09.c -o w05-s09
 * $ ./w05-s09
 */
#include <stdio.h>

void dump_array( int* a, int n )
{
	int i;
	for ( i = 0; i < n; i++ )
	{
		printf("%3d", a[i]);
		if ( i % 10 == 9 )
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
}

int main()
{
	const int n = 100;
	int a[n];

	int i;
	for ( i = 0; i < n; i++ )
	{
		a[i] = i;
	}

	dump_array( a, n );

    return 0;
}


