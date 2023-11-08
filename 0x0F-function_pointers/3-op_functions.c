#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - adds two numbers
 * op_sub - Subtracts two numbers
 * op_mul - multiplies two numbers
 * op_div - Divides two numbers
 */
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
		exit(100);
	}
	return (a / b);
}
