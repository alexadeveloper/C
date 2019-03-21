#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
  *_strlen - returns the length of a string
  *@s: is a char
  *Return: the length of a string
 */
int _strlen(char *s)
{
	int cont;

	cont = 0;
	while (s[cont] != '\0')
	{
		cont++;
	}
return (cont);
}

/**
  *add_node_end - adds a new node at the end of a list_t
  *@head: pointer to pointers
  *@str: pointer with the list
  *Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *copy;
	list_t *aux;

	copy = malloc(sizeof(list_t));
	aux = *head;
	if (copy == NULL)
	{
		return (NULL);
	}
	copy->str = strdup(str);
	if (copy->str == NULL)
	{
		free(copy);
		return (NULL);
	}
	copy->len = _strlen(copy->str);
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
