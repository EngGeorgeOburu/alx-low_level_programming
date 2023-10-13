#include "main.h"
/**
 * main - Entry point of the program.
 *
 * more_numbers - prints 10 times numbers from 0 to 14.
 *
 * Results:Always 0 (success)
 */
void more_numbers(void)
{
	int i, n;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n < 15; n++)
		{
		       _putchar(n % 10 + '0');
		}
	}
	_putchar('\n');
}
