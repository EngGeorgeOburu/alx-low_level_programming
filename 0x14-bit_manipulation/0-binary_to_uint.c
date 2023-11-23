#include  <stdio.h>
#include <string.h>
#include "main.h"
/**
 * binary_to_uint - Convert binary number to un ansigned int
 * @b: pointer to a string of binary
 * Return: Number converted
 */
unsigned int binary_to_uint(const char *b)
{
	int results = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b == '0')
			results = results << 1;
		if (*b == '1')
			results = (results << 1) | 1;
		else
			return (0);
		b++;
	}
	return (results);
}

