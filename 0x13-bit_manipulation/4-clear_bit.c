#include "holberton.h"

/**
  *clear_bit - sets the value of a bit to 0 at a given index
  *@n: the number send it
  *@index: the bit you want to get
  *Return: i it if worked, or -1 it is fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int aux;

	if (index >= (sizeof(n) * 8) || n == NULL)
		return (-1);
	aux = 1 << index;
	*n &= ~aux;
return (1);
}
