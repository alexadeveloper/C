#include "lists.h"
#include <stdio.h>

/**
  *print_list - print a list
  *@h: is a pointer with the list
  *Return: the num objects
 */
size_t print_list(const list_t *h)
{
	size_t objects;

	for (objects = 0; h != NULL; objects++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
			h = h->next;
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
		}
	}
return (objects);
}
