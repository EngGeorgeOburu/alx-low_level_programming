#include "main.h"
#include <string.h>
/**
 * void print_rev - The function that reverses a string
 *
 * @s: String used.
 */
void print_rev( char *s)
{
	int i;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
		len++;
	for(i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
