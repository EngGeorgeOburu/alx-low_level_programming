#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints sum of two diagnols.
 * @size: The size of the array.
 * @a: The matrix used.
 */
void print_diagsums(int *a, int size)
{
	int sum_major = 0;
	int sum_minor = 0;
	int i;
	
	for (i = 0; i < size; i++)
	{
	sum_major += a[i * size + i];
	sum_minor += a[(size - 1 -i) * size + i];
	}
	printf("%d",sum_major);
	printf("%d",sum_minor);
}	

