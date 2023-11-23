#include <stdio.h>
#include "main.h"
/**
 * get_endianness - Checks endianness
 * Return: 0 if big endian, 1 when it is little endian
 */
int get_endianness(void)
{
	int a = 1;
	char *b = (char *)&a;

	return ((*b == 1) ? 1 : 0);
}

