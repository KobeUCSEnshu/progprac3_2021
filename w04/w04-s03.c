/*
 * w04-s03
 *
 * $ gcc w04-s03.c -o w04-s03
 * $ ./w04-s03
 */
#include <stdio.h>

int counter = 0;

void func()
{
    int counter = 10;
    counter++;
    printf("counter = %d\n", counter);
}

int main()
{
    func();
    return 0;
}


