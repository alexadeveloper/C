#include "lists.h"
#include <stdio.h>

/**
 *add_dnodeint - adds a new node at the beginning of a list
 *@head: pointer to pointers
 *@n: is the num to add
 *Return: the num objects
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *copy;

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
	copy->next = *head;
	copy->prev = NULL;
	(*head)->prev = copy;
	*head = copy;
return (copy);
}
