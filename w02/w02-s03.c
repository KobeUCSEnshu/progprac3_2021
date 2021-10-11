/*
 * w02-s03.c
 *
 * $ gcc w02-s03.c -o w02-s03
 * $ ./w02-s03
 */
#include <stdio.h>

void change(int data);

void main(void)
{
	int d = 70;
	change(d);
	printf("d is %d\n",d);
}

void change(int data)
{
	data = 0;
}

