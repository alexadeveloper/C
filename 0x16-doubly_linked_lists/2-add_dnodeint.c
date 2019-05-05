#include "lists.h"
#include <stdio.h>

/**
 *add_nodeint - adds a new node at the beginning of a list
 *@head: pointer to pointers
 *@n: is the num to add
 *Return: the num objects
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *copy;

	copy = malloc(sizeof(dlistint_t));
	if (copy == NULL)
	{
		return (0);
	}
	copy->n = n;
	copy->next = *head;
	*head = copy;
return (*head);
}
