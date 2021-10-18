/*
 * w02-r02.c
 *
 * $ gcc w02-r02.c -o w02-r02
 * $ ./w02-r02
 */
#include <stdio.h>

int countday( int month )
{
    switch ( month )
    {
        case 2:
            return 28;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        default:
            return 31;
    }
}

int main()
{
    int i;
    int month, day;
    int days;

    printf("Month? ");
    scanf("%d",&month);

    printf("Day? ");
    scanf("%d",&day);

    days = day;
    for ( i = 1; i < month; i++ )
    {
        days += countday(i);
    }

    printf("%d days.", days);

    return 0;
}



