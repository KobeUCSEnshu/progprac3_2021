/*
 * w02-s02.c
 *
 * $ gcc w02-s02.c -o w02-s02
 * $ ./w02-s02
 */
#include <stdio.h>

int min( int data[], int num );

void main(void)
{
    int seiseki[7] = {76,54,84,92,43,77,52};
    int min_val;

    min_val = min( seiseki, 7 );
    printf("min. value is %d\n", min_val);
}

int min( int data[], int num )
{
    int i;
    int min_val = data[0];

    for ( i = 0; i < num; i++ )
    {
        if ( data[i] < min_val )
        {
            min_val = data[i];
        }
    }
    
    return min_val;
}

