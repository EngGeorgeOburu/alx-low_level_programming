#include "main.h"
/**
 * main - Entry point 
 * print_diagonal: draws a diaognal line on the terminal
 * Return: Always 0 (success)
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int m, p;
		
		for (m = 0; m < n; m++)
	{
		for (p = 0; p < n; p++)
		{
			if (m == p)
				_putchar('\');
			else if (p < m)
				_putchar(' ');
		}
		_putchar('\n');
	}
	}
}
