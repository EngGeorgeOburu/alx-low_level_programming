#include "lists.h"
#include <stdlib.h>
/**
 * free_list - Frees a list
 * @head: Pointer to head of linked list
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *temp;

	for (; head; head = temp)
	{
		temp = head->next;
		free(head->str);
		free(head);
	}
}
