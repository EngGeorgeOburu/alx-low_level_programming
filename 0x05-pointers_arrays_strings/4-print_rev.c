#include "main.h"
#include <string.s>
/**
 * void print_rev - The function prints string in reverse.
 *
 */
void print_rev(char *s)
{
	int len = strlen(str);
	int i;

	for (i = len; i >= 0; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

