#include "main.h"
#include <ctype.h>
/**
 * *cap_string - The function capitalizes all words in a string.
 * @str: string parameter.
 * Return:Pointer.
 */
char *cap_string(char *str)
{
	int cap_next = 1;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (isalpha(str[i]))
		{
			if (cap_next || i == 0)
			{
				str[i] = toupper(str[i]);
			}
			else
			{
				str[i] = tolower(str[i]);
			}
			cap_next = 0;
			else if (isspace(str[i]) || ispunct(str[i]))
			{
				cap_next = 1;
			}
		}
	return (str);
	}
}
