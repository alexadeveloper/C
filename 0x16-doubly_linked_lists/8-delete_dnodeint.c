#include "lists.h"
#include <stdio.h>

/**
 *delete_dnodeint_at_index - delete the node at index of a list
 *@index: where the node should be added
 *@head: pointer of pointer of the list
 *Return: the num of the node
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int nodes;
	dlistint_t *anterior;
	dlistint_t *siguiente;

	anterior = *head;
	siguiente = *head;
	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(siguiente);
		return (1);
	}
	for (nodes = 0; nodes != index; nodes++)
	{
		if (nodes == (index - 1))
		{
			anterior = siguiente;
		}
		siguiente = siguiente->next;
		if (siguiente == NULL)
		{
			return (-1);
		}
	}
	anterior->next = siguiente->next;
	free(siguiente);
return (1);
}
