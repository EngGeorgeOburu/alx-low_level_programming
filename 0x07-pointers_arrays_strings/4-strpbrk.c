#include "main.h"
#include <string.h>
/**
 * _strpbrk - Searches a string for a set of bytes.
 * @s: string parameter.
 * @accept: bytes being searched.
 */
char *_strpbrk(char *s, char *accept)
{
	char *search;

	search = strpbrk(s,accept);
	return (search);
}
