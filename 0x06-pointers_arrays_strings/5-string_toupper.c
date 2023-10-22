#include "main.h"
#include <ctype.h>
/**
 * string_toupper - changes all the lowercase.
 * @str: pointer to input string.
 * Return: n
 */
char *string_toupper(char *str)
{
	char *n = str;

	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 'a' + 'A';
		}
		str++;
	}
	return (n);
}
