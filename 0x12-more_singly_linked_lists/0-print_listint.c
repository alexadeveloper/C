#include "lists.h"
#include <stdio.h>

/**
 *print_list - print a list
 *@h: is a pointer with the list
 *Return: the num objects
 */
size_t print_listint(const listint_t *h)
{
  size_t nodes;

  for (nodes = 0; h != NULL; nodes++)
    {
	  printf("%d\n", h->n);
	  h = h->next;
    }
  return (nodes);
}
