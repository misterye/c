#include <stdio.h>

int main(int argc, char *argv[])
{
	int x, y, z;
	float sum, avg;
	printf("Enter three scores: \n");
	scanf("%d%d%d", &x, &y, &z);
	sum = x + y + z;
	avg = sum / 3;
	printf("Print sum and average: \n");
	printf("sum = %.2f, avg = %.2f\n", sum, avg);

	return 0;
	}
