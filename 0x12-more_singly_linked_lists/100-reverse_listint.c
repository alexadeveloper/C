#include "lists.h"
#include <stdio.h>

/**
  *reverse_listint - reverses a list
  *@head: is a pointer to the lists
  *Return: a pointer to the first node of the reverse list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *anterior;
	listint_t *siguiente;

	anterior = NULL;
	siguiente = (*head)->next;
	if (*head == NULL || head == NULL)
	{
		return (NULL);
	}
	if ((*head)->next == NULL)
	{
		return (*head);
	}
	while ((*head)->next != NULL)
	{
		(*head)->next = anterior;
		anterior = *head;
		*head = siguiente;
		siguiente = siguiente->next;
	}
	(*head)->next = anterior;
	return (*head);
}
