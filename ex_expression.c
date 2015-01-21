#include <stdio.h>

int main(int argc, char *argv[])
{
	/*
	int a = 2, b = 3;
	float x = 3.5, y = 2.5;
	float express;
	express = (float)(a+b)/2+(int)x%(int)y;
	printf("express = %f\n", express);
	*/
	int x, y, z;
	float a, b, c;
	x = 1; y = 2; z = 3;
	a  = 1.1; b = 2.1; c = 3.5;
	x = x + y + z;
	printf("x = %d\n", x);
	y *= y + 1;
	printf("y = %d\n", y);
	z = (int)a%(int)b;
	printf("z = %d\n", z);
	a += a + b + c;
	printf("a = %f\n", a);

	return 0;
	}
