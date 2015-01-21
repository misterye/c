#include<stdio.h>

void fun(int *s, int *p)
{
	static int t = 3;
	*p = s[t];
	t--;
	}

void main()
{
	int a[] = {2, 3, 4, 5}, k, x;
	for(k = 0; k < 4; k++){
		fun(a, &x);
		printf("%d\n", x);
		}
	}
