#include  "lists.h"
/**
* sum_dlistint - Totals all the data in the dlistint_t linked list
* @head: pointer to the start of the linked list
* Return: Sum of all the data, or 0 if list is empty
*/
int sum_dlistint(dlistint_t *head)
{
	int total = 0;
	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
