/*
 * w01-e03.c
 *
 * $ gcc w01-e03.c -o w01-e03
 * $ ./w01-e03
 */
#include <stdio.h>

int main()
{
    int x;
    printf("x = ");
    scanf("%d",&x);

    for (;;)
    {
        if ( x / 2 == 0 ) { break; }
        printf("%d mod 2 = %d\n", x, x%2);
        x = x / 2;
    }

    return 0;
}

