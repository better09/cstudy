#include <stdio.h>

int add(int a,int b)
{
	return a+b;
}

int jianfa(int a, int b)
{
	return a - b;
}

int chengfa(int a, int b)
{
	return a * b;
}

int chufa(int a, int b)
{
	return a / b;
}

int sum(int a, int N)
{
	if(a > N)
	{
		printf("a need xiaoyu N\n");
		return -1;
	}
	int sum = 0;
	for(int i = a; i <= N; i++)
	{
		sum = sum + i;
		//printf("i = %d\n", i);
		//printf("sum = %d\n", sum);
	}
	return sum;
}