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
for (m = '0' ; m <= '9' ; m++)
{
	putchar(m);
}
for (n = 'a' ; n <= 'f' ; n++)
{
	putchar(n);
}
putchar('\n');
return (0);
}
