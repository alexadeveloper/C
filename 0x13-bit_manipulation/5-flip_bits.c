#include "holberton.h"

/**
  *flip_bits - number bits need to flip to get from one number to another
  *@n: the number send it
  *@m: the number to comopare it
  *Return: i it if worked, or -1 it is fails
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int cont = 0;

	while (n || m)
	{
		if ((n & 1) ^ (m & 1))
			cont++;
		n >>= 1;
		m >>= 1;
	}
return (cont);
}
