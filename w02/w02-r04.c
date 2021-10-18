/*
 * w02-r04.c
 *
 * $ gcc w02-r04.c -o w02-r04
 * $ ./w02-r04
 */
#include <stdio.h>

int main()
{
    int i, p;
    char s[100];

    printf("String? ");
    scanf("%s", s);

    for ( i = 0; i < 100; i++ )
    {
        if ( s[i] == '\0' )
        {
            p = i;
            break;
        }
    }
    
    for ( i = p; i >= 0; i-- )
    {
        printf("%c",s[i]);
    }
    printf("\n");

    return 0;
}




