#include <stdio.h>
#include "calc.h"
/****/
int op_add(int a, int b)
{
	return (a + b);
}
int op_sub(int a, int b)
{
	return (a - b);
}
int op_mul(int a, int b)
{
	return (a * b);
}
int op_div(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit (100);
	}
	return (a / b);
}