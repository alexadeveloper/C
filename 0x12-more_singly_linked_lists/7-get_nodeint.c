#include "lists.h"
#include <stdio.h>

/**
 *get_nodeint_at_index - returns the hth node of a list
 *@head: is a pointer with the list
 *@index: the node to return
 *Return: the num of the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t nodes;
	unsigned int largo = 0;

	if (head == NULL)
	{
		return (0);
	}

	for (nodes = 0; head != NULL; nodes++)
	{
		if (nodes == index)
		{
			return (head);
			largo++;
		}
		head = head->next;
	}
return (0);
}
