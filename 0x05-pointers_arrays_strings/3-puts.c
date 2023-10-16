#include "main.h"
#include <stdio.h>
/**
 * main - Entry point of the program.
 *
 * void_puts -  This function prints a string.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
