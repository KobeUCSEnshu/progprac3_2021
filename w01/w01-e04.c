/*
 * w01-e04.c
 *
 * $ gcc w01-e04.c -o w01-e04
 * $ ./w01-e04
 */
#include <stdio.h>

int factorial( int n )
{
    int x;
    if ( n > 0 )
    {
        x = n * factorial(n-1);
    }
    else
    {
        x = 1;
    }

    return x;
}

int main()
{
    int x;
    printf("x = ");
    scanf("%d",&x);

    printf("%d! = %d", x, factorial(x));

    return 0;
}

