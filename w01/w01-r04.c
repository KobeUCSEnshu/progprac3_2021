/*
 * w01-r04.c
 *
 * $ gcc w01-r04.c -o w01-r04
 * $ ./w01-r04
 */
#include <stdio.h>

int fibo( int n )
{
    if ( n <= 2 ) return 1;
    return fibo(n-1) + fibo(n-2);
}

int main()
{
    int n;
    for ( n = 1; n <= 20; n++ )
    {
        printf("第%d項：%d\n",n,fibo(n));
    }

    return 0;
}

