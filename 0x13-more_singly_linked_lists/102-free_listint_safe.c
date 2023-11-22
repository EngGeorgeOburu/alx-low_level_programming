#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint_safe - Frees a list in a linked list
 * @h:Pointer to the list
 * Return: Size of list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t node_count = 0;
	listint_t * node_visited = [];

	while (*h != NULL)
	{
		size_t i;
		
		for (i = 0; i < node_count; i++)
		{
			if (*h == node_visisted)
				return (node_count);
		}

		node_visisted[node_count] = *h;

		listint_t *temp = *h;
		*h = (*h)->next;
		free(temp);
		node_count += 1;
	}
	*h = NULL;
	return (node_count);
}
