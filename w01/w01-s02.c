/*
 * w01-s02.c
 *
 * $ gcc w01-s02.c -o w01-s02
 * $ ./w01-s02
 */
#include <stdio.h>

int main(void)
{
    int a,b,c;
    a = 3;
    b = 2;
    c = a/b;
    printf("3/2 = %d\n",c);

    double d,e,f;
    d = 3;
    e = 2;
    f = d/e;
    printf("3/2 = %lf\n",f);

    return 0;
}

