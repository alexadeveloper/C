#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int m;
int n;
for (m = 0 ; m <= 98 ; m++)
{
	for (n = 1 ; n <= 99 ; n++)
	{
		if (n > m)
		{
			putchar((m / 10) + '0');
			putchar((m % 10) + '0');
			putchar(' ');
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');
			if (m == 98 && n == 99)
			{
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
putchar('\n');
return (0);
}
