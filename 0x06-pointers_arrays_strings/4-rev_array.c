#include "main.h"
/**
 * reverse_array - The function reverses the array of integers.
 * @n: number of elements in the array.
 * @a:array name.
 */
void reverse_array(int *a, int n)
{
	int start_point = 0;
	int end_point = n - 1;
	int tmp;

	while (start_point < end_point)
	{
		tmp = a[start_point];
		a[start_point] = a[end_point];
		a[end_point] = tmp;

		start_point++;
		end_point--;
	}
}
