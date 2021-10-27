/*
 * w03-r03
 *
 * $ gcc w03-r03.c -o w03-r03
 * $ ./w03-r03
 */
#include <stdio.h>

void swap( int* a, int* b )
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    int a, b;
    
    printf("a = ");
    scanf("%d",&a);
    
    printf("b = ");
    scanf("%d",&b);
    
    printf("before swap: a = %d, b = %d\n",a,b);
    swap(&a,&b);
    printf("after swap: a = %d, b = %d\n",a,b);

    return 0;
}


