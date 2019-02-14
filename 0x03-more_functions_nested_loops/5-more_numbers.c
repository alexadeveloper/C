#include "holberton.h"

/**
*more_numbers -  print 10 times  numbers from 0 to 14
*Return: values 0
*/
void more_numbers(void)
{
	int num, times;

	for (times = 1; times <= 10; times++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
