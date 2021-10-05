/*
 * w01-s01.c
 *
 * $ gcc w01-s01.c -o w01-s01
 * $ ./w01-s01
 */
#include <stdio.h>

int main(void)
{
    int a,b;
    float c;

    a = 15;
    c = 0.5;

    puts("Input addend number b:");
    scanf("%d",&b);

    printf("%d + %d = %d\n",a,b,a+b);
    printf("%d + %5.2f = %5.2f\n",b,c,b+c);

    return 0;
}