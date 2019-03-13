#include "function_pointers.h"
#include <stdio.h>
/**
  *print_name - prints a nmae
  *@name: Is a char with the name
  *@f: is a function to pointers
  *Return: Null it is fail
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	if (f == NULL)
		return;
	f(name);
}
