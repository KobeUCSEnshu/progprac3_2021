/*
 * w04-r01
 *
 * $ gcc w04-r01.c -o w04-r01
 * $ ./w04-r01
 */
#include <stdio.h>
#include <string.h>

struct gstudent
{
    char name[20];
    int height;
    float weight;
    long schols;
};

struct gstudent set_gstudent( char name[], int height, float weight, long schols )
{
    struct gstudent s;
    strcpy( s.name, name );
    s.height = height;
    s.weight = weight;
    s.schols = schols;
    return s;
}

void show_gstudent( struct gstudent *gs )
{
    printf("%s %d %f %ld\n", gs->name, gs->height, gs->weight, gs->schols);
}

int main()
{
    struct gstudent s = set_gstudent( "Mike", 165, 72.0, 70000 );
    show_gstudent( &s );

    return 0;
}


