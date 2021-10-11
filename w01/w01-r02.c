/*
 * w01-r02.c
 *
 * $ gcc w01-r02.c -o w01-r02
 * $ ./w01-r02
 */
#include <stdio.h>

int main()
{
    int i;
    int n; /* 自然数 */
    int p; /* 素数の判定フラグ：0→素数、1→素数でない */

    printf("自然数を入力してください: ");
    scanf("%d",&n);

    /* 素数の判定 */
    p = 0;
    for ( i = 2; i < n; i++ )
    {
        if ( n % i == 0 )
        {
            /* 1とn以外にiで割り切れるので素数ではない */
            p = 1;
            break;
        }
    }

    /* 結果の表示 */
    if ( p == 0 && n > 1 )
    {
        printf("自然数%dは素数です。\n",n);
    }
    else
    {
        printf("自然数%dは素数ではありません。\n",n);
    }

    return 0;
}

