#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Searches for a value in an array
 * @list: input list
 * @size: size of the array
 * @value: value to search for
 * Return: Index of the number
 */
 
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t index, k, m;
	listint_t *prev;

	if (list == NULL || size == 0)
		return (NULL);

	m = (size_t)sqrt((double)size);
	index = 0;
	k = 0;

	do { 
		prev = list;
		k++;
		index = k * m;

		while (list->next && list->index < index)
			list = list->next;
		if (list->next == NULL && index != list->index)
			index = list->index;
		printf("Value checked at index [%d] = [%d]\n", (int)index, list->n);
		printf("Value found between indexes ");
		printf("[%d] and [%d]\n", (int)prev->index; prev = prev-next);
		for (; prev && prev->index <= list->index; prev = prev->next)
			printf("Value checked at index [%d] = [%d]\n", (int)prev->index, prev->n);
		if (prev->n == value)
			return (prev);
	}
	return (NULL);
}