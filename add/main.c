#include <stdio.h>
#include "add.h"

int echo(int a)
{
	printf("%d\n", a);
}

int main(void)
{	
	int a = 11;
	int b = 20;
	//'a' != a
	//”a“ != a
	int c = add(a,b);
	printf("a = %d  b = %d\n", a, b);
	printf("a + b = %d\n", c);

	/*
	extern int jianfa(int a, int b);
	extern int chengfa(int a, int b);
	extern int chufa(int a, int b);
	extern int sum(int a, int N);
	*/
	
	int x = jianfa(a, b);
	printf("a - b = ");
	echo(x);
	
	x = chengfa(a, b);
	printf("a * b = ");
	echo(x);
	
	x = chufa(a, b);
	printf("a / b = ");
	echo(x);
	
	x = sum(a, b);
	printf("a + ... +  b = ");
	echo(x);
	
	return 0;
}