#include "main.h"
/**
 * puts2 - The function prints every character
 *
 * of a string followed by a new line.
 *
 * @str: function prameter.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
