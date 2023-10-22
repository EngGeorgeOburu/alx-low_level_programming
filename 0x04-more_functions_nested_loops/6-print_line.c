#include "main.h"
/**
 * print_line - This function draws a straight line in terminal.
 *
 * @n: The number of times the character _ should be printed.
 *
 * Return:Always 0 (success).
 */
void print_line(int n)
{
	if (n <= 0)
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

