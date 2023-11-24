#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_binary - Convert a decimal to binary
 * @n: Binary number provided
 * Return: Binary number
 */
void print_binary(unsigned long int n)
{
	int i = 0;
	char binary_string[63];

	if (n == 0)
		return;

	while (n > 0)
	{
		if (n & 1)
			binary_string[i++] = '1';
		else
			binary_string[i++] = '0';
		n = n >> 1;
	}
	binary_string[i] = '\0';
	strsep(binary_string);
	printf("%s\n", binary_string);
}
