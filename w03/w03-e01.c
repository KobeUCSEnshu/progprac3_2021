/*
 * w03-e01.c
 *
 * $ gcc w03-e01.c -o w03-e01
 * $ ./w03-e01
 */
#include <stdio.h>

int main()
{
    char str[] = "hi there";
    int i = 0;
    printf("%s\n",str);
    printf("%d\n",i);
    while ( str[i] != '\0')
    {
        putchar(str[i]);
        putchar('\n');
        i++;
    }
    return 0;
}

