#include "main.h"
/**
 * main - Entry point of program.
 *
 * print_most_numbers - Print numbers from 0 to 9 except 2 and 4.
 *
 * Return:Always 0 (success).
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
			_putchar(i);
	}
	_putchar('\n');
}
