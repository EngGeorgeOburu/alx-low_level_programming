#include "main.h"
/**
 * void puts2 - The function prints every character
 *
 * of a string followed by a new line.
 *
 */
void puts2(char *str)
{
	int i;
	int len = strlen(str);

	for (i = 0; i < 10; i++)
	{
		if(str[i] != '\0')
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}
