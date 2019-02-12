#include "holberton.h"
#include <stdio.h>
/**
 *print_to_98  -  prints all natural numbers from n to 98
 *@n: is a int
 *Return: values 0
 */
void print_to_98(int n)
{
	int a;

	if (n > 98)
	{
		for (a = n ; a >= 98 ; a--)
		{
			printf("%d", a);
			if (a != 98)
			{
				printf(", ");
			}
		}
	}
	else if (n < 98)
	{
		for (a = n ; a <= 98 ; a++)
		{
			printf("%d", a);
			if (a != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		printf("98");
	}
printf("\n");
}
