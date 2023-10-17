#include "main.h"
#include <string.h>
/**
 * puts_half - The function prints half of a string.
 *
 * @str: Function parameter
 */
void puts_half(char *str)
{
	int i;
	int length_of_the_string = 0;
	int n = (length_of_the_string - 1) / 2;

	for (i = 0; str[i] != '\0'; i++)
	{
		length_of_the_string++;
	}
	for (i = n + 1; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
		_putchar('\n');
	
}
