#include "sort.h"
/**
  *insertion_sort_list- algoritm insertion sort
  *@list: the list
  *Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *temp2, *nodes;

	if (*list == NULL || list == NULL || (*list)->next == NULL)
		return;
	for (nodes = *list; nodes != NULL; nodes = nodes->next)
	{
		temp = nodes;
		for (temp2 = temp->prev; temp2 && temp2->n > temp->n; temp2 = temp->prev)
		{
			if (temp->next != NULL && temp2->prev != NULL)
			{	temp2->prev->next = temp;
				temp->next->prev = temp2;
				temp2->next = temp->next;
				temp->prev = temp2->prev;
				temp->next = temp2;
				temp2->prev = temp;
				print_list(*list);
				continue; }
			if (temp2->prev == NULL)
			{	temp->prev = NULL;
				temp2->next = temp->next;
				temp2->prev = temp;
				if (temp->next != NULL)
					temp->next->prev = temp2;
				temp->next = temp2;
				*list = temp;
				print_list(*list);
				continue; }
			if (temp->next == NULL)
			{	temp->prev = temp2->prev;
				temp->next = temp2;
				temp2->next = NULL;
				temp2->prev->next = temp;
				temp2->prev = temp;
				print_list(*list);
				continue; }
		}
	}
}
