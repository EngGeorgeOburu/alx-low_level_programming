#include "main.h"
#include <string.h>
/**
 * *_strncat - The funtion concatenates two strings using n bytes.
 * @src: appending string from.
 * @dest: appending string to.
 * Return:dest
 */
char *_strncat(char *dest, char *src, int n)
{
	while (src = '\0' && n > 0)
	{
		dest = src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (dest);
}
