#include "sort.h"
/**
  *selection_sort- algoritm selection sort
  *@array: to organize
  *@size: of the array
  *Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t limite, posicion, iterator;
	int minimo, aux;

	for (limite = 0; limite < size; limite++)
	{
		iterator = limite;
		minimo = array[limite];
		posicion = limite;
		while (iterator < size)
		{
			if (array[iterator] < minimo)
			{
				minimo = array[iterator];
				posicion = iterator;
			}
			iterator++;
		}
		if (posicion != limite)
		{
			aux = array[limite];
			array[limite] = array[posicion];
			array[posicion] = aux;
			print_array(array, size);
		}
	}
}
