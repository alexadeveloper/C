#include "lists.h"
#include <stdio.h>

/**
 *insert_nodeint_at_index - inserts a new node at a given position
 *@head: is a pointer with the list
 *@idx: where the node should be added
 *@n: the num send it
 *Return: the num of the node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int nodes;

	listint_t *copy;
	listint_t *aux;

	copy = malloc(sizeof(listint_t));
	if (copy == NULL)
		return (NULL);
	aux = *head;
	copy->n = n;
	if (*head == NULL)
	{
		copy->next = *head;
		*head = copy;
		return (*head);
	}
	if (idx == 0 && head == NULL)
	{
		copy->next = NULL;
		*head = copy;
		return (*head);
	}
	if (idx == 0)
	{
		copy->next = *head;
		*head = copy;
		return (*head);
	}
	for (nodes = idx; nodes > 1; nodes--)
	{
		aux = aux->next;
		if (aux == NULL)
			return (NULL);
	}
	copy->next = aux->next;
	aux->next = copy;
return (copy);
}
