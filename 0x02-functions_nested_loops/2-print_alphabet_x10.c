#include "main.h"
/**
 * print_alphabet_x10:prints 10x alphabets in lower case
 */
void print_alphabet_x10(void)
{
	char i;
	int n;

	for (i = 'a'; i <= 'z'; i++)
	{
		for (n = 0; n < 10; n++)
		{
			_putchar(i);
		}
		putchar('\n');
	}
}
