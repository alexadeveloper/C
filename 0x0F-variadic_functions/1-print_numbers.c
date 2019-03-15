#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *print_numbers - prints numbers by a new line
  *@separator: string between numbers
  *@n: the lis of the parameters
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numeros;
	unsigned int i;

	if (separator == NULL)
		return;
	if (n == 0)
		return;
	va_start(numeros, n);
	i = 0;
	while (i < n)
	{
		printf("%d", va_arg(numeros, unsigned int));
		if (i != (n -1))
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(numeros);
}
