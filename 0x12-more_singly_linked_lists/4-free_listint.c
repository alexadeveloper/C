#include "lists.h"
#include <stdio.h>

/**
 *free_listint - free a list
 *@head: pointer to pointers
 */
void free_listint(listint_t *head)
{
	size_t nodes;
	listint_t *aux;

	for (nodes = 0; head != NULL; nodes++)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
