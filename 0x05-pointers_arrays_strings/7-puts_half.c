#include "main.h"
#include <string.h>
/**
 * puts_half - The function prints half of a string.
 *
 * @str: Function parameter.
 *
 * Retur:half of input.
 */
void puts_half(char *str)
{
	int i;
	int n;
	int len = 0;

	for (i = 0; str[i] != '\0'; i++)
		len++;
	n = (len / 2);
	if ((len % 2) == 1)
		n = ((len + 1) / 2);
	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
