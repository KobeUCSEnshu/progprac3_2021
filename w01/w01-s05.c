/*
 * w01-s05.c
 *
 * $ gcc w01-s05.c -o w01-s05 -lm
 * $ ./w01-s05
 */
#include <stdio.h>
#include <math.h>
 
int main(void)
{
    double a,b,c,d;
    
    printf("a = ");
    scanf("%lf",&a);
    
    printf("b = ");
    scanf("%lf",&b);
    
    printf("c = ");
    scanf("%lf",&c);
    
    d = b * b - 4 * a *c;
    if ( d >= 0 )
    {
        double ans1, ans2;
        ans1 = (-b+sqrt(d))/(2.0*a);
        ans2 = (-b-sqrt(d))/(2.0*a);
        printf("x = %lf, %lf\n",ans1,ans2);
    }
    else
    {
        double re, im;
        re = -b/(2.0*a);
        im = sqrt(-d)/(2.0*a);
        printf("x = %lf+%lfi, %lf-%lfi\n",re,im,re,im);
    }
    
    return 0;
}

