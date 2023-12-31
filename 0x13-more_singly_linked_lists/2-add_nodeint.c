#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - adds new node at the beginning
 * @head: pointer to head pointer
 * @n:interger to store data for new_node
 * Return: new_node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;
	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

