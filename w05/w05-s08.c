/*
 * w05-s08
 *
 * $ gcc w05-s08.c -o w05-s08
 * $ ./w05-s08
 */
#include <stdio.h>

int main()
{
    int v[5] = {1,2,3,4,5};
    int* p0;

    int i;
    for ( i = 0; i < 5; i++ )
    {
	    printf("v[%d] = %d\n", i, v[i]);
    }

    for ( i = 0; i < 5; i++ )
    {
	    printf("&v[%d] = %p\n", i, &v[i]);
    }

    /* 配列vの先頭要素の
     * アドレスをp0に代入
     * する。
	 *
	 * []なし配列名は、先頭アドレスを
	 * 示すので、「p0 = v;」でもOK
     */
	p0 = &v[0];

	printf("p0 = %p\n", p0);
	printf("*p0 = %d\n", *p0);
	printf("p0+1 = %p\n", p0+1);
	printf("*(p0+1) = %d\n", *(p0+1));

    return 0;
}


