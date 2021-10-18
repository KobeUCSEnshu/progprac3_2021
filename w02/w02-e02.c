/*
 * w02-e02.c
 *
 * $ gcc w02-e02.c -o w02-e02
 * $ ./w02-e02
 */
#include <stdio.h>

int main()
{
    int i, j;
    float a[3][3];

    for ( i = 0; i < 3; i++ )
    {
        for ( j = 0; j < 3; j++)
        {
            printf("a[%d][%d] = ", i,j);
            scanf("%f",&(a[i][j]));
        }
    }

    for ( i = 0; i < 3; i++ )
    {
        float sum_row = 0;
        for ( j = 0; j < 3; j++ )
        {
            sum_row += a[i][j];
        }
        printf("Sum of row %d: %f\n", i,sum_row);
    }

    for ( j = 0; j < 3; j++ )
    {
        float sum_col = 0;
        for ( i = 0; i < 3; i++ )
        {
            sum_col += a[i][j];
        }
        printf("Sum of col %d: %f\n", j,sum_col);
    }

    return 0;
}



