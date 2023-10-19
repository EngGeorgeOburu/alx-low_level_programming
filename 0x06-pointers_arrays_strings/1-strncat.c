#include "main.h"
#include <string.h>
/**
 * *_strncat - The funtion concatenates two strings using n bytes.
 * @src: appending string from.
 * @dest: appending string to.
 * @n: interger bytes fromsrc.
 * Return:dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
