#include<stdio.h>

int proc(STREC *a, STREC *b, int l, int h)
{
	int i, n = 0;
	for(i = 0; i < 100; i++)
		if(a[i].score >= l && a[i].score <= h)
		{
			b[n] = a[i];
			n++;
			}
		return n;
	}

void main()
{
	STREC stu[100], h[100];
	int i, n, low, high;
	for(i = 0; i < 100; i++)
		scanf("%s%d", stu[i].num, &stu[i].score);
	scanf("%d%d", &low, &high);
	n = proc(stu, n, low, high);
	printf("numbers of %d----%d is %d\n", low, high, n);
	for(i = 0; i < n; i++)
		printf("%s%d\n",h[i].num, h[i].score);
	}
