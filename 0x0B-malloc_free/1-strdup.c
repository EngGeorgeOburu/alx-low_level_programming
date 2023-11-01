#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - Function returns a pointer to a newly located place in memory.
 * @str: String parameter used.
 * @updated_str: Second string parameter.
 */
char *_strdup(char *str)
{
	char *updated_str;
	if (str == NULL)
	{
		return (NULL);
	}
	updated_str = malloc(strlen(str));
	if (updated_str == NULL)
	{
		return (NULL);
	}
	strcpy(updated_str,str);
	return (updated_str);
}
