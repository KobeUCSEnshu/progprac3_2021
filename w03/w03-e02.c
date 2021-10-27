/*
 * w03-e02.c
 *
 * $ gcc w03-e02.c -o w03-e02
 * $ ./w03-e02
 */
#include <stdio.h>
#include <string.h>

void print_string( char* s )
{
    while ( *s != '\0' )
    {
        putchar( *s );
        s++;
    }
}

int main()
{
    char s1[100];
    char s2[100];
    
    printf("String 1: ");
    scanf("%s", s1);
    
    printf("String 2: ");
    scanf("%s", s2);
    
    if ( strcmp( s1, s2 ) >= 0 )
    {
        print_string( s1 );
    }
    else
    {
        print_string( s2 );
    }

    return 0;
}


