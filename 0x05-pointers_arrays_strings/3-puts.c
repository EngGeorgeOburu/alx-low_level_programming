#include "main.h"
#include <stdio.h>
/**
 * _puts - function parameter.
 *
 * @str: string.
 *
 * Return: Always 0 (success).
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
