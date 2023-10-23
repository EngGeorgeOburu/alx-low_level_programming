#include "main.h"
#include <string.h>
/**
 * _strchr - Function locates a character in a string.
 * @s: string used to find the character.
 * @c: character beig searched.
 */
char *_strchr(char *s, char c)
{
	char *find;

	find = strchr(s, c);
	return (find);
}
