#include "lists.h"
/**
* add_dnodeint - Add new node at the start of dlistint_linked list
* @head: Pointer to the head of dislinkedint_t list
* @n: Value added
* Return: Address or None if it fails
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new_node;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
