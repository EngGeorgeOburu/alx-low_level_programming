#include "main.h"
#include <string.h>
/**
 * _ strspn - Gets the lenth of a prefix substring.
 * @s: The string parameter.
 * @accept: substring parameter.
 * Return: String.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int m;

	m = strspn(s, accept);
	return (m);
}
