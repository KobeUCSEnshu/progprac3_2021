/*
 * w02-r01.c
 *
 * $ gcc w02-r01.c -o w02-r01
 * $ ./w02-r01
 */
#include <stdio.h>

float ave( float d[], int n )
{
    int i;
    float sum = 0;
    for ( i = 0; i < n; i++ ) sum += d[i];

    return sum / n;
}

int main()
{
    int i;
    float a[5];

    for ( i = 0; i < 5; i++ )
    {
        printf("a[%d] = ",i);
        scanf("%f",&(a[i]));
    }

    printf("Average: %f\n", ave(a,5));

    return 0;
}



