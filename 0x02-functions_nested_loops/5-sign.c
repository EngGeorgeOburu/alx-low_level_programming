<<<<<<< HEAD
#include <stdio.h>
/****/
int main()
{
	print_sign(int n);
	return (0);
}
=======
#include "main.h"
/**
 * Description:proram prints the sign of a number
 * Return:1 and print + if n is greater then zero
 * 0 and print 0 if n is zero
 * return -1 and prints - if n is  less than zero
 */
>>>>>>> origin/master
int print_sign(int n)
{
	if (n > 0)
	{
<<<<<<< HEAD
		putchar('+');
=======
		_putchar('+');
>>>>>>> origin/master
		return (1);
	}
	else if (n == 0)
	{
<<<<<<< HEAD
		putchar('0');
=======
		_putchar('-');
>>>>>>> origin/master
		return (0);
	}
	else
	{
<<<<<<< HEAD
		putchar('-1');
		return (-1);
	}
=======
		_putchar('-');
	}
	return (-1);
>>>>>>> origin/master
}
