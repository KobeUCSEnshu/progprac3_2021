/*
 * w03-s03.c
 *
 * $ gcc w03-s03.c -o w03-s03
 * $ ./w03-s03
 */
#include <stdio.h>

int main()
{
    int a, b;
    int *p;
    int arr[3];

    a = 100;
    b = 200;
    arr[0] = 300;
    arr[1] = 400;
    arr[2] = 500;
    p = &a;

    printf("%d\n", *p);
    *p = b;
    printf("%d\n", *p);
    p = arr;
    printf("%d\n", p[1]);

    return 0;
}



