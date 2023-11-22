#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - Returns the nth node
 * @head: pointer to the head pointer
 * @index: index of the first node
 * Return: NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node = head;

	while (current_node != NULL && index > 0)
	{
		current_node = current_node->next;
		index -= index;
	}
	if (current_node != NULL)
	{
		return (current_node);
	}
	return (NULL);

}
