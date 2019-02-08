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
int o;
for (m = '0' ; m <= '7' ; m++)
{
	for (n = '0' ; n <= '8' ; n++)
	{
		for (o = '0' ; o <= '9' ; o++)
		{
			if (m < n && n < o)
			{
				putchar(m);
				putchar(n);
				putchar(o);
				if (m == '7' && n == '8' && o == '9')
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
}
putchar('\n');
return (0);
}
