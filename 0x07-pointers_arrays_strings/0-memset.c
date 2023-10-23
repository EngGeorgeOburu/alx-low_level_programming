#include "main.h"
#include <string.h>
/**
 * _memset - fills the memory with a constant byte.
 * @s: points to memory to be filled.
 * @b: character to fill memory.
 * @n: bytes to fill.
 * Return: POinter to memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	n  =  strlen(s) + 1;
	memset(s, b, n);
	return (s);
}
