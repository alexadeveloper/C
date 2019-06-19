#include "sort.h"
/**
  *bubble_sort- sorting algoritm qith bubble
  *@array: the input to organize
  *@size: the size of the arrar
  *Return: void
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j, n;

	if (array == NULL || size == 0 || size == 1)
	{
		return;
	}
	for (i = 0; i < (size - 1); i++)
	{
		for (j = 0; j < (size - i - 1); j++)
		{
			if (array[j] > array[j + 1])
			{
				n = array[j + 1];
				array[j + 1] = array[j];
				array[j] = n;
				print_array(array, size);
			}
		}
	}
}
