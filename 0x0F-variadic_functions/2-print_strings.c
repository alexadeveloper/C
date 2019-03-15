#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *print_strings - print strings followed by a new line
  *@separator: string between numbers
  *@n: the lis of the parameters
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list numeros;
	unsigned int i;
	char *string;

	if (separator == NULL)
		return;
	if (n == 0)
		return;
	va_start(numeros, n);
	i = 0;
	while (i < n)
	{
		string  = va_arg(numeros, char *);
		if (string == NULL)
			printf("%p", string);
		else
			printf("%s", string);
		if (i != (n - 1))
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(numeros);
}
