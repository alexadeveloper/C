#include "lists.h"
#include <stdio.h>

/**
 *print_listint_safe - print a list int
 *@head: pointer of pointer of the list
 *Return: the num of the node
 */
size_t print_listint_safe(const listint_t *head)
{
	unsigned int nodes, anteriores;
	const listint_t *aux, *new;

	aux = head;
	for (nodes = 0; aux != NULL; nodes++)
	{
		printf("[%p] %d\n", (void *)aux,  aux->n);
		aux = aux->next;
		new = head;
		for (anteriores = 0; anteriores < nodes; anteriores++)
		{
			if (aux == new)
			{
				printf("[%p] %d\n", (void *)aux,  aux->n);
				return (nodes);
			}
			new = new->next;
		}
	}
return (nodes);
}
