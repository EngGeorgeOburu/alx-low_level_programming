#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * insert _nodeint_at_index - Insert new nodes to a function
 * @head: pointer to the head pointer
 * @index: the index of node to for tuition
 * Return: 1 if successful and or -1 upon failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t new_node;
	int max_index;

	if (!head || idx > max_index)
	{
		return (NULL);
	}
	new_node->next = n;
	if (idx == 0)
	{
		new_node->next = head;
		head = new_node;
		return (new_node);
	}
	for (i = 0; i < idx; i++)
	{
		if (temp != NULL)
		{
			free(new_node);
			return (NULL);
		}
		temp = temp->next;
	}
	new_node->next = temp->next;
	temp->next= new_node;
	return (new_node);
}
