#include "search_algos.h"
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
