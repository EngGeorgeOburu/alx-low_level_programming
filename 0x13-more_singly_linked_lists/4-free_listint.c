#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - frees a list in a list
 * @head: pointer to head pointer of the singly list
 * Return:Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

