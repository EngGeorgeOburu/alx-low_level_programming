#include "main.h"
/**
 * main - Entry point of the program
 * print_triangle:prints a triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int m, p;

		for (m = 1; m <= size; m++)
		{
			for (p = m; p <= size; p++)
			{
				_putchar(' ');
			}
			for (p = 1; p <= size; p++)
			{
				_putchar('#');
			_putchar('\n');
		}
	}
}
