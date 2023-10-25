#include "main.h"
#include <string.h>
/**
 * wildcmp - Compares two string.
 * @s1: First string parameter.
 * @s2: Second string parameter.
 */
int wildcmp(char *s1, char *s2)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);

	if (len1 == len2)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
