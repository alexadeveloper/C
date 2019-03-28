#include "holberton.h"

/**
  *get_bit - returns the value of a bit a given index
  *@n: the number send it
  *@index: the bit you want to get
  *Return: The value of the bit, or -1 it is fails
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(n) * 8))
		return (-1);
return ((n >> index) & 1);
}
