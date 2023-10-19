#include "main.h"
#include <stdio.h>
/**
 * _strcmp - The function compares two string.
 * @s1: String parameter.
 * @s2: string parameter.
 * Return:dest.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s2 == *s1)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
