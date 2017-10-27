/* push.c */

#include <stdio.h>

extern char stack[512];
extern int top;

void push(char c)
{
	printf("Function push!\n");
	stack[++top] = c;
}