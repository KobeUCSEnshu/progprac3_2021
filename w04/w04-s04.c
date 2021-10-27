/*
 * w04-s04
 *
 * $ gcc w04-s04.c -o w04-s04
 * $ ./w04-s04
 */
#include <stdio.h>

void func()
{
    static int a = 0;
    a++;
    printf("a = %d\n", a);
}

int main()
{
    func();
    func();
    func();

    return 0;
}


