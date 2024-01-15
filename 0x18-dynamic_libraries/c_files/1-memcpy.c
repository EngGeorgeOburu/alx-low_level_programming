#include "main.h"
#include <string.h>
/**
 * _memcpy - copies memory area.
 * @dest: destination where memory is copied.
 * @src: source where memory iscopied from.
 * @n: the number of bytes copied.
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	n = strlen(src) + 1;
	memcpy(dest, src, n);
	return (dest);
}
