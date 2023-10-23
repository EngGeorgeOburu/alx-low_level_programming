#include "main.h"
#include <stdioh.h>
/**
 * print_diagsums - Prints sum of two diagnols.
 * @size: The size of the array.
 * @a: The matrix used.
 */
void print_diagsums(int *a,int size)
{
	int major_diag = 0;
	int minor_diag = 0;
	int i, j;
	int size = 3;

	for (i = 0; i < size; i++)
	{
	for (	
