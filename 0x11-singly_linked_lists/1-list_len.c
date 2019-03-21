#include "lists.h"
#include <stdio.h>

/**
  *list_len - return the number of elements
  *@h: is a pointer with the list
  *Return: the num elements
 */
size_t list_len(const list_t *h)
{
	size_t nodes;
	unsigned int largo = 0;

	for (nodes = 0; h != NULL; nodes++)
	{
		if (h->str == NULL)
		{
			h = h->next;
		}
		else
		{
			largo++;
			h = h->next;
		}
	}
return (largo);
}
