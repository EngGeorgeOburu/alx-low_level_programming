#include "main.h"
#include <stdio.h>
/**
 * void print_arrays_string - The function prints n element
 *
 * of an array of intergs
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
