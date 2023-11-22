#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - prints all the elements in a list
 * @h: linked lists
 * Return: total_nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t total_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		total_nodes += 1;
	}
	return (total_nodes);
}

