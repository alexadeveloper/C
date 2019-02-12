#include "holberton.h"
/**
  * print_alphabet_x10 - Entry Point
  *
  * Return: Always 0 (Success)
  */
void print_alphabet_x10(void)
{
int a, b;
for (b = 0 ; b <= 9 ; b++)
{
	for (a = 'a' ; a <= 'z' ; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
}
