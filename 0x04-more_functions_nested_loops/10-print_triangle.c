#include "main.h"
/**
 * print_triangle - The function prints a triangle.
 *
 * @size: indicates the size of the triangle.
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int m, p, q;

		for (m = 1; m <= size; m++)
		{
			for (p = 1; p <= size - m; p++)
			{
				_putchar(' ');
			}
			for (q = 1; q <= m; q++)
			{
			_putchar('#');
			}
			_putchar('\n');
		}
	}
}
