#include <stdio.h>
#define PI 3.14

int main(int argc, char *argv[])
{
	float r, s, c;
	printf("Enter r: \n");
	scanf("%f", &r);
	s = PI*r*r;
	c = 2*PI*r;
	printf("s = %f, c = %f\n", s, c);

	return 0;
	}
