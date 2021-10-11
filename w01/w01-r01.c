/*
 * w01-r01.c
 *
 * $ gcc w01-r01.c -o w01-r01
 * $ ./w01-r01
 */
#include <stdio.h>

int main(void)
{
    char c;
    printf("小文字のアルファベット１文字を入力してください: ");
    scanf("%c",&c);

    printf("'%c'の大文字は'%c'です。\n", c, c - 32);

    return 0;
}

