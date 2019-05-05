#include "lists.h"
#include <stdio.h>

/**
 *dlistint_len - number of elements in a linked list
 *@h: is a pointer with the list
 *Return: the num objects
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes;
	unsigned int largo = 0;

	if (h == NULL)
	{
		return (0);
	}
	for (nodes = 0; h != NULL; nodes++)
	{
		largo++;
		h = h->next;
	}
return (largo);
}
