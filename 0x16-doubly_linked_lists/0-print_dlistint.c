#include "lists.h"
#include <stdio.h>
/**
  *print_dlistint- print all the elements of a dlistint_t 
  *@h: is a pointer with the list
  *Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes;
	
	if (h == NULL)
		return (0);
	for (nodes = 0; h != NULL; nodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
return (nodes);
}
