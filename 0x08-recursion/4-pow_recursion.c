#include "main.h"
/**
 * _pow_recursion - Returns the value of power x rasied to y.
 * @x: input parameter x.
 * @y: input parameter y.
 * Return: The power of an interger.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
