#include "lists.h"
/**
print_dlistint - Prints all elements in the dlistint_t list.
@h: Pointer to the head of the list
Return: Sum of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_counter = 0;

	while (h)
	{
		node_counter++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node_counter);
}


