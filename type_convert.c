#include <stdio.h>

int main(int argc, char *argv[])
{
	int a = 123;
	long b = 123456;
	int c = 9;
	int d = 17;
	float e = 123.456;
	printf("a = %d, a = %5d, a = %-5d, a = %2d\n", a, a, a, a);
	printf("b = %ld, b = %8ld, b = %-8ld, b = %2ld\n", b, b, b, b);
	printf("a = %ld\n", a);
	printf("b = %d\n", b);
	printf("c = %d, %o\n", c, c);
	printf("d = %d, %x, %o\n", d, d, d);
	printf("e = %f, %10f, %10.2f, %.2f, %-10.2f\n", e, e, e, e, e);

	return 0;
	}
