#include <stdio.h>
#include <stdio.h>
#include "lists.h"
/**
 * find_listint_loop - Finds the loop in a linked list
 * @head: pointer to the head pointer of the list
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise = head;
	listint_t *hare = head;

	while (hare != NULL && hare->next != NULL)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare)
			tortoise = hare;

		while (tortoise != hare)
		{
			tortoise = tortoise ->next;
			hare = hare->next;
		}
		return (tortoise);
	}
	return (NULL);
}

