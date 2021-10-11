/*
 * w01-e01.c
 *
 * $ gcc w01-e01.c -o w01-e01
 * $ ./w01-e01
 */
#include <stdio.h>

int min2( int x, int y )
{
    if ( x < y ) { return x; }
    else { return y; }
}

int max2( int x, int y )
{
    if ( x > y ) { return x; }
    else { return y; }
}

int min3( int x, int y, int z )
{
    return min2( min2( x, y ), z );
}

int max3( int x, int y, int z )
{
    return max2( max2( x, y ), z );
}

int main()
{
    int a, b, c;
    
    a = 0;
    printf("a = ");
    scanf("%d", &a);

    b = 0;
    printf("b = ");
    scanf("%d", &b);

    c = 0;
    printf("c = ");
    scanf("%d", &c);

    if ( max3(a,b,c) % 2 == 0 )
    {
        printf("max - min = %d\n", max3(a,b,c) - min3(a,b,c));
    }
    else
    {
        printf("max + min = %d\n", max3(a,b,c) + min3(a,b,c));
    }

    return 0;
}

