#include "main.h"
#include <string.h>
/**
 * char *_strcpy - The functions copies the string pointed to by src.
 *
 * **/
char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	_putchar('\n');
}
