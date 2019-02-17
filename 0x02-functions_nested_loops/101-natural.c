#include "holberton.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n, num, sum;

	num = 1024;
	for (n = 0; n < num; n++)
	{
		if (n % 3 == 0 ||  n % 5 == 0)
		{
			sum = sum + n;
		}
	}
	printf("%d", sum);
	putchar('\n');
return (0);
}
