#include "holberton.h"
#include <stdio.h>

/**
  *main - fizzbuzz
  *Return: 0
 */

int main(void)
{
	int cont, num;

	for (num = 1; num <= 100; num++)
	{
		cont = 0;
		if ((num % 3) == 0)
		{
			printf("Fizz");
			cont++;
		}
		if ((num % 5) == 0)
		{
			printf("Buzz");
			cont++;
		}
		if (cont == 0)
		{
			printf("%d", num);
		}
		if (num != 100)
		{
			putchar(' ');
		}
	}
	putchar('\n');
return (0);
}
