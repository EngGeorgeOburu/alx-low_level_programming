#include <stdio.h>
#include "main.h"
/**
 * flip_bits - Return the number of bits flipped
 * @n: first number flipped
 * @m:second number flipped
 * Return: Number of bits changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bit_count = 0;
	int pos = 63;
	unsigned long int xor_result = n ^ m;

	while (pos >= 0)
	{
		unsigned long int current_bit = xor_result >> pos;
		if (current_bit & 1)
			bit_count++;
		pos--;
	}
	return (bit_count);
}

