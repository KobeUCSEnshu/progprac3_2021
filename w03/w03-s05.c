/*
 * w03-s05.c
 *
 * $ gcc w03-s05.c -o w03-s05
 * $ ./w03-s05
 */
#include <stdio.h>

void call_value( int x, int y )
{
    x = x - 1; y = y - 1;
	printf("call_value内でのx,y値はx=%d, y=%dです\n",x,y);
}

void call_ref( int *x, int *y )
{
    *x = *x - 1; *y = *y - 1;
	printf("call_ref内での*x,*y値はx=%d, y=%dです\n",*x,*y);
}

int main()
{
    int x = 10;
    int y = 9999;

    printf("mainでのx,yの値はx=%d,y=%dです（呼び出し前)\n",x,y);
    call_value( x, y );
    printf("mainでのx,yの値はx=%d,y=%dです（call_value後)\n",x,y);
    call_ref( &x, &y );
    printf("mainでのx,yの値はx=%d,y=%dです（call_ref後)\n",x,y);

    return 0;
}




