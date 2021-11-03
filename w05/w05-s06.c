/*
 * w05-s06
 *
 * $ gcc w05-s06.c -o w05-s06
 * $ ./w05-s06
 */
#include <stdio.h>

void func( double x )
{
	x += 1.0;
	printf("in func: %lf\n",x);
}

int main()
{
    double x = 1.0;
	printf("before: %lf\n",x);
    func(x);
    printf("after: %lf\n",x);

    return 0;
}


