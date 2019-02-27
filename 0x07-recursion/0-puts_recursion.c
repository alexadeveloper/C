#include "holberton.h"

/**
  *_puts_recursion - print a string
  *@s: is the string
 */

void _puts_recursion(char *s)
{

	_putchar(*s);
	if (*(s + 1) != '\0')
	{
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
