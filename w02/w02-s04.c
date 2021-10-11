/*
 * w02-s04.c
 *
 * $ gcc w02-s04.c -o w02-s04
 * $ ./w02-s04
 */
#include <stdio.h>

void change(int data[], int num);

void main(void)
{
	int d[7] = {76,54,84,92,43,77,52};
	change(d, 7);
	printf("d[0] is %d\n",d[0]);
}

void change(int data[], int num)
{
	data[0] = 0;
}

