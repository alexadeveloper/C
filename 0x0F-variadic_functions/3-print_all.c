#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *print_all - print anything followed by a new line
  *@format: the formats send it
 */

void print_all(const char * const format, ...)
{
	va_list formatos;
	unsigned int i;
	char *str;

	va_start(formatos, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
			printf("%c", va_arg(formatos, int));
			break;
			case 'i':
			printf("%d", va_arg(formatos, int));
			break;
			case 'f':
			printf("%f", (float)va_arg(formatos, double));
			break;
			case 's': /* string */
			str = va_arg(formatos, char *);
			if (str == NULL)
			str = "(nil)";
			printf("%s", str);
			break;
			default:
			i++;
			continue;
		}
		if (format[i + 1] != '\0')
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(formatos);
}
