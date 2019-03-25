#include "lists.h"
#include <stdio.h>

/**
 *pop_listint - deletes the head of a list
 *@head: pointer to pointers
 *Return: the numeros
 */
int pop_listint(listint_t **head)
{
	int numeros;
	listint_t *aux;

	if (*head == NULL)
	{
		return (0);
	}
	numeros = (*head)->n;
	aux = (*head)->next;
	free(*head);
	*head = aux;
	return (numeros);
}
