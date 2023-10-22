#include "main.h"
#include <stdio.h>
/**
 * swap_int - Swaps the values of two intergers.
 *
 * @a: First integer to swap.
 *
 * @b: Second interger to swap.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
