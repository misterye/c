#include<stdio.h>

void proc(int m, int *a, int *n)
{
	int i;
	*n = 0;
	for(i = 1; i <= m; i++)
	{
		if(i%7==0||i%11==0)
		{
			a[*n] = i;
			(*n)++;
			}
		}
	}

void main()
{
	int a[100], m = 100, n, k;
	proc(m, a, &n);
	for(k = 0; k < n; k++)
	{
		printf("%4d", a[k]);
		if((k+1)%5 == 0)
			printf("\n");
		}
	printf("\n");
	}
