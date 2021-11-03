/*
 * w05-s07
 *
 * $ gcc w05-s07.c -o w05-s07
 * $ ./w05-s07
 */
#include <stdio.h>

void func( double* x )
{
	*x += 1.0;
	printf("in func: %lf\n",*x);
}

int main()
{
    double x = 1.0;
	printf("before: %lf\n",x);
    func(&x);
    printf("after: %lf\n",x);

    return 0;
}


