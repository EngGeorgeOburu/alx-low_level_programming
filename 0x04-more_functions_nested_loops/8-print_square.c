#include "main.h"
/**
 * main - Entry point of the program
 * print_square:prints a square
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
