#include "search_algos.h"
/**
  *binary_search-  searches for a value in an array of integers
  *@array: pointer to the first element of the array
  *@size: is the number of elements in array
  *@value: value to search
  *Return: null or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, newsize, aux;

	aux = 0;
	if (array == NULL)
		return (-1);
	while (size)
	{
		printf("Searching in array: %d", array[0]);
		for (i = 1; i < size; i++)
			printf(", %d", array[i]);
		printf("\n");
		newsize = (size - 1) / 2;
		if (array[newsize] == value)
		{
			return (newsize + aux);
		}
		if (array[newsize] < value)
		{
			aux = aux + (newsize + 1);
			array += newsize + 1;
			if (!(size % 2))
				newsize++;
		}
		size = newsize;
	}
return (-1);
}
