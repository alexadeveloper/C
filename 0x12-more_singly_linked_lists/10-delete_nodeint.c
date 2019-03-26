#include "lists.h"
#include <stdio.h>

/**
 *delete_nodeint_at_index - delete the node at index of a list
 *@index: where the node should be added
 *@head: pointer of pointer of the list
 *Return: the num of the node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int nodes;
	listint_t *anterior;
	listint_t *siguiente;

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
