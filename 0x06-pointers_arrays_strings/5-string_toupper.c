#include "main.h"
#include <ctype.h>
/**
 * *string_toupper - The function changes all the lowercase letters of astring to upper case.
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
