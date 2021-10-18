/*
 * w02-e01.c
 *
 * $ gcc w02-e01.c -o w02-e01
 * $ ./w02-e01
 */
#include <stdio.h>

int main()
{
    int i;
    float ave, min, max;
    float a[10];
    
    for ( i = 0; i < 10; i++ )
    {
        printf("a[%d] = ",i);
        scanf("%f",&(a[i]));
    }

    ave = a[0];
    min = a[0];
    max = a[0];
    for ( i = 1; i < 10; i++ )
    {
        ave += a[i];
        if ( a[i] < min ) min = a[i];
        if ( a[i] > max ) max = a[i];
    }
    
    ave /= 10;
    
    printf("Average: %f\n",ave);
    printf("Max-Min: %f\n",max-min);

    return 0;
}




