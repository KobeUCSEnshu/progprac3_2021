/*
 * w03-r04
 *
 * $ gcc w03-r04.c -o w03-r04
 * $ ./w03-r04
 */
#include <stdio.h>

void swap( int* a, int* b )
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void sort( int* a, int* b, int* c )
{
    if ( *a > *b ) swap( a, b );
    if ( *a > *c ) swap( a, c );
    if ( *b > *c ) swap( b, c );
}

int main()
{
    int a, b, c;
    
    printf("a = ");
    scanf("%d",&a);
    
    printf("b = ");
    scanf("%d",&b);

    printf("c = ");
    scanf("%d",&c);
    
    printf("before sort: a = %d, b = %d, c = %d\n",a,b,c);
    sort(&a,&b,&c);
    printf("after swap: a = %d, b = %d, c = %d\n",a,b,c);

    return 0;
}



