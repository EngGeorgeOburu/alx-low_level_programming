#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node of the index
 * @head: pointer to the address of the first element
 * @index: Index of the node  being deleted.
 * Return: Always (1), or (-1) upon failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t current;

	if (head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		temp = head;
		head = head->next;
		free(temp);
		return (1);
	}
	for (unsigned int i = 0; i < index -2; i++)
	{
		if (current->next == NULL)
		{
			return (-1);
		}
		temp = current->next;
		current->next = temp->next;
	}
	free(temp);
	return (-1);
}

