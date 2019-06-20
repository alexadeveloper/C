#include "sort.h"
/**
  *cut_array- work with the sub array
  *@array: the array
  *@low: beginning
  *@high: end
  *@size: the original size of the array
  *Return: size of the array
 */
int cut_array(int *array, int low, int high, size_t size)
{
	int pivot, i, j, aux;

	pivot = array[high];
	i = low - 1;
	for (j = low; j <= high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				aux = array[i];
				array[i] = array[j];
				array[j] = aux;
				print_array(array, size);
			}
		}
	}
	return (i);
}
/**
  *lomuto- divide the array
  *@array: the array
  *@low: beginning
  *@high: end
  *@size: the original size of the array
  *Return: Nothing
 */
void lomuto(int *array, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = cut_array(array, low, high, size);
		lomuto(array, low, pivot - 1, size);
		lomuto(array, pivot + 1, high, size);
	}
}
/**
  *quick_sort- quick sort algoritm
  *@array: to organize
  *@size: the size of array
  *Return: Nothing
 */
void quick_sort(int *array, size_t size)
{
	lomuto(array, 0, size - 1, size);
}
