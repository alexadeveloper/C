#include "holberton.h"
#include <stdio.h>
/**
  *print_binary - prints the binary representation of a number
  *@n: is the integer send it
 */
void print_binary(unsigned long int n)
{
	unsigned int bit = 0;
	unsigned long int mask;
	int control = 0;

	mask = 1UL << ((sizeof(unsigned long int) * 8) - 1);
	while (bit < (sizeof(unsigned long int) * 8))
	{
		if ((n & mask) != 1)
			control = 1;
		if (control == 1)
		{
			if ((n & mask) == 0)
				_putchar('0');
			else
				_putchar('1');
		}
		mask = mask >> 1;
		bit++;
	}
	if (control == 0)
	{
		_putchar('0');
	}
}
