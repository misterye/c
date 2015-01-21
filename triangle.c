#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int a, b, c;
	float cc, l, s;
	printf("Enter a, b, c: \n");
	scanf("%d%d%d", &a, &b, &c);
	cc = a + b + c;
	l = cc / 2;
	s = sqrt(l*(l-a)*(l-b)*(l-c));
	printf("cc = %f, s = %f\n", cc, s);

	return 0;
	}
