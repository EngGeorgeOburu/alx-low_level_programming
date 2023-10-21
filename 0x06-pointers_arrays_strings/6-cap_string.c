#include "main.h"
/**
 * *cap_string - The function capitalizes all words in a string.
 * @str: string parameter.
 * Return:Pointer.
 * @c: character input.
 * is_sep: The function creates an array of separators.
 */
int is_sep(char c)
{
	char sep[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; sep[i]; i++)
	{
		if (sep[i] == c)
		{
			return (1);
		}
	}
	return (0);
}
char *cap_string(char *str)
{
	int cap_next = 1;
	int i;

	for (i = 0; str[i]; i++)
	{
		if (is_sep(str[i]))
		{
			cap_next = 1;
		}
		else if (cap_next && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			cap_next = 0;
		}
		else
		{
			cap_next = 0;
		}
	}
	return (str);
}
