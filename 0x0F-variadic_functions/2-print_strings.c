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
	char *str;

	if (separator == NULL)
		separator = "";
	if (n == 0)
		return;
	va_start(numeros, n);
	i = 0;
	while (i < n)
	{
		str  = va_arg(numeros, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != (n - 1))
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(numeros);
}
