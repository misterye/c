#include <stdio.h>

int main(int argc, char *argv[])
{
	char c1, c2;
	int x, y;
	printf("Please enter the grade and Name of student A: \n");
	scanf("%d:%c", &x, &c1);
	printf("Please enter the grade and Name of student B: \n");
	scanf("%d:%c", &y, &c2);
	printf("Output the Name and grade of student A: \n");
	printf("%c:%d\n", c1, x);
	printf("Output the Name and grade of student B: \n");
	printf("%c:%d\n", c2, y);

	return 0;
	}
