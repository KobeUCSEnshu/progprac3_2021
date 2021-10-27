/*
 * w04-s01
 *
 * $ gcc w04-s01.c -o w04-s01
 * $ ./w04-s01
 */
#include <stdio.h>

float triangle( int x, int y )
{
    float s;
    s = (float)(x*y)/2.0f;
    return s;
}

int main()
{
    int a, b;
    float c;
    
    a = 3;
    b = 5;
    c = triangle( a, b );
    
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %f\n", c);

    return 0;
}



