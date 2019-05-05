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
	if (*head == NULL)
	{
		copy->next = NULL;
		copy->prev = NULL;
	}
	else
	{
		copy->next = *head;
		copy->prev = NULL;
	}
	*head = copy;
return (copy);
}
