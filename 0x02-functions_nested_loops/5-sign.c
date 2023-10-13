#include "main.h"
/**
 * Description:proram prints the sign of a number
 * Return:1 and print + if n is greater then zero
 * 0 and print 0 if n is zero
 * return -1 and prints - if n is  less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('-');
		return (0);
	}
	else
	{
		_putchar('-');
	}
	return (-1);
}
