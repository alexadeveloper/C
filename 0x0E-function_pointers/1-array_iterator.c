#include "function_pointers.h"
#include <stdlib.h>

/**
  *array_iterator - executes a function on an array
  *@array: pointer type int
  *@size: the size of array
  *@action: function i need to use
  *Return: Null it is faiil
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(*(array + i));
	}
}
