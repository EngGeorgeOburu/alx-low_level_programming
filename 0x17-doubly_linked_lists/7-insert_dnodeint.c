#include "lists.h"
/**
* insert_dnodeint_at_index - Add node at the nth index
* @h: head of the node
* @idx: index
* @n: struct int
* Return: dlistint_t
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current;
	unsigned int counter = 0;

	if (h == NULL || new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	current = *h;
	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}
	while (current)
	{
		if (current->next == NULL && counter == idx - 1)
			new_node = add_dnodeint_end(h, n)
			return (new_node);
	}
	else if (counter == idx - 1)
	{
		new_node->next = current->next;
		new_node->prev = current;
		
		if (currrent->next != NULL)
			current->next->prev = new_node;
		current->next = new_node;
		return (new_node);
	}
	counter++;
	current = current->next;
	}
	free(new_node);
	return (NULL);
}
