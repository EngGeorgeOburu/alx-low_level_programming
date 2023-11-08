#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - adds two numbers
 * @a: The first number to add
 * @b: Second integer number
 * Return: Addition result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Subtracts two numbers
 * @a: First number
 * @b: second number
 * Return: Subtraction result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Multi[lies two numbers
 * @a: First number
 * @b: second number
 * Return: Multiplication result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Divides two numbers
 * @a: firstnumber
 * @b: second number
 * Return: Division results
 */
int op_div(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
