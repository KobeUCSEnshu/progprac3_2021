/*
 * w01-s07.c
 *
 * $ gcc w01-s07.c -o w01-s07
 * $ ./w01-s07
 */
#include <stdio.h>
 
int main(void)
{
    int a;
     
    do
    {
        printf("正の数を入力して下さい。\n");
        scanf("%d",&a);
    } while ( a <= 0 );
     
    return 0;
}

