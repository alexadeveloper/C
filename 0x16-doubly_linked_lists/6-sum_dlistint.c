#include "lists.h"
#include <stdio.h>

/**
 *sum_dlistint - returns the sum of all the data of a list
 *@head: is a pointer with the list
 *Return: the num of the node
 */
int sum_dlistint(dlistint_t *head)
{
	size_t nodes;
	unsigned int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	for (nodes = 0; head != NULL; nodes++)
	{
		sum = sum + head->n;
		head = head->next;
	}
return (sum);
}
