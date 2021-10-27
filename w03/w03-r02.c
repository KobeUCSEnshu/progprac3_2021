/*
 * w03-r02
 *
 * $ gcc w03-r02.c -o w03-r02
 * $ ./w03-r02
 */
#include <stdio.h>

int main()
{
    char c;
    int i;
    float f;
    double d;
    
    char* pc = &c;
    int* pi = &i;
    float* pf = &f;
    double* pd = &d;
    
    printf("%d\n",pc);
    printf("%d\n",pi);
    printf("%d\n",pf);
    printf("%d\n",pd);
    
    pc++;
    pi++;
    pf++;
    pd++;

    printf("\n");
    printf("%d\n",pc);
    printf("%d\n",pi);
    printf("%d\n",pf);
    printf("%d\n",pd);
    
    pc--;
    pi--;
    pf--;
    pd--;

    i = 1;
    f = 1;

    (*pi)++;
    (*pf)++;

    printf("%d\n",i);
    printf("%f\n",f);
    
    return 0;
}




