/*
 * w07-r01
 *
 * $ gcc w07-r01.c -o w07-r01
 * $ ./w07-r01
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char item[50];
    int price;
    
} Expense;

int main()
{
    Expense* e;

    e = malloc( 1 * sizeof(Expense) );
    
    printf("item ? ");
    scanf("%s", e->item);
    
    printf("price ? ");
    scanf("%d", &e->price);

    printf("(item, price) = (%s, %d)\n", e->item, e->price);

    free(e);

    return 0;
}


