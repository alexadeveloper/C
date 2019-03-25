#include "lists.h"
#include <stdio.h>

/**
 *add_nodeint_end - adds a new node at the end of a list
 *@head: pointer to pointers
 *@n: is the num to add
 *Return: the num objects
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *copy;
	listint_t *aux;

	copy = malloc(sizeof(listint_t));
	aux = *head;
	if (copy == NULL)
	{
		return (0);
	}
	copy->n = n;
	copy->next = NULL;
	if (*head == NULL)
	{
		*head = copy;
		return (*head);
	}
	while (aux->next != NULL)
	{
		aux = aux->next;
	}
	aux->next = copy;
return (*head);
}
