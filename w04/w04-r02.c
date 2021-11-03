/*
 * w04-r02
 *
 * $ gcc w04-r02.c -o w04-r02
 * $ ./w04-r02
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

struct gstudent max_height_gstudent( struct gstudent *gs, int n )
{
    int index = 0;
    int height = gs[0].height;
    for ( int i = 1; i < 5; i++ )
    {
        if ( height < gs[i].height )
        {
            index = i;
            height = gs[i].height;
        }
    }
    return gs[index];
}

void show_gstudent( struct gstudent *gs )
{
    printf("%s %d %f %ld\n", gs->name, gs->height, gs->weight, gs->schols);
}

int main()
{
    struct gstudent s[5] = {
        set_gstudent( "Mike", 165, 72.0, 70000 ),
        set_gstudent( "John", 185, 61.0, 60000 ),
        set_gstudent( "Mary", 162, 54.0, 80000 ),
        set_gstudent( "Lisa", 171, 63.0, 90000 ),
        set_gstudent( "Paul", 177, 90.0, 50000 )
    };

    struct gstudent t = max_height_gstudent( s, 5 );

    show_gstudent( &t );

    return 0;
}



