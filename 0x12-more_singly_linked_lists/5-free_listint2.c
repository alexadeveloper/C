#include "lists.h"
#include <stdio.h>

/**
 *free_listint2 - free a list
 *@head: pointer to pointers
 */
void free_listint2(listint_t **head)
{
	size_t nodes;
	listint_t *aux;

	if (head == NULL)
	{
		return;
	}
	if (*head == NULL)
	{
		return;
	}
	for (nodes = 0; *head != NULL; nodes++)
	{
		aux = (*head);
		*head = (*head)->next;
		free(aux);
	}
	*head = NULL;
}
