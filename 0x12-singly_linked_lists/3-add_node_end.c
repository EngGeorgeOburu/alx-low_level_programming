#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - add new node at the end of the linked list
 * @head: Pointer to the head of the linked list
 * @str: String to be added
 * Return: newNode or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;

	if (str == NULL)
	{
		return (NULL);
	}
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		list_t *temp = *head;

		for (; temp->next != NULL; temp = temp->next)
		{
			temp->next = temp;
		}
	}
	return (newNode);
}
