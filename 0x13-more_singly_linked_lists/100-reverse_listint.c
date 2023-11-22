#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * reverse_listint - This function reverses a list
 * @head: Pointer to head pointer of the linkedlists
 * Return: Pointer of the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *prev_node = NULL;

	while (*head != NULL)
	{
		temp = (*head)->next;
		(*head)->next = prev_node;
		prev_node = head;
		*head = temp;
	}
	*head = prev_node;
	return (prev_node);
}


