#include "lists.h"
#include <stdio.h>
/**
 * list_len - Returns the number of elements in a linked list
 * @h: Pointer to head of linked list
 * Return: Count
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	for (; h; h = h->next, count++)
	{
	}
	return (count);
}
