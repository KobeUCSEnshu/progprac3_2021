/*
 * w05-s04
 *
 * $ gcc w05-s04.c -o w05-s04
 * $ ./w05-s04
 */
#include <stdio.h>

int main()
{
    int id = 1;
    int* pid = &id;
	char c = 'A';
    char* pc = &c;

	printf("size of id = %d\n", sizeof(id));
	printf("size of pid = %d\n", sizeof(pid));
	printf("size of *id = %d\n", sizeof(*pid));
	printf("size of c = %d\n", sizeof(c));
	printf("size of pc = %d\n", sizeof(pc));
	printf("size of *pc = %d\n", sizeof(*pc));

	return 0;
}


