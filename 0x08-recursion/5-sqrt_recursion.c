#include "main.h"
#include <math.h>
/**
 * _sqrt_recursion - prints the natural squareroot of a number.
 * @n: input number.
 * Return: The squareroot of an interger.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (sqrt(n));
	}
}
