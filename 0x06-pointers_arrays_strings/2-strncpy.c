#include "main.h"
#include <string.h>
/**
 * _strncpy - The function copies a string.
 * @dest: string parameter.
 * @src: string parameter.
 * @n: An interger number.
 * Return:dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *dest_start_point = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		dest = '\0';
		dest++;
		n--;
	}
	return (dest_start_point);
}
