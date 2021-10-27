/*
 * w04-s02
 *
 * $ gcc w04-s02.c -o w04-s02
 * $ ./w04-s02
 */
#include <stdio.h>

int counter = 0;

void func()
{
    counter++;
    printf("counter = %d\n", counter);
}

int main()
{
    func();
    return 0;
}


