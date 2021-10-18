/*
 * w02-r03.c
 *
 * $ gcc w02-r03.c -o w02-r03
 * $ ./w02-r03
 */
#include <stdio.h>

void print_mult_of( int d[], int n, int v )
{
    int i;
    for ( i = 0; i < n; i++ )
    {
        if ( d[i] % v == 0 )
        {
            printf("%d,", d[i]);
        }
    }
    printf("\n");
}

int main()
{
    int i;
    int a[100];
    
    for ( i = 0; i < 100; i++ )
    {
        a[i] = i+1;
    }
    
    print_mult_of( a, 100, 3 );
    print_mult_of( a, 100, 5 );

    return 0;
}



