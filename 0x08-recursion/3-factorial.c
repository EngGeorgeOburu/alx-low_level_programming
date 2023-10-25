#include "main.h"
/**
 * factorial - returns the factorial of any number.
 * @n: The input parameter.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if ( n > 0)
	{
		return (n *= n - 1);
	}
	else
	{
		return (1);
	}
	return (0);
}
