#include "lists.h"
/**
* delete_dnodeint_at_index - Deletes node at index of a dislistint_t linked list
* @head: Pointer to the head of dlistint_t list
* @index: Index of node to be deleted
* Return: Always 1 if succeeds, -1 if failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *tmp;
	unsigned int counter = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	current = *head;
	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		if (*head)
		{
			(*head)->prev = NULL;
		}
		free(tmp);
		return (1);
	}
	while (current && counter < index)
	{
		current = current->next;
		counter++;
	}
	if (current == NULL)
	{
		return (-1);
	}
	if (current == NULL)
	{
		return (-1);
	}
	current->prev->next = current->next;
	if (current->next)
	{
		current->next->prev = current->prev;
	}
	free(current);
	return (1);
}
