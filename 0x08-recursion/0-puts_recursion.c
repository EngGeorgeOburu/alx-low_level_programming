#include "main.h"
/**
 * _puts_recursion - prints a string.
 * @s: character string to be printed.
 * @num: variable to store numerical value.
 */
void _puts_recursion(char *s)
{
	int num = 1;

	if (*s == '\0')
	{
		_putchar('\n');
		return ;
	}
	_putchar(*s);
	_puts_recursion(s + num);
}

