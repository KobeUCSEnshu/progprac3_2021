/*
 * w02-r05.c
 *
 * $ gcc w02-r05.c -o w02-r05
 * $ ./w02-r05
 */
#include <stdio.h>

void print_array( int a[], int n )
{
    int i;
    
    printf("{");
    for ( i = 0; i < n; i++ )
    {
        printf("%d",a[i]);
        if ( i != n - 1 ) printf(",");
    }
    printf("}");
}

void bubble_sort( int a[], int n )
{
    int i, j;
    for ( i = 0; i < n - 1; i++ )
    {
        for ( j = n - 1; j > i; j-- )
        {
            if ( a[j-1] > a[j] )
            {
                int temp = a[j-1];
                a[j-1] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main()
{
    int i;
    int a[10];
    
    for ( i = 0; i < 10; i++ )
    {
        printf("a[%d] = ", i);
        scanf("%d",&(a[i]));
    }

    printf("Input: a[] = ");
    print_array( a, 10 );
    printf("\n");

    bubble_sort( a, 10 );

    printf("Output: a[] = ");
    print_array( a, 10 );
    printf("\n");

    return 0;
}




