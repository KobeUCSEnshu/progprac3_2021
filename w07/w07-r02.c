/*
 * w07-r02
 *
 * $ gcc w07-r02.c -o w07-r02
 * $ ./w07-r02
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char item[50];
    int price;
} Expense;

Expense* Expense_new( int n )
{
    return malloc( n * sizeof(Expense) );
}

void Expense_delete( Expense* e )
{
    free( e );
}

void Expense_set_item( Expense* e, char* item )
{
    strcpy( e->item, item );
}

void Expense_set_price( Expense* e, int price )
{
    e->price = price;
}

void Expense_swap( Expense* e1, Expense* e2 )
{
    Expense tmp = *e1;
    *e1 = *e2;
    *e2 = tmp;
}

void Expense_sort( Expense* e, int n )
{
    int i, j;
    for ( i = 0; i < n - 1; i++ )
    {
        for ( j = n - 1; j > i; j-- )
        {
            if ( e[j-1].price < e[j].price )
            {
                Expense_swap( &e[j-1], &e[j] );
            }
        }
    }
}

void Expense_print( Expense* e )
{
    printf("(item, price) = (%s, %d)\n", e->item, e->price);
}

int main()
{
    int i;
    int n;
    Expense* e;

    n = 0;
    while ( n < 5 )
    {
        printf("Number of items ? ");
        scanf("%d", &n);
        if ( n < 5 )
        {
            printf("The number of items must be equal or greater than 5.\n");
        }
    }

    e = Expense_new( n );
    if ( !e )
    {
        printf("Memory allocation failed.");
        return 1;
    }

    printf("\n");
    printf("Please input %d items.\n", n);
    for ( i = 0; i < n; i++ )
    {
        char item[50];
        int price;

        printf("item[%d] ? ", i);
        scanf("%s", item);
    
        printf("price[%d] ? ", i);
        scanf("%d", &price);

        Expense_set_item( &e[i], item );
        Expense_set_price( &e[i], price );
    }

    printf("\n");
    printf("Input items.\n");
    for ( i = 0; i < n; i++ )
    {
        Expense_print( &e[i] );
    }

    printf("\n");
    printf("Sorting...\n");
    Expense_sort( e, n );

    printf("\n");
    printf("Sorted items.\n");
    for ( i = 0; i < n; i++ )
    {
        Expense_print( &e[i] );
    }

    free(e);

    return 0;
}



