#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints sum of two diagnols.
 * @size: The size of the array.
 * @a: The matrix used.
 */
void print_diagsums(int *a, int size)
{
<<<<<<< HEAD
	int total_minor = 0;
	int total_major = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		total_minor += a[i * size + i];
		total_major += a[(size - 1 - i) * size + i];
	}
}
=======
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
>>>>>>> 0c95bc0 (pointers,arrays,strings)
