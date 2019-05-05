#include "lists.h"
#include <stdio.h>

/**
 *free_dlistint - free a list
 *@head: pointer to pointers
 */
void free_dlistint(dlistint_t *head)
{
	size_t nodes;
	dlistint_t *aux;

	for (nodes = 0; head != NULL; nodes++)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
