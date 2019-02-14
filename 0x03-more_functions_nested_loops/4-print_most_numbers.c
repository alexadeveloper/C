#include "holberton.h"

/**
*print_most_numbers -  print numbers 0 9 without 2 4
*Return: values 0
*/
void print_most_numbers(void)
{
	int num;

	for (num = 48 ; num <= 57; num++)
	{
		num == 50 || num == 52 ? 0 : _putchar(num);
	}
	_putchar('\n');
}
