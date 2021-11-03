/*
 * w05-s05
 *
 * $ gcc w05-s05.c -o w05-s05
 * $ ./w05-s05
 */
#include <stdio.h>

int main()
{
    int n = 10;
    int* pn = &n;

	/* nを20にする */
    *pn = 20; /* 「*pn += 10;」でもOK */

	printf("n = %d\n", n);
	return 0;
}


