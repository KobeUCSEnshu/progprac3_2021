/*
 * w01-e02.c
 *
 * $ gcc w01-e02.c -o w01-e02
 * $ ./w01-e02
 */
#include <stdio.h>

int main()
{
    int gankin = 100000;
    float riritsu = 0.9;
    int yokin = gankin;
    
    int i;
    for ( i = 1; i < 20; i++ )
    {
        yokin += yokin * riritsu / 100.0f;
        if ( yokin >= 110000 ) { break; }
    }
    
    printf("%d years after\n", i);
    printf("%d yen\n", yokin);

    return 0;
}

