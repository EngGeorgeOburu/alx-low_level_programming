#include "main.h"
/**
 * factorial - returns the factorial of any number.
 * @n: The input parameter.
 * Return: The factorial of an integer or -1 is negative.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
	return (n * factorial(n - 1));
	}
}
