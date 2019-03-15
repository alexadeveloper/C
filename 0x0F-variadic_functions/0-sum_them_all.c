#include <stdarg.h>
#include "variadic_functions.h"

/**
  *sum_them_all - sum all its parameters
  *@n: is the name of the list
  *Return: n == 0 => 0, the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numeros;
	unsigned int i, suma;

	if (n == 0)
	{
		return (0);
	}
	va_start(numeros, n);
	i = 0;
	suma = 0;
	while (i < n)
	{
		suma = suma + va_arg(numeros ,unsigned  int);
		i++;
	}
	va_end(numeros);
return (suma);
}
