#include "lists.h"
/**
* free_dlistint - Frees a dlistint_t list.
* @head: pointer to the dlistint_t list
* Return: Nothing
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	
	while (head)
	{
		tmp = head->next;
		free(head);
		if (tmp)
			head = tmp;
		else
			break;
	}
}
