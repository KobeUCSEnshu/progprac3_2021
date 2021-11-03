/*
 * w04-e01
 *
 * $ gcc w04-e01.c -o w04-e01
 * $ ./w04-e01
 */
#include <stdio.h>

typedef struct meibo
{
    int no;
    char name[11];
    int age;
} mb;

void swap( mb* a, mb* b )
{
    mb tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    mb t[5] = {
        {1, "Suzuki", 19},
        {2, "Sato", 18},
        {3, "Tanaka", 20},
        {4, "Yamamoto", 45},
        {5, "Watanabe", 37}
    };
    
    printf("Before\n");
    for ( int i = 0; i < 5; i++ )
    {
        printf("%d, %s, %d\n", t[i].no, t[i].name, t[i].age);
    }

    swap( &t[0], &t[1] );

    printf("After\n");
    for ( int i = 0; i < 5; i++ )
    {
        printf("%d, %s, %d\n", t[i].no, t[i].name, t[i].age);
    }

    return 0;
}


