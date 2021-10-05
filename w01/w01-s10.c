/*
 * w01-s10.c
 *
 * $ gcc w01-s10.c -o w01-s10
 * $ ./w01-s10
 */
#include <stdio.h>
 
int mycalc( int x, int y, int z );

int main(void)
{
    int a, b, c, d, e, f, g, h;

    a = 1;
    b = 2;
    c = 3;
    d = mycalc( a, b, c );
    printf("d = %d\n",d);
    
    e = 4;
    f = 5;
    g = 6;
    h = mycalc( e, f, g );
    printf("h = %d\n",h);
    
    return 0;
}
 
int mycalc( int x, int y, int z )
{
    return ( x + y + z ) * ( x + y + z );
}

