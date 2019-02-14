#include "holberton.h"

/**
*print_numbers -  print numbers 0 9
*Return: values 0
*/
void print_numbers(void)
{
	int num;

	for (num = 48 ; num <= 57; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
