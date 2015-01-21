#include <stdio.h>

void proc(char *a)
{
	char *p = a;
	while(*a)
		if(*a != '*')
		{
			*p = *a;
			p++;
			a++;
			}
			else a++;
	*p != '\0';
	}

void main()
{
	char str[81];
	gets(str);
	proc(str);
	printf("%s\n", str);

	return 0;
	}
