#include "main.h"
#include <string.h>
/**
 * char *_strcpy - The functions copies the string pointed to by src.
 * 
 * @src: Copies string from.
 *
 * @dest: Copies to
 * **/
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int n = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for (;x < i; x++)
	{
		dest[n] = src[n];
	}
	dest[i] = '\0';
	return (dest);
}
