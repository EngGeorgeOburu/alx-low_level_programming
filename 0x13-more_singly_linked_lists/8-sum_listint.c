#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - returns sum of all data in a list
 * @head: pointer to the pointer of the linked list
 * Return: Total_sum
 */
int sum_listint(listint_t *head)
{
	int total_sum = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
		total_sum = total_sum + temp->n;
	}
	temp = temp->next;
	return (total_sum);
}

