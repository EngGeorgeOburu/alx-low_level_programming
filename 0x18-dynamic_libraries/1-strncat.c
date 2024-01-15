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
	int i;
	int dest_len = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
