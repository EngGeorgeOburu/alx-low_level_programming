#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - returns the number of elements in a list
 * @h: linked list
 * Return: total_nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t total_nodes = 0;
	
	while (h != NULL)
	{
		printf("%d", h->n);
		h = h->next;
		total_nodes += total_nodes;
	}
	return (total_nodes);
}
