/*
 * w05-s10
 *
 * $ gcc w05-s10.c -o w05-s10
 * $ ./w05-s10
 */
#include <stdio.h>

int main()
{
    char a[][128] = {
        "12345",
        "A",
        "Vi8"
    };

    char* b[] = {
        "12345",
        "A",
        "Vi8"
    };

    printf("Array\n");
    printf("size of a[0] = %d\n", sizeof(a[0]));
    printf("size of a[1] = %d\n", sizeof(a[1]));
    printf("size of a[2] = %d\n", sizeof(a[2]));
    printf("size of \"12345\" = %d\n", sizeof("12345"));
    printf("size of \"A\" = %d\n", sizeof("A"));
    printf("size of \"Vi8\" = %d\n", sizeof("Vi8"));
    printf("\n");

    printf("Pointer\n");
    printf("size of b[0] = %d\n", sizeof(b[0]));
    printf("size of b[1] = %d\n", sizeof(b[1]));
    printf("size of b[2] = %d\n", sizeof(b[2]));
    printf("size of \"12345\" = %d\n", sizeof("12345"));
    printf("size of \"A\" = %d\n", sizeof("A"));
    printf("size of \"Vi8\" = %d\n", sizeof("Vi8"));

    return 0;
}


