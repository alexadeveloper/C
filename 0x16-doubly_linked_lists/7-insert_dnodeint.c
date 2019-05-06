#include "lists.h"
#include <stdio.h>

/**
 *insert_dnodeint_at_index - inserts a new node at a given position
 *@h: is a pointer with the list
 *@idx: where the node should be added
 *@n: the num send it
 *Return: the num of the node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int nodes;

	dlistint_t *copy;
	dlistint_t *aux;

	copy = malloc(sizeof(dlistint_t));
	if (copy == NULL)
		return (NULL);
	aux = *h;
	copy->n = n;
	copy->next = NULL;
	copy->prev = NULL;
	if (idx != 0 && *h == NULL)
	{
		free(copy);
		return (NULL);
	}
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	for (nodes = 0;  aux != NULL; nodes++)
	{
		if ((nodes - 1) == idx)
		{
			copy->next = aux;
			copy->prev = aux->prev;
			aux->prev->next = copy;
			aux->prev = copy;
			return (copy);
		}
		aux = aux->next;
	}
	if (nodes == idx)
		return (add_dnodeint_end(h, n));
	free(copy);
return (NULL);
}
