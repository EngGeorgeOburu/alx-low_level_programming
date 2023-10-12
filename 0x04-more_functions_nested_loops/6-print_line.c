#include "main.h"
/**
 * main -Entry point
 * print_line:draws a straight line in terminal
 * Return:Always 0 (success)
 */
void print_line(int n)
{
	if (n<= 0)
	{
		_putchar('\n');
	}
	else
	{
		int j;

		for (j = 1; j <= n; j++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

