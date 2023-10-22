#include <stdio.h>
/****/
int main()
{
	print_sign(int n);
	return (0);
}
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-1');
		return (-1);
	}
}
