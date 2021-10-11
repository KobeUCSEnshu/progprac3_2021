/*
 * w01-r03.c
 *
 * $ gcc w01-r03.c -o w01-r03
 * $ ./w01-r03
 */
#include <stdio.h>

int main()
{
    int n;
    int sum;

    n = 1;
    sum = 0;
    while (1)
    {
        sum += n;
        if ( sum >= 1000 ) { n--; break; }
        n++;
    }
    
    printf("n is %d\n", n);
    printf("1 + 2 + 3 + ... + %d = %d < 1000\n", n, sum-(n+1));

    return 0;
}

