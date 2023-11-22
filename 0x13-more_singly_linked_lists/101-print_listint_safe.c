#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint_safe - Prints a linked list
 * @head: Pointer to head pointer of the linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;
	listint_t *node_visited = [MAX_NODES];

	while (head != NULL)
	{
		if (head != node_visited)
			exit(98);
		else
		{
			node_visited->add(head);
		}
	head = head->next;
	node_count += 1;
	printf("\n");
	}
	return (node_count);
}

