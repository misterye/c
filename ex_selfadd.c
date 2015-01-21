#include <stdio.h>

int main(int argc, char *argv[])
{
	int x = 2, y, z;
	printf("x = %d\n", x);
	y = ++x;
	printf("x = %d, y = %d\n", x, y);
	++x;
	printf("x = %d\n", x);
	y = ++x+2;
	printf("x = %d, y = %d\n", x, y);
	z = --x;
	printf("x = %d, z = %d\n", x, z);
	--x;
	printf("x = %d\n", x);

	return 0;
	}
