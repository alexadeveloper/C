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
  *add_node - adds a new node at the beginning of a list_t
  *@head: pointer to pointers
  *@str: pointer with the list
  *Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *copy;

	copy = malloc(sizeof(list_t));
	if (copy == NULL)
	{
		free(copy);
		return (NULL);
	}
	copy->str = strdup(str);
	copy->len = _strlen(copy->str);
	copy->next = *head;
	*head = copy;
return (*head);
}
