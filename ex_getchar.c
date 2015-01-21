#include <stdio.h>

int main(int argc, char *argv[])
{
	char ch;
	printf("Enter a character: \n");
	ch = getchar();
	putchar(ch);
	putchar('\n');
	putchar(getchar());
	putchar('\n');

	return 0;
	}
