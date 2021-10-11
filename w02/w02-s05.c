/*
 * w02-s05.c
 *
 * $ gcc w02-s05.c -o w02-s05
 * $ ./w02-s05
 */
#include <stdio.h>

void change(int data[][3]);

void main(void)
{
	int d[2][3] = { {1,2,3},
                    {4,5,6} };
	change(d);
	printf("d[1][2] is %d\n",d[1][2]);
}

void change(int data[][3])
{
	data[1][2] = 0;
}

