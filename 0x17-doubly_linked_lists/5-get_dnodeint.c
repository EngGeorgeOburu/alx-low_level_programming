#include "lists.h"
/**
* get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
* @head: Pointer to the head of the dlistint_t list
* @index: Index of the node
* Return: Node of NULL if no node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	
	for ( i = 0; head != NULL && i < index; i++)
	{
		head = head->next;
	}
	return (head);
}

