#include "lists.h"
/**
*dlistint_len - Counts the number of elements in the linked dslistint_t
*@h: Head of the dlistint_t.
*Return: Number of elements in the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	/* Initialize a variable to count the number of nodes */
	size_t node_count = 0;
	/* Traverse the list until the end is reached */
	while (h)
	{
		/* Increment the node counter */
		node_count++;
		/* Move to the next node in the list */
		h = h->next;
	}
	/* Return the total number of nodes in the list */
	return (node_count);
}
