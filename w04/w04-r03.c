/*
 * w04-r03
 *
 * $ gcc w04-r03.c -o w04-r03 -lm
 * $ ./w04-r03
 */
#include <stdio.h>
#include <math.h>

struct Point
{
    double x;
    double y;
};

struct Point set_Point( double x, double y )
{
    struct Point p;
    p.x = x;
    p.y = y;
    return p;
}

double distance_Point( struct Point p1, struct Point p2 )
{
    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;
    return sqrt( dx * dx + dy * dy );
}

int main()
{
    struct Point p1;
    struct Point p2;
    
    double x1, y1;
    double x2, y2;
    
    printf("x1 = ");
    scanf("%lf", &x1);

    printf("y1 = ");
    scanf("%lf", &y1);

    printf("x2 = ");
    scanf("%lf", &x2);

    printf("y2 = ");
    scanf("%lf", &y2);

    p1 = set_Point( x1, y1 );
    p2 = set_Point( x2, y2 );
    
    printf("p1: (%lf, %lf)\n", x1, y1);
    printf("p2: (%lf, %lf)\n", x2, y2);
    printf("Distance between p1 and p2: %lf\n", distance_Point(p1,p2));

    return 0;
}


