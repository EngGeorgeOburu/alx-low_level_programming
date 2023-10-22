#include "main.h"
/**
 * print_square - The function prints a square.
 *
 * @size: The size of the square.
 *
 * Return:Always 0 (success)
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int m, p;

		for (m = 0; m < size; m++)
		{
			for (p = 0; p < size; p++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
