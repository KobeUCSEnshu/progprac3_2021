/*
 * w01-s06.c
 *
 * $ gcc w01-s06.c -o w01-s06
 * $ ./w01-s06
 */
#include <stdio.h>
 
int main(void)
{
    /* while loop */
    {
        int sum = 0;
        int k = 1;
        while ( k <= 10 )
        {
            sum += k;
            k++;
        }
        printf("while loop: sum = %d\n",sum);
    }
     
    /* do-while loop */
    {
        int sum = 0;
        int k = 1;
        do
        {
            sum += k;
            k++;
        } while ( k <= 10 );
        printf("do-while loop: sum = %d\n",sum);
    }
    
    /* for loop */
    {
        int sum = 0;
        int k;
        for ( k = 1; k <= 10; k++ )
        {
            sum += k;
        }
         printf("for loop: sum = %d\n",sum);
    }
     
    return 0;
}

