/*
 * w01-s09.c
 *
 * $ gcc w01-s09.c -o w01-s09
 * $ ./w01-s09
 */
#include <stdio.h>
 
int main(void)
{
    int i, num = 120;
    for ( i = 1; i < num; i++ )
    {
        if ( num % i == 0 )
        {
            printf("%dは%dで割り切れる。\n",num,i);
        }
    }
     
    return 0;
}

