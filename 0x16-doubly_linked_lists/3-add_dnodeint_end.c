#include "lists.h"
#include <stdio.h>

/**
 *add_dnodeint_end - adds a new node at the end of a list
 *@head: pointer to pointers
 *@n: is the num to add
 *Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *copy;
	dlistint_t *aux;

	if (head == NULL)
		return (NULL);
	copy = malloc(sizeof(dlistint_t));
	if (copy == NULL)
	{
		return (NULL);
	}
	copy->n = n;
	copy->next = NULL;
	if (*head == NULL)
	{
		copy->prev = NULL;
		*head = copy;
		return (*head);
	}
	aux = *head;
	while (aux->next != NULL)
	{
		aux = aux->next;
	}
	copy->prev = aux;
	aux->next = copy;
return (copy);
}
