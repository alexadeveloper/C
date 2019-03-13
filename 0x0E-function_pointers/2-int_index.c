#include "function_pointers.h"
#include <stdlib.h>

/**
  *int_index - searches for an integer
  *@array: pointer type int
  *@size: the size of array
  *@cmp: function i need to use
  *Return: Null it is faiil
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, aux;

	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		aux = cmp(*(array + i));
		if (aux != 0)
		{
			return (i);
		}
	}
return (-1);
}
