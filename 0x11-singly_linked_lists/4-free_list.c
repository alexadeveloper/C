#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
  *free_list - free a list
  *@head: pointer to pointers
 */
void free_list(list_t *head)
{
	size_t nodes;
	list_t *aux;

	for (nodes = 0; head != NULL; nodes++)
	{
		aux = head->next;
		free(head->str);
		free(head);
		head = aux;
	}
}
