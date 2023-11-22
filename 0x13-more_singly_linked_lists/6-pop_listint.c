#include "lists.h"
#include <stdio.h>
#include  <stdlib.h>
/**
 * pop_listint - delets head node
 * @head: pointer to head pointer
 * Return: new_data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int new_data;

	if (head == NULL || *head == NULL)
		return (0);

	new_data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (new_data);
}

