#include "main.h"
/**
 * _pow_recursion - Returns the value of power x rasied to y.
 * @x: input parameter x.
 * @y: input parameter y.
 */
int _pow_recursion(int x, int y)
{
	int result;

	if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (result = x * y);
	}
	return (0);
}
