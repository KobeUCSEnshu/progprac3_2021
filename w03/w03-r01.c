/*
 * w03-r01
 *
 * $ gcc w03-r01.c -o w03-r01
 * $ ./w03-r01
 */
#include <stdio.h>
 
int main()
{
    int a;
    float b;
    double c;
    
    int* pa;
    float* pb;
    double* pc;
    
    a = 1;
    b = 1.2;
    c = 1.23;
    
    pa = &a;
    pb = &b;
    pc = &c;
    
    printf("a = %d\n", *pa);
    printf("b = %f\n", *pb);
    printf("c = %lf\n", *pc);
    
    return 0;
}


