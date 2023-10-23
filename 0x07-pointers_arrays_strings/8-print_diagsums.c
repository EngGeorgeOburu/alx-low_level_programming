#include "main.h"
#include <stdioh.h>
/**
 * print_diagsums - Prints sum of two diagnols.
 * @size: The size of the array.
 * @a: The matrix used.
 */
void print_diagsums(int *a,int size)
{
	int total_minor = 0;
	int total_major = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		total_minor += a[i * size + i];
		total_major += a[(size -1 -i) * size + i];
	}

