#include "holberton.h"

/**
  *_print_rev_recursion - print a string in reverse
  *@s: is the string
 */

void _print_rev_recursion(char *s)
{

	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
		s--;
		_putchar(*s);
	}
}
