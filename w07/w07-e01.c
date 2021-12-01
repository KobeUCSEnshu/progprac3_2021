/*
 * w07-e01
 *
 * $ gcc w07-e01.c -o w07-e01
 * $ ./w07-e01
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int*** x;
    int i, j, k;
    
    printf("N = ");
    scanf("%d", &N);

    x = malloc( N * sizeof(int**) );
    for ( i = 0; i < N; i++ )
    {
        x[i] = malloc( N * sizeof(int*) );
        for ( j = 0; j < N; j++ )
        {
            x[i][j] = malloc( N * sizeof(int) );
            for ( k = 0; k < N; k++ )
            {
                x[i][j][k] = i * N * N + j * N + k;
            }
        }
    }

    for ( i = 0; i < N; i++ )
    {
        for ( j = 0; j < N; j++ )
        {
            for ( k = 0; k < N; k++ )
            {
                printf("x[%d][%d][%d] = %d\n", i, j, k, x[i][j][k] );
            }
        }
    }

    for ( i = 0; i < N; i++ )
    {
        for ( j = 0; j < N; j++ )
        {
            free( x[i][j] );
        }
        free( x[i] );
    }
    free( x );

    return 0;
}


