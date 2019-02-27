#include "holberton.h"

/**
  *_print_rev_recursion - print a string in reverse
  *@s: is the string
 */

void _print_rev_recursion(char *s)
{

	if (*(s + 1) != '\0')
	{
		_print_rev_recursion(s);
		_putchar(s);
		s++;
	}
}
