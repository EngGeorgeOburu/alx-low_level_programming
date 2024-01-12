#include "lists.h"
/**
* add_dnodeint_end - adds a new node at the end of the list
* @head: Pointer to the head node of the dlistint_t list.
* @n: Value being added to the new node
* Return: New element or NULL if failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	/* Allacote memory for the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	/* Initialize the newnode with the provided value */
	new_node->n = n;
	new_node->next = NULL;
	/* If the list is empty, set the new node to head */
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head->next = new_node;
		return (new_node);
	}
	/* Traverse the list using temp to the last node  */
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;
	new_node->prev = temp;
	
	return (new_node);
}
